# Лабораторная работа №2




# Part I

## 1) Создайте пустой репозиторий на сервисе github.com (или gitlab.com, или bitbucket.com).

- [x] Yep




## 2) Выполните инструкцию по созданию первого коммита на странице репозитория, созданного на предыдещем шаге.

- [x] git init
- [x] git add .
- [x] git commit -m "first commit"
- [x] git remote add origin https://github.com/Policaika/lab02.git
- [x] git push -u origin main


```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git init              
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint:
hint:   git config --global init.defaultBranch <name>
hint:
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint:
hint:   git branch -m <name>
hint:
hint: Disable this message with "git config set advice.defaultBranchName false"
Инициализирован пустой репозиторий Git в /home/p/Рабочий стол/Policaika/workspace/reports/lab02/.git/
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git add README.md
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git status       
Текущая ветка: master

Еще нет коммитов

Изменения, которые будут включены в коммит:
  (используйте «git rm --cached <файл>...», чтобы убрать из индекса)
        новый файл:    README.md

Неотслеживаемые файлы:
  (используйте «git add <файл>...», чтобы добавить в то, что будет включено в коммит)
        .README.md.swp
```

Для того, чтобы временный файл с раширение .swp, то есть чтобы так называемые dump-files не мусорили репозиторий, создадим файл с расширением .gitignore - те файлы,
которые не будут попадать в репозиторий, а затем добавим туда исключаний. Все это нужно для того, чтобы не добавлять каждый раз через git add конкретный файл, а добавить всю
директорию сразу: git add .

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ touch .gitignore
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ cat .gitignore
*build*/
*install*/
*.swp
.idea/
```

После этого видим такую картину

```zsh
──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git add .        
```
```zsh                                                                                                                                                                                   
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git status
Текущая ветка: master

Еще нет коммитов

Изменения, которые будут включены в коммит:
  (используйте «git rm --cached <файл>...», чтобы убрать из индекса)
        новый файл:    .gitignore
        новый файл:    README.md
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git commit -m "first commit"  
[master (корневой коммит) df6b965] first commit
 2 files changed, 47 insertions(+)
 create mode 100644 .gitignore
 create mode 100644 README.md
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git remote add origin https://github.com/Policaika/lab02.git
```
```zsh                                                                                                                                                                             
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git remote -v                                               
origin  https://github.com/Policaika/lab02.git (fetch)
origin  https://github.com/Policaika/lab02.git (push)
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git push --set-upstream origin main    
Перечисление объектов: 4, готово.
Подсчет объектов: 100% (4/4), готово.
При сжатии изменений используется до 12 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (4/4), 2.84 КиБ | 1.42 МиБ/с, готово.
Total 4 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To https://github.com/Policaika/lab02.git
 * [new branch]      main -> main
branch 'main' set up to track 'origin/main'.
```

## 3) Создайте файл hello_world.cpp в локальной копии репозитория (который должен был появиться на шаге 2). Реализуйте программу Hello world на языке C++ используя плохой стиль кода.

Например, после заголовочных файлов вставьте строку using namespace std;.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ touch hellp_world.cpp
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ cat > hello_world.cpp <<EOF
heredoc> #include <iostream>
heredoc> using namespace std;
heredoc> int main()  
heredoc> {
heredoc> cout << "Hello world" << endl;
heredoc> return 0;  
heredoc> }
heredoc> EOF
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ cat hello_world.cpp        
#include <iostream>
using namespace std;
int main()
{
cout << "Hello world" << endl;
return 0;
}
```

## 4) Добавьте этот файл в локальную копию репозитория.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git add .
```
```zsh                                                                                                                                                                                   
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git status
Текущая ветка: main
Эта ветка соответствует «origin/main».

Изменения, которые будут включены в коммит:
  (используйте «git restore --staged <файл>...», чтобы убрать из индекса)
        новый файл:    hello_world.cpp
```

## 5) Закоммитьте изменения с осмысленным сообщением.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git commit -m "Added cpp file to print Hello world"
[main 821fef5] Added cpp file to print Hello world
 1 file changed, 7 insertions(+)
 create mode 100644 hello_world.cpp
```

