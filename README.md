# ❤️ I LOVE YOU Animation in C

A simple and nostalgic Turbo C program that prints **"I LOVE YOU ♥"** repeatedly with colorful text and a delay, creating a cute text animation in the DOS console.

##  Features

-  Prints **"I LOVE YOU"** 120 times
-  Uses colored text and background
-  Adds a delay between each print for animation
-  Written in C for the Turbo C/Turbo C++ compiler

##  Source Code only for turbo 

```c
#include <stdio.h>
#include <conio.h>
#include <dos.h>

void main()
{
    int i;

    clrscr();
    textcolor(RED);
    textbackground(WHITE);

    for(i = 1; i <= 120; i++)
    {
        cprintf(" I LOVE YOU \3 ");
        delay(200);
    }

    getch();
}
```
## Source coden for modern compilers
 ```c
 #include <stdio.h>
  
  #ifdef _WIN32
  #include <windows.h>
  #define delay(ms) Sleep(ms)
  #else
  #include <unistd.h>
  #define delay(ms) usleep((ms) * 1000)
  #endif
  
  int main()
  {
      int i;
  
      for (i = 1; i <= 120; i++)
      {
          printf("I LOVE YOU <3 ");
          fflush(stdout);
          delay(200);
      }
  
      return 0;
  }
```
##  Requirements

- Turbo C or Turbo C++
- DOSBox (recommended on modern systems)

##  How to Run

1. Open the project in **Turbo C++**.
2. Compile the program.
3. Run the executable.
4. Watch the colorful "I LOVE YOU ♥" animation.

##  Output

```
I LOVE YOU ♥ I LOVE YOU ♥ I LOVE YOU ♥ I LOVE YOU ♥ ...
```

##  Note

This project uses the following Turbo C-specific libraries:

- `conio.h`
- `dos.h`

These are **not supported** by modern compilers such as GCC, Clang, or Visual Studio. To run the project today, use **Turbo C** inside **DOSBox** or adapt the code for a modern compiler.

##  Learning Purpose

This project demonstrates:

- Loops (`for`)
- Console output
- Text colors
- Delays
- Basic Turbo C graphics functions

## Contributing

Feel free to fork this repository, improve the animation, or create your own creative console effects.

##  Show Your Support

If you enjoyed this tiny nostalgic project, consider giving it a ⭐ on GitHub.

---

Made with ❤️ in C
