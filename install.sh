sudo make
sudo mkdir /usr/bin/cli-editor
sudo mv ./editor /usr/bin/cli-editor

sudo echo 'alias edit="/usr/bin/cli-editor/editor"' >> ~/.bashrc