## 6) Изменитьте исходный код так, чтобы программа через стандартный поток ввода запрашивалось имя пользователя. А в стандартный поток вывода печаталось сообщение Hello world from @name, где @name имя пользователя.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ cat > hello_world.cpp <<EOF
heredoc> #include <iostream>
heredoc> #include <string>
heredoc> using namespace std;
heredoc> int main()  
heredoc> {
heredoc> string name;   
heredoc> cout << "Введите имя пользователя: ";
heredoc> getline(cin,name);          
heredoc> cout << "Hello world from @" << name << endl;
heredoc> return 0;  
heredoc> }
heredoc> EOF
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ cat hello_world.cpp        
#include <iostream>
#include <string>
using namespace std;
int main()
{
string name;
cout << "Введите имя пользователя: ";
getline(cin,name);
cout << "Hello world from @" << name << endl;
return 0;
}
```

## 7) Закоммитьте новую версию программы. Почему не надо добавлять файл повторно git add?

В данный момент файл уже отслеживается, то есть находится под контролем git и нам не нужно его добавлять заного.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git status         
Текущая ветка: main
Ваша ветка опережает «origin/main» на 1 коммит.
  (используйте «git push», чтобы опубликовать ваши локальные коммиты)

Изменения, которые будут включены в коммит:
  (используйте «git restore --staged <файл>...», чтобы убрать из индекса)
        изменено:      hello_world.cpp

Изменения, которые не в индексе для коммита:
  (используйте «git add <файл>...», чтобы добавить файл в индекс)
  (используйте «git restore <файл>...», чтобы отменить изменения в рабочем каталоге)
        изменено:      hello_world.cpp
```

Будет достаточно добавить в коммит параметр -a, который автоматически добавляет изменения

```zsh
──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git commit -am "Added a new version of print Hello world with target on person"
[main 111a717] Added a new version of print Hello world with target on person
 1 file changed, 6 insertions(+), 1 deletion(-)
```

## 8) Запуште изменения в удалёный репозиторий.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git push                           
Перечисление объектов: 7, готово.
Подсчет объектов: 100% (7/7), готово.
При сжатии изменений используется до 12 потоков
Сжатие объектов: 100% (6/6), готово.
Запись объектов: 100% (6/6), 840 байтов | 840.00 КиБ/с, готово.
Total 6 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), done.
To https://github.com/Policaika/lab02.git
   537a1ec..111a717  main -> main
```

## 9) Проверьте, что история коммитов доступна в удалёный репозитории.

![The proof](https://files.catbox.moe/x1mwsf.png)

# Part II

Note: Работать продолжайте с теми же репоззиториями, что и в первой части задания.

## 10) В локальной копии репозитория создайте локальную ветку patch1.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git branch patch1
```
```zsh                                                                                                                                                                                   
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git branch       
* main
  patch1
```

## 11) Внесите изменения в ветке patch1 по исправлению кода и избавления от using namespace std;.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ cat > hello_world.cpp <<EOF
heredoc> #include <iostream>
#include <string>
int main()
{
std::string name;
std::cout << "Введите имя пользователя: ";
std::getline(std::cin,name);
std::cout << "Hello world from @" << name << std::endl;
return 0;
}
heredoc> EOF
```

## 12) commit, push локальную ветку в удалённый репозиторий.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git commit -am "Added a patch version of hello world without using namespace std"
[patch1 68e15a2] Added a patch version of hello world without using namespace std
 1 file changed, 4 insertions(+), 6 deletions(-)
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git push origin patch1             
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 12 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 463 байта | 463.00 КиБ/с, готово.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
remote:
remote: Create a pull request for 'patch1' on GitHub by visiting:
remote:      https://github.com/Policaika/lab02/pull/new/patch1
remote:
To https://github.com/Policaika/lab02.git
 * [new branch]      patch1 -> patch1
```

## 13) Проверьте, что ветка patch1 доступна в удалёный репозитории.

