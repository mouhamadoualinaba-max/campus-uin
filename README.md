# UIN-Campus

Système de gestion académique de l'UIN — projet fil rouge du cours de POO en C++ (C++23).

## Versions des outils (TP 2, partie A)

| Outil   | Version     |
|---------|-------------|
| g++     |  15.2.0     |
| clang++ |  21.1.8     |
| cmake   |   4.2.3     |
| ninja   |   1.13.2    |
| gdb     |    17.1     |
| git     |   2.53.0    |

Relever les versions avec : `g++ --version`, `clang++ --version`, `cmake --version`,
`ninja --version`, `gdb --version`, `git --version`.

## Construction

```bash
cmake --preset debug
cmake --build --preset debug
./build/debug/uin-campus
```

Pour clangd :

```bash
ln -s build/debug/compile_commands.json .
```

## Qualité du code

```bash
clang-format -i include/uincampus/*.hpp src/*.cpp app/*.cpp
clang-tidy -p build/debug src/*.cpp app/*.cpp
```

## Résultat attendu

```
UIN-Campus — Système de gestion académique
Version 0.1.0
```
