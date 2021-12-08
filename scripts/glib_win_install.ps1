git clone https://gitlab.gnome.org/GNOME/glib.git

echo "C:\Users\runneradmin\AppData\Roaming\Python\Python37\Scripts" | Out-File -FilePath $env:GITHUB_PATH -Encoding utf8 -Append

cd glib
git checkout glib-2-70
choco install ninja
pip3 install --user meson
meson _build

ninja -C _build
ninja -C _build install