![The proof](https://files.catbox.moe/6bw7hg.png)


## 14) Создайте pull-request patch1 -> master.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ gh pr create --base main --head patch1 --title "Style: remove using namespace std;" --body "Cause using namespace std import all names from library"

Creating pull request for patch1 into main in Policaika/lab02

https://github.com/Policaika/lab02/pull/1
```

## 15) В локальной копии в ветке patch1 добавьте в исходный код комментарии.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ nano hello_world.cpp
```
```zsh                                                                                                                                                                                  
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ cat hello_world.cpp        
#include <iostream> // Библиотека ввода/выода
#include <string> // Библиотека для строкового типа данных
int main()
{
std::string name; // Переменная для имя пользователя
std::cout << "Введите имя пользователя: "; // Вывод в консоль запроса на ввод имени пользователя
std::getline(std::cin,name); // Считываение данных из буфера
std::cout << "Hello world from @" << name << std::endl; // Вывод строки Hello world с именем пользователя на экран
return 0; // Очищаем регистры/стек
}
```

## 16) commit, push.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git commit -am "Added comments in hello_world.cpp"                               
[patch1 2aa3611] Added comments in hello_world.cpp
 1 file changed, 7 insertions(+), 7 deletions(-)
```
```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git push -u origin patch1
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 12 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 632 байта | 632.00 КиБ/с, готово.
Total 3 (delta 1), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/Policaika/lab02.git
   68e15a2..2aa3611  patch1 -> patch1
branch 'patch1' set up to track 'origin/patch1'.
```

## 17) Проверьте, что новые изменения есть в созданном на шаге 5 pull-request

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ gh pr view #2
Style: remove using namespace std; Policaika/lab02#2
Open • Policaika wants to merge 2 commits into main from patch1 • about 20 minutes ago
+7 -9 • No checks


  Cause using namespace std import all names from library                                                             


View this pull request on GitHub: https://github.com/Policaika/lab02/pull/2
```

![PR view #2](https://files.catbox.moe/pt533w.png)

## 18) В удалённый репозитории выполните слияние PR patch1 -> master и удалите ветку patch1 в удаленном репозитории.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ gh pr merge -m -d
✓ Merged pull request Policaika/lab02#2 (Style: remove using namespace std;)
remote: Enumerating objects: 1, done.
remote: Counting objects: 100% (1/1), done.
remote: Total 1 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
Распаковка объектов: 100% (1/1), 910 байтов | 910.00 КиБ/с, готово.
Из https://github.com/Policaika/lab02
 * branch            main       -> FETCH_HEAD
   111a717..91f5b57  main       -> origin/main
Обновление 111a717..91f5b57
Fast-forward
 hello_world.cpp | 16 +++++++---------
 1 file changed, 7 insertions(+), 9 deletions(-)
✓ Deleted local branch patch1 and switched to branch main
✓ Deleted remote branch patch1
```

## 19) Локально выполните pull.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git pull                 
Уже актуально.
```

## 20) С помощью команды git log просмотрите историю в локальной версии ветки master.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git log   
commit 91f5b576f39a23bbb3e693a03714d1244ccd57f0 (HEAD -> main, origin/main, origin/HEAD)
Merge: 111a717 20198f0
Author: Policaika <129010850+Policaika@users.noreply.github.com>
Date:   Mon Mar 16 00:14:08 2026 +0300

    Merge pull request #2 from Policaika/patch1
    
    Style: remove using namespace std;

commit 20198f0cae1aa8a405965c411e48b442bfee6b5a (origin/patch1)
Author: Policaika <serezapovisok@gmail.com>
Date:   Sun Mar 15 23:49:39 2026 +0300

    Added comments in hello_world.cpp

commit bfbcf4a77210a6f97706e932ec159749b9448bf3
Author: Policaika <serezapovisok@gmail.com>
Date:   Sun Mar 15 23:46:23 2026 +0300

    Added a patch version of hello world without using namespace std

commit 111a717b00c4bfa1bca18468b957f39b80f946be
Author: Policaika <serezapovisok@gmail.com>
Date:   Sun Mar 15 18:03:44 2026 +0300

    Added a new version of print Hello world with target on person

commit 821fef51fb123f408ff5c6d5481d7ea24920ab2e
Author: Policaika <serezapovisok@gmail.com>
Date:   Sun Mar 15 17:12:39 2026 +0300

    Added cpp file to print Hello world

commit 537a1ec65a19630c3164f48a8563334bfcff99e8
Author: Policaika <serezapovisok@gmail.com>
Date:   Sun Mar 15 16:49:41 2026 +0300

    first commit
```

## 21) Удалите локальную ветку patch1.

- [x] Well done! check number 18!

# Part III

Note: Работать продолжайте с теми же репоззиториями, что и в первой части задания.

## 22) Создайте новую локальную ветку patch2.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git branch -c patch2
```
```zsh                                                                                                                                                                                   
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git branch -vv      
* main   91f5b57 [origin/main] Merge pull request #2 from Policaika/patch1
  patch2 91f5b57 [origin/main] Merge pull request #2 from Policaika/patch1
```

## 23) Измените code style с помощью утилиты clang-format. Например, используя опцию -style=Mozilla.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ clang-format -i -style=Mozilla hello_world.cpp
```
```zsh                                                                                                                                                                                   
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git diff hello_world.cpp
diff --git a/hello_world.cpp b/hello_world.cpp
index 9d4a37b..8121717 100644
--- a/hello_world.cpp
+++ b/hello_world.cpp
@@ -1,10 +1,14 @@
 #include <iostream> // Библиотека ввода/выода
-#include <string> // Библиотека для строкового типа данных
-int main()
+#include <string>   // Библиотека для строкового типа данных
+int
+main()
 {
-std::string name; // Переменная для имя пользователя
-std::cout << "Введите имя пользователя: "; // Вывод в консоль запроса на ввод имени пользователя
-std::getline(std::cin,name); // Считываение данных из буфера
-std::cout << "Hello world from @" << name << std::endl; // Вывод строки Hello world с именем пользователя на экран
-return 0; // Очищаем регистры/стек
+  std::string name;                          // Переменная для имя пользователя
+  std::cout << "Введите имя пользователя: "; // Вывод в консоль запроса на ввод
+                                             // имени пользователя
+  std::getline(std::cin, name); // Считываение данных из буфера
+  std::cout
+    << "Hello world from @" << name
+    << std::endl; // Вывод строки Hello world с именем пользователя на экран
+  return 0;       // Очищаем регистры/стек
 }
```

Как оказалось, diff - это очень полезная функция git`а, т.к можно смотреть разницу максимально наглядно, не заходя в сам репозиторий!


## 24) commit, push, создайте pull-request patch2 -> master.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git commit -am "style: format code with clang-format from myself to Mozilla style"     
[patch2 1677942] style: format code with clang-format from myself to Mozilla style
 1 file changed, 11 insertions(+), 7 deletions(-)
```

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git push -u origin patch2                                                              
Перечисление объектов: 5, готово.
Подсчет объектов: 100% (5/5), готово.
При сжатии изменений используется до 12 потоков
Сжатие объектов: 100% (3/3), готово.
Запись объектов: 100% (3/3), 425 байтов | 425.00 КиБ/с, готово.
Total 3 (delta 2), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
remote:
remote: Create a pull request for 'patch2' on GitHub by visiting:
remote:      https://github.com/Policaika/lab02/pull/new/patch2
remote:
To https://github.com/Policaika/lab02.git
 * [new branch]      patch2 -> patch2
branch 'patch2' set up to track 'origin/patch2'.
```

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ gh pr create --base main --head patch2 --title "Style: transform style code from myself to Mozilla" --body "Formatted to Mozilla style with clang-format"        

Creating pull request for patch2 into main in Policaika/lab02

https://github.com/Policaika/lab02/pull/3
```

## 25) В ветке master в удаленном репозитории измените комментарии, например, расставьте знаки препинания, переведите комментарии на другой язык.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git branch     
* main
  patch2
```
```zsh
──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ nano hello_world.cpp
```

```zsh                                                                                                                                                                                   
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ cat hello_world.cpp                           
#include <iostream> // Input/Output library
#include <string> // String data type library
int main()
{
std::string name; // Variable for user`s name
std::cout << "Введите имя пользователя: "; // Proposal to enter the name
std::getline(std::cin,name); // Reading data from the buffer
std::cout << "Hello world from @" << name << std::endl; // Print Hello world with user`s name
return 0; // Cleaning registers/stack
}
```

## 26) Убедитесь, что в pull-request появились конфликтны.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ cat hello_world.cpp 
#include <iostream> // Input/Output library
#include <string> // String data type library
int main()
{
std::string name; // Variable for user`s name
std::cout << "Введите имя пользователя: "; // Proposal to enter the name
std::getline(std::cin,name); // Reading data from the buffer
std::cout << "Hello world from @" << name << std::endl; // Print Hello world with user`s name
return 0; // Cleaning registers/stack
}
```

```zsh                                                                                                                                                                                                 
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git switch patch2 
Переключились на ветку «patch2»
Эта ветка соответствует «origin/patch2».
```

```zsh                                                                                                                                                                                                       
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ cat hello_world.cpp 
#include <iostream> // Библиотека ввода/выода
#include <string>   // Библиотека для строкового типа данных
int
main()
{
  std::string name;                          // Переменная для имя пользователя
  std::cout << "Введите имя пользователя: "; // Вывод в консоль запроса на ввод
                                             // имени пользователя
  std::getline(std::cin, name); // Считываение данных из буфера
  std::cout
    << "Hello world from @" << name
    << std::endl; // Вывод строки Hello world с именем пользователя на экран
  return 0;       // Очищаем регистры/стек
}
```

```zsh                                                                                                                                                                                                       
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git rebase main                
Автослияние hello_world.cpp
КОНФЛИКТ (содержимое): Конфликт слияния в hello_world.cpp
error: не удалось применить коммит 1677942... style: format code with clang-format from myself to Mozilla style
hint: Resolve all conflicts manually, mark them as resolved with
hint: "git add/rm <conflicted_files>", then run "git rebase --continue".
hint: You can instead skip this commit: run "git rebase --skip".
hint: To abort and get back to the state before "git rebase", run "git rebase --abort".
hint: Disable this message with "git config set advice.mergeConflict false"
Не удалось применить коммит 1677942... # style: format code with clang-format from myself to Mozilla style
```

## 27) Для этого локально выполните pull + rebase (точную последовательность команд, следует узнать самостоятельно). Исправьте конфликты.

```zsh
──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git status       
интерактивное перемещение в процессе; над 764e66d
Last command done (1 command done):
   pick 1677942 # style: format code with clang-format from myself to Mozilla style
