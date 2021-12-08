git clone https://gitlab.gnome.org/GNOME/glib.git

cd glib
git checkout glib-2-70
choco install ninja
pip3 install --user meson
echo "C:\Users\runneradmin\AppData\Roaming\Python\Python37\Scripts" >> $GITHUB_PATH
meson _build

ninja -C _build
ninja -C _build install

