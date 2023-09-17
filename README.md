# PrBoomX

*JadingTsunami's PrBoom-Plus Fork*

This is my own personal fork of PrBoom-Plus. It contains quality-of-play upgrades that I like and you may or may not.

* Zip file support
    * Note all WAD/DEH/BEX in the zip will be loaded
* Drop-down console (default key bind: `~`)
    * 16-command history, use up/down arrows
    * Cheats work in the console
    * Command listing below
* "Buddha" cheat similar to GZDoom
    * Also adds regeneration if you stand still, similar to modern FPS games
* Targeted massacre cheat: `tntsem`
    * Kills only monsters currently targeting the player
* Optional uncapped framerate limiting
* Option to organize save games based on loaded content (WAD, DEH, etc.)
    * Note the order in which content is loaded matters
* Option to skip QuickSave/QuickLoad confirmation prompt
* Note-taking console command
    * Jot down quick notes while playtesting. Notes go into a dated text file in the current working directory.
    * Each note lists the time, all loaded WAD files, player position, and an optional user-supplied message on the console.
    * Example: `note demon is stuck in the wall here`.
* Time Warp: Travel forward and backwards in time while playing.
    * Time travel even if you died or made it to a new level.
    * Enable Time Warp in the PrBoomX options screen
    * May cause performance issues on older machines or on large levels.
    * Press '[' (default) to travel back in time
    * Press ']' (default) to travel forward in time
    * Stay too long in the past, and your old future will no longer be reachable.
    * Be warned! Time travel can be quite disorienting...
* Bind keys to console commands
    * Console command: `bind [key] [command]`
    * To unbind: `unbind [key]`
    * Binds stored in `prboomx_console.cfg`
    * Keys can be bound to multiple actions (just bind the same key more than once)
    * Key modifiers can NOT be used for key binds; e.g., Ctrl-X not possible, Shift-X not possible, etc.
    * Only "lowercase" keys (nothing with "SHIFT" pressed) can be bound
* Optional enhancements to the allmap powerup:
    * Secrets in undiscovered parts of the map are bright yellow
    * Secrets in discovered parts of the map are bright purple
    * Found secrets are dark purple
    * Lines can't be hidden from the map
    * Tag finder: Pressing "X" while in nofollow highlights the sector or line under the crosshair and shows the activating line/sector if any.
        * This lets you figure out what switches do or uncover how to open secrets if you are stuck.

![Tag finder demo](prboom2/doc/magic_sector.gif)

# Console commands

- `resurrect`
- `god`
- `noclip`
- `noclip2` (noclip+fly)
- `quit` / `exit`
- `print` (prints a message)
- `toggle_psprites` (turns off player weapon sprites, good for screenshots)
- `snd_sfxvolume` / `snd`
- `snd_musicvolume` / `mus`
- `kill <class>`
- `give <thing>`
- `note <message>` (write notes to a dated text file, useful for quick notes while playtesting)
- `mdk`
- `bind [key] [command]`
- `unbind [key]`

# Bindable Special Key Names

* RIGHTARROW
* LEFTARROW
* UPARROW
* DOWNARROW
* ESCAPE
* ENTER
* TAB
* F1
* F2
* F3
* F4
* F5
* F6
* F7
* F8
* F9
* F10
* F11
* F12
* BACKSPACE
* PAUSE
* EQUALS
* MINUS
* RSHIFT
* RCTRL
* RALT
* LALT
* CAPSLOCK
* PRINTSC
* INSERT
* HOME
* PAGEUP
* PAGEDOWN
* DEL
* END
* SCROLLLOCK
* SPACEBAR
* NUMLOCK
* KEYPAD0
* KEYPAD1
* KEYPAD2
* KEYPAD3
* KEYPAD4
* KEYPAD5
* KEYPAD6
* KEYPAD7
* KEYPAD8
* KEYPAD9
* KEYPADENTER
* KEYPADDIVIDE
* KEYPADMULTIPLY
* KEYPADMINUS
* KEYPADPLUS
* KEYPADPERIOD
* MOUSE1
* MOUSE2
* MOUSE3
* MWHEELUP
* MWHEELDOWN
