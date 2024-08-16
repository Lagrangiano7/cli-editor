# CLI Editor

This project intends to be a minimal implementation of a command-line integrated file editor. The philosophy that underlies this project is based on the following points:

1. **Simplicity** in detriment of customisation: the user must only tell the program what he wishes to do with the file of interest: read, write or append.

2. **Speed** in detriment of easier development: the project is developed 100% in C, which makes the editor considerably fastet than if it were developed in an interpreted language, like Python.

3. **Cross platform** in detriment of platform-dependent customisation: since the editor is aimed to be used regardless of the user's OS, it is a compiled bin file which can be executed cross platform. Also, this means it doesn't need any additional software to be installed in order to use it

## Usage

`$ ./editor FILENAME r/w/a`