Команд больше не осталось.
Вы сейчас перемещаете ветку «patch2» над «764e66d».
  (разрешите конфликты, затем запустите «git rebase --continue»)
  (используйте «git rebase --skip», чтобы пропустить этот патч)
  (используйте «git rebase --abort», чтобы перейти на оригинальную ветку)

Не слитые пути:
  (используйте «git restore --staged <файл>...», чтобы убрать из индекса)
  (используйте «git add <файл>...», чтобы пометить разрешение конфликта)
        оба изменены:   hello_world.cpp

индекс пуст (используйте «git add» и/или «git commit -a»)
```

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git diff                
diff --cc hello_world.cpp
index d9aa23d,8121717..0000000
--- a/hello_world.cpp
+++ b/hello_world.cpp
@@@ -1,10 -1,14 +1,26 @@@
++<<<<<<< HEAD
 +#include <iostream> // Input/Output library
 +#include <string> // String data type library
 +int main()
 +{
 +std::string name; // Variable for user`s name
 +std::cout << "Введите имя пользователя: "; // Proposal to enter the name
 +std::getline(std::cin,name); // Reading data from the buffer
 +std::cout << "Hello world from @" << name << std::endl; // Print Hello world with user`s name
 +return 0; // Cleaning registers/stack
++=======
+ #include <iostream> // Библиотека ввода/выода
+ #include <string>   // Библиотека для строкового типа данных
+ int
+ main()
+ {
+   std::string name;                          // Переменная для имя пользователя
+   std::cout << "Введите имя пользователя: "; // Вывод в консоль запроса на ввод
+                                              // имени пользователя
+   std::getline(std::cin, name); // Считываение данных из буфера
+   std::cout
+     << "Hello world from @" << name
+     << std::endl; // Вывод строки Hello world с именем пользователя на экран
+   return 0;       // Очищаем регистры/стек
++>>>>>>> 1677942 (style: format code with clang-format from myself to Mozilla style)
  }
