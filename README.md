# cdeez

some relearning of c, since it's a cool language.

this in fact was my main goal, but now i think it would be cool to implement a static analyzer.

this means that cdeez is more like: cdeez errors? since the program should check for some simple errors that could occur on a migration we're doing at the company.

written in c, god's programming language, it's highly efficient and together with valgrind i'm making sure no memory leaks are to be found.

## setup

the project can be built using make. so make sure make and build-essential are installed on your system.

### build project

```bash
make
```

### run binary

```bash
./cdeez
```

### clean crated object files and binaries

```bash
make clean
```
