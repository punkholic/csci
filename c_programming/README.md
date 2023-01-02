
## _To run c code:_
## Two ways to open "run":


1. Press ```ctrl + r```
2. Go to ```start on taskbar``` and click on ```run```

The following popup should appear

![Run image](https://www.maketecheasier.com/assets/uploads/2015/02/run-commands-window.png)


## To open notepad

- Open ```run```
- Type ```notepad++``` on run text input and click on ok or hit enter key
- If notepad++ gave error type ```notepad``` and press enter
![notepad](https://www.smartlabsoftware.com/images/notepad-screen.gif)


> Note: After opening notepad/notepad++ write c code and follow following steps.


## To save written code:


- Press ```ctrl + s``` or click on ```file``` on top menu again click on ```save```.
- A pop up will appear now navigate to the place where you want to save the file.
![save file](https://i.stack.imgur.com/3KX8F.png)
- Change save as type to ```all files``` and give a name to the file with ```.c``` as extension, example: ```abc.c```
- Now click on ```save```


> Note: Now your file is saved in your desire location, to compile and run the code we need to open cmd.


## To open cmd:
- Open run
- Type ```cmd``` on run text input and click on ok or hit enter key
![notepad](https://www.howtogeek.com/wp-content/uploads/2017/07/tcp_top.png)


> Note: Now we need to go to the path were your code is saved from cmd.
Let's see some commands which will be used to navigate from cmd.

# To navigate to another drive

![cmd](https://www.howtogeek.com/wp-content/uploads/2017/07/tcp_top.png)
- Observe where you currently are, the ```first letter defines the drive which you are in ```right now.
- In above example we can see the ```first letter is C```, which means we are inside ```c drive```.
- And after opening my computer we can see that we have two drives with different letters each(C and D)
![cmd](https://i1.wp.com/vincenttechblog.com/wp-content/uploads/2017/01/drive-c1.png?ssl=1)
- Now to go inside d drive we need to type drive letter and a colon example: ```d:```
![cmd](https://media.geeksforgeeks.org/wp-content/uploads/20200921184746/anotherdrivepart2.png)
- Now the first letter changed from ```C``` to ```D``` which means we are inside d drive 

# To navigate/get insde another folder
- Type ```cd folder_name``` and press ```enter```
![cd](https://www.howtogeek.com/wp-content/uploads/2020/02/Change-directory-to-Documents.png)
- After doing so, we will be inside the given folder

# To check contents of current location
- Type ```dir``` and press ```enter```
![dir](https://media.geeksforgeeks.org/wp-content/uploads/20210303061454/SearchingFilesusingCommandPrompt1.png)


# To run c file
- Use above commands to reach to the folder where you have saved the file.
- Type ```gcc filename.c```, this will compile the code and give output to a default file named ```a```
- ![gcc without -0](https://www.edureka.co/blog/wp-content/uploads/2019/07/me12345.png)
- So to run the code type ```a``` and press ```enter```
- If you want to give your desirable output name we need to pass -o to gcc 
```gcc filename.c -o desirable_output```
![gcc with -o](https://techsupportwhale.com/wp-content/uploads/2020/12/Compile-C-program-using-gcc-compiler.png?ezimgfmt=ng:webp/ngcb5)
- When you pass the -o flag this will produce the compiled file with your name instead of default name ```a```, now to run the code type ```desirable_output``` and press enter
![to run](https://techsupportwhale.com/wp-content/uploads/2020/12/Run-an-exe-in-command-prompt.png?ezimgfmt=ng:webp/ngcb5)

# To combine two command in one line
- Type ```first command``` && ```another command```
- So to compile and run the code on same line use: ```gcc filename.c && a```, here first command is ```gcc filename.c``` which compiles the code and another command is ```a``` which will run the code.
- So, while using ```-o``` we can do: ```gcc filename.c -o desirable_output && desirable_output```
