git clone https://gitlab.gnome.org/GNOME/glib.git

echo "C:\Users\runneradmin\AppData\Roaming\Python\Python37\Scripts" | Out-File -FilePath $env:GITHUB_PATH 

cd glib
git checkout glib-2-70
choco install ninja
pip3 install --user meson
-Encoding utf8 -Append
meson _build

ninja -C _build
ninja -C _build install