```

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git restore --source="1677942" hello_world.cpp 
```

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git status                                    
интерактивное перемещение в процессе; над 764e66d
Last command done (1 command done):
   pick 1677942 # style: format code with clang-format from myself to Mozilla style
Команд больше не осталось.
Вы сейчас перемещаете ветку «patch2» над «764e66d».
  (разрешите конфликты, затем запустите «git rebase --continue»)
  (используйте «git rebase --skip», чтобы пропустить этот патч)
  (используйте «git rebase --abort», чтобы перейти на оригинальную ветку)

Не слитые пути:
  (используйте «git restore --staged <файл>...», чтобы убрать из индекса)
  (используйте «git add <файл>...», чтобы пометить разрешение конфликта)
        оба изменены:   hello_world.cpp

индекс пуст (используйте «git add» и/или «git commit -a»)
```

```zsh                                                                                                                                                                                                       
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git add hello_world.cpp 
```

```zsh                                                                                                                                                                                                       
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git status             
интерактивное перемещение в процессе; над 764e66d
Last command done (1 command done):
   pick 1677942 # style: format code with clang-format from myself to Mozilla style
Команд больше не осталось.
Вы сейчас перемещаете ветку «patch2» над «764e66d».
  (все конфликты разрешены: запустите «git rebase --continue»)

Изменения, которые будут включены в коммит:
  (используйте «git restore --staged <файл>...», чтобы убрать из индекса)
        изменено:      hello_world.cpp
