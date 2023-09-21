# Visual Studio Code Template for SystemC

## Getting Started

### Install prerequisites
We must install SystemC, Visual Studio Code environment and GTKWave on the computer.

* For more details for SystemC, see: https://www.accellera.org/downloads/standards/systemc

* In Visual Studio Code, check that the C/C++ extension is installed. If this is not the case, go to the "extension" menu and click on "Install".

* As of VS-code v1.56.1 integrated terminals require additional configuration to work correctly. see https://code.visualstudio.com/docs/getstarted/settings#_settings-file-locations to edit the `setting.json` file and add the following entry:
```bash
"terminal.integrated.allowWorkspaceConfiguration":true
```

#### 1. To use project template without modification path, install SystemC in `~/systemc/systemc` as below:
1. Create folder:
```bash
cd ~
mkdir systemc
cd systemc
```
2. Copy the `systemc-2.3.3.zip` or `systemc-2.3.3.tar.gz` file in the `~/systemc` folder and unzip as below:
```bash
unzip systemc-2.3.3.zip
or
tar -zxvf systemc-2.3.3.tar.gz 
``` 
3. Rename the folder:
```bash
mv systemc-2.3.3 systemc
``` 
#### 2. Follow the INSTALL text file to install SystemC. To better debug, use the command below with option at step 5 in INSTALL file (Configure the package for your system)
```bash
../configure --enable-debug
```
- https://code.visualstudio.com/
- http://gtkwave.sourceforge.net/ 

   Tip for Linux installation:
```bash
sudo apt install gtkwave
```
### Using SystemC Template Project

Firstly, you have to clone the `systemc-vscode-project-template` project and follow the next steps.
```bash
git clone https://github.com/fmuller-pns/systemc-vscode-project-template.git
```

#### 1. Rename the `vscode_project_template` folder
```bash
mv systemc-vscode-project-template <my_project_name>
```
#### 2. Go to the project directory
```bash
cd <my_project_name>
```
#### 3. Remove the GIT directory
```bash
rm -fR .git
```
#### 4. Open and verify path in the `systemc_env.sh` file and change them if wrong.
```bash
export SYSTEMC_PATH=~/systemc/systemc
```
#### 5. Add SystemC environment variables 
2 solutions are proposed:

1. Copy contents to the end of the `.bashrc` file just once (best solution)
```bash
cat systemc_env.sh >> ~/.bashrc
```
2. At each time you open a Terminal, you must enter this command before launching Visual Studio Code:
```bash
source systemc_env.sh
```
#### 6. Open Visual Studio Code for the new project
```bash
code .
```
#### 7. Verify path in the `c_cpp_properties.json` file and change them if wrong.
```json
"SYSTEMC_PATH": "~/systemc/systemc"
```

#### 8. [Not required] Change the default project name called `main` in files.
This step renames the executable file. By default, the executable file is `main`.
1. Open `Makefile` and replace `main` by <my_project_name>
2. Open `.vscode/launch.json` and replace `main` by <my_project_name> (lines 13)

#### 9. Building and running project
In the Menu, Run `Start Debugging` or `Run Without Debbuging`

To exit monitoring, typing `Ctrl+AltGr+]`

## Useful Commands 

#### Open external terminal from Visual Studio Code to perform commands

  * using keyboard shortcut: `Ctrl+Shift+C`
  * or pressing `F1` key and typing `external`

#### Open integrated terminal from Visual Studio Code to perform commands

  * using keyboard shortcut: `Ctrl+Shift+`<sup>2</sup>
  * or pressing `F1` key and typing `integrated`

#### Clean project
```bash
make clean
```

#### Build and run the project
```bash
make run
```
To exit monitoring, typing `Ctrl+AltGr+]`

#### For help
```bash
make help
```

## Using Tasks for SystemC to run, debug Project and so on

1. In the menu, select `Run Task...`
2. Select the task you want to launch:
- `SystemC - Build`: build the project
- `SystemC - Run`: Run the project
- `SystemC - Run GTKWave`: Run GTKWave
- `SystemC - Clean`: Clean project (Full clean)  
- `SystemC - Doxygen - HTML doc.`: Generate HTML documentation with Doxygen

## Configure GIT for your new project

#### Go to your new project folder
```bash
cd <project_name>
```
#### Configure name and email address
```bash
git config --global user.name "your name" 
git config --global user.email "your email address"
```
#### Avoid typing your username and password in vscode each time
This is useful when connecting your GIT to GitHub.
```bash
git config credential.helper store
```

## Using GitHub with visual studio code

We consider you have followed the sections above:
* Getting Started
* Configure GIT for your new project

Now, how to communicate with GitHub ?

1. Open visual studio code.
2. Click on the `Source Control` icon on your left side or use `Ctrl+Shift+G` shortcut. 
3. For the first time, click on `Initialize Repository` button
4. Enter a message for your first commit (ex: first commit) and click on Commit icon
5. Press `F1` and typing `git add remote` and entering :
   * *remote name* : your github repository previously created
   * *remote url* : https://github.com/xxx/your_project.git
   * *username* and *password*
6. Push to the GitHub server (master branch)

See https://code.visualstudio.com/docs/editor/versioncontrol for more details.

## Generate Doxygen documentation

You can use [Using Tasks for SystemC](#using-tasks-for-systemmc-to-run-debug-project-and-so-on) or follow the steps below.

1. Open external terminal from vscode, using keyboard shortcut: `Ctrl+Shift+C`, or pressing `F1` key and typing `external`
2. Generate HTML documentation

  * From the User interface (allow you updating the `Doxyfile` configuration file)

```bash
doxywizard
```

  * Directly from `Doxyfile` configuration file


```bash
doxygen
```
3. A new `html` folder  is created, the entry file is `index.html`

