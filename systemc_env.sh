# Change if necessary SystemC path
export SYSTEMC_PATH=~/systemc/systemc

export SYSTEMC_LIB_PATH=$SYSTEMC_PATH/lib-linux64
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$SYSTEMC_LIB_PATH

# clone systemc-vscode-project-template.git project 
systemc-new-project() {
if [ -z "$1" ]; then 
  echo "Error: add the name of the project" >&2
  echo "Example:  esp32-new-prj-template <my_project>" >&2
else 
  if [ ! -d "$1" ]; then
    git clone https://github.com/fmuller-pns/systemc-vscode-project-template.git
    rm -fR ./systemc-vscode-project-template/.git
    mv systemc-vscode-project-template $1
    cd $1
    echo "SystemC project created: $1"
  else
    echo "Error: the $1 SystemC project already exists!" >&2
  fi
fi
}