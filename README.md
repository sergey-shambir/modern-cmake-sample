# modern-cmake-sample

Sample C++ project which uses modern CMake to build

Пример C++ проекта, использующего современный диалект CMake.

Сборка вместе с тестами выглядит так:

```bash
# Конфигурируем.
cmake -DBUILD_TEST=ON .

# Собираем 2 библиотеки, 2 набора тестов и 1 исполняемый файл.
cmake --build .

# Запускаем тесты.
ctest
```

Лог сборки:

```
[ 20%] Built target libhello
[ 40%] Built target libgoodbye
Scanning dependencies of target hellogoodbyeapp
[ 50%] Building CXX object hellogoodbyeapp/CMakeFiles/hellogoodbyeapp.dir/main.cpp.o
[ 60%] Linking CXX executable hellogoodbyeapp
[ 60%] Built target hellogoodbyeapp
[ 80%] Built target libhellotest
Scanning dependencies of target libgoodbyetest
[ 90%] Building CXX object tests/libgoodbyetest/CMakeFiles/libgoodbyetest.dir/main.cpp.o
[100%] Linking CXX executable libgoodbyetest
[100%] Built target libgoodbyetest
```

Лог запуска тестов:

```
Test project /home/.../modern-cmake-sample
    Start 1: libhellotest
1/2 Test #1: libhellotest .....................   Passed    0.00 sec
    Start 2: libgoodbyetest
2/2 Test #2: libgoodbyetest ...................   Passed    0.00 sec

100% tests passed, 0 tests failed out of 2

Total Test time (real) =   0.01 sec
```