```

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git rebase --continue                         
[отделённый HEAD 0fbd0ad] style: format code with clang-format from myself to Mozilla style
 1 file changed, 12 insertions(+), 8 deletions(-)
Успешно перемещён и обновлён refs/heads/patch2.
```

## 28) Сделайте force push в ветку patch2

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git push --force origin patch2
Перечисление объектов: 8, готово.
Подсчет объектов: 100% (8/8), готово.
При сжатии изменений используется до 12 потоков
Сжатие объектов: 100% (6/6), готово.
Запись объектов: 100% (6/6), 956 байтов | 956.00 КиБ/с, готово.
Total 6 (delta 3), reused 0 (delta 0), pack-reused 0 (from 0)
remote: Resolving deltas: 100% (3/3), completed with 2 local objects.
To https://github.com/Policaika/lab02.git
 + 1677942...0fbd0ad patch2 -> patch2 (forced update)
```

## 29) Убедитель, что в pull-request пропали конфликтны.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git log   
commit 0fbd0ad50b89093f3534e16a918412ff2a9c9d29 (HEAD -> patch2, origin/patch2)
Author: Policaika <serezapovisok@gmail.com>
Date:   Mon Mar 16 00:40:36 2026 +0300

    style: format code with clang-format from myself to Mozilla style

commit 764e66db69014ee82ae09b8812331bad1ff7a879 (main)
Author: Policaika <serezapovisok@gmail.com>
Date:   Mon Mar 16 17:27:30 2026 +0300

    Style: refresh comments into English

commit 91f5b576f39a23bbb3e693a03714d1244ccd57f0
Merge: 111a717 20198f0
Author: Policaika <129010850+Policaika@users.noreply.github.com>
Date:   Mon Mar 16 00:14:08 2026 +0300

    Merge pull request #2 from Policaika/patch1
    
    Style: remove using namespace std;

commit 20198f0cae1aa8a405965c411e48b442bfee6b5a (origin/patch1)
Author: Policaika <serezapovisok@gmail.com>
Date:   Sun Mar 15 23:49:39 2026 +0300

    Added comments in hello_world.cpp

commit bfbcf4a77210a6f97706e932ec159749b9448bf3
Author: Policaika <serezapovisok@gmail.com>
Date:   Sun Mar 15 23:46:23 2026 +0300

    Added a patch version of hello world without using namespace std

commit 111a717b00c4bfa1bca18468b957f39b80f946be
Author: Policaika <serezapovisok@gmail.com>
Date:   Sun Mar 15 18:03:44 2026 +0300

    Added a new version of print Hello world with target on person

commit 821fef51fb123f408ff5c6d5481d7ea24920ab2e
Author: Policaika <serezapovisok@gmail.com>
Date:   Sun Mar 15 17:12:39 2026 +0300

    Added cpp file to print Hello world

commit 537a1ec65a19630c3164f48a8563334bfcff99e8
Author: Policaika <serezapovisok@gmail.com>
Date:   Sun Mar 15 16:49:41 2026 +0300

    first commit
```

```zsh                                                                                                                                                                                                       
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ gh pr view 3
Style: transform style code from myself to Mozilla Policaika/lab02#3
Open • Policaika wants to merge 2 commits into main from patch2 • about 23 hours ago
+11 -7 • No checks


  Formatted to Mozilla style with clang-format                                                                        


View this pull request on GitHub: https://github.com/Policaika/lab02/pull/3
```

## 30) Вмержите pull-request patch2 -> master.

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git branch        
  main
* patch2
```

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git switch main  
Переключились на ветку «main»
Ваша ветка и «origin/main» разделились
и теперь имеют 1 и 1 разных коммита в каждой соответственно.
  (use "git pull" if you want to integrate the remote branch with yours)
```

```zsh                                                                                                                                                                                                       
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git branch     
* main
  patch2
```
 
```zsh
                                                                                                                                                                                                    
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git merge patch2
Обновление 764e66d..0fbd0ad
Fast-forward
 hello_world.cpp | 20 ++++++++++++--------
 1 file changed, 12 insertions(+), 8 deletions(-)
```

Так как репозиторий мой, то используем --force вместо git pull --rebase и дальнейшего подстраивания собственных изменений с чужими

```zsh
┌──(p㉿Policai)-[~/…/Policaika/workspace/reports/lab02]
└─$ git push --force origin main  
Total 0 (delta 0), reused 0 (delta 0), pack-reused 0 (from 0)
To https://github.com/Policaika/lab02.git
 + e048132...0fbd0ad main -> main (forced update)
```
