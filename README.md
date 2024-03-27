<div align="center">

##  ** My Hyprland Dot Files ** 

<br/>
</div>

## 👁️‍🗨️ My Hyprland install Scripts 👁️‍🗨️

- You can install Hyprland using Scripts below:

- https://github.com/TomekBobrowicz/hyprSuse

#### Some preview
<p align="center">
    <img align="center" width="49%" src="https://raw.githubusercontent.com/TomekBobrowicz/HyprDots/main/assets/Screenshot_26-Mar_11-38-51_15417.png" /> <img align="center" width="49%" src="https://raw.githubusercontent.com/TomekBobrowicz/HyprDots/main/assets/Screenshot_26-Mar_11-38-51_15417.png" />   

</p>


### 💥 Copying / Installation / Update instructions 💥

> [!Note] 
> The auto copy script will create backups of intended folders to be copied. However, still a good idea to manually backup just incase script failed to backup!
- ~/.config (btop cava hypr kitty rofi swappy swaylock swaync waybar wlogout) - These are folders to be copied.
- ~/Pictures/wallpapers - Will be backed up
- clone this repo by using git. Change directory, make executable and run the script
```bash
git clone --depth=1 https://github.com/TomekBobrowicz/HyprDots
cd Hyprland-Dots
```
- to copy/install from upstream (possible bugs)
```bash
chmod +x copy.sh
./copy.sh
```

#### ⚠️⚠️⚠️ A MUST! after copying  / Installing these dots

+ By default I have not set a wallpaper. Press SUPER W and set a wallpaper. This is also to initiate pywal for waybar, kitty (tty) and rofi themes. If you use the copy.sh script, you wont need to do this.

+ Nvidia Owners. Make sure to edit your `~/.config/hypr/UserConfigs/ENVariables.conf` (recommended). Below env's will be activated if automatic copy is used
> WLR_NO_CURSORS,1 , LIBVA_DRIVER_NAME,nvidia ,  __GLX_VENDOR_LIBRARY_NAME,nvidia 

+ If you have already set your own keybinds, monitors, etc.... Just copy over from backup created before log-out or reboot. (recommended)

#### 🙋 QUESTIONS ?!?! ⁉️
- FAQ! Yes you can use these dotfiles to other distro! Just ensure to install proper packages first! If it makes you feel better, I use same config on Fedora
- Keybinds Hint can be launched by Keybind SUPER H

 #### Software used
-  neovim and astronvim
-  google chrome
-  alacritty + alacritty-themes
