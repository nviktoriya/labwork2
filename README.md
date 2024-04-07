## Лабораторная работа №2
### Студент
Назарова Виктория, группа ИУ8-21
### Цель
Изучение систем контроля версий на примере Git
## Задания
### Часть I
Инициализирую локальный репозиторий:
``` sh
$ cd ~/workspace/projects/lab02
```
``` sh
$ git init
 ```
Добавляю удалённый репозиторий:
``` sh
$ git remote add origin https://github.com/nviktoriya/labwork2
```
Обновляю локальный репозиторий данными удалённого:
``` sh
$ git pull origin master
```
3. Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода. Например, после заголовочных файлов вставьте строку using namespace std;.
Создаю файл hello_world.cpp:
``` sh
$ touch hello_world.cpp
```
Реализовываю программу Hello World:
``` sh
$ cat > hello_world.cpp <<EOF
>#include <iostream>
>using namespace std;
>int main(){
>cout << "Hello, World!" << endl;
>return 0;
>}
>EOF
```
4. Добавьте этот файл в локальную копию репозитория.
``` sh
$ git add hello_world.cpp
```
5. Закоммитьте изменения с осмысленным сообщением.
``` sh
$ git commit -m "added hello_world.cpp"
```
6. Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.
Редактирую файл hello_world.cpp:
``` sh
$ nano hello_world.cpp
```
7. Закоммитьте новую версию программы.
``` sh
$ git commit -am "changed hello_world.cpp"
```
8. Запуште изменения в удалёный репозиторий.
``` sh
$ git push origin master
```
### Часть II
1. В локальной копии репозитория создайте локальную ветку patch1.
``` sh
$ git checkout -b patch1
```
2. Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;.
Редактирую файлhello_world.cpp:
``` sh
$ nano hello_world.cpp
```
3. commit, push локальную ветку в удалённый репозиторий.
``` sh
$ git commit -am "removed using namespace std"
```
``` sh
$ git push -u origin HEAD
```
6. В локальной копии в ветке patch1 добавьте в исходный код комментарии.
Редактирую файл hello_world.cpp:
``` sh
$ nano hello_world.cpp
```
7. commit, push.
``` sh
$ git commit -am "comment in hello_world.cpp"
```
10. Локально выполните pull.
``` sh
$ git pull
```
12. Удалите локальную ветку patch1.
``` sh
$ git branch -D patch1
```
### Часть III
1. Создайте новую локальную ветку patch2.
``` sh
$ git checkout -b patch2
```
2. Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.
``` sh
$ sudo apt install clang-format
```
``` sh
$ clang-format -i -style=Mozilla hello_world.cpp
```
3. commit, push, создайте pull-request patch2 -> master.
``` sh
$ git commit -am "changed code style"
```
``` sh
$ git push -u origin HEAD
```
6. Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.
``` sh
$ git pull
```
``` sh
$ git rebase master
```
7. Сделайте force push в ветку patch2.
``` sh
$ git push origin patch2 --force
```
