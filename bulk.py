import pyautogui
import sys
def send(msg,times):
    for i in range(times):
        pyautogui.click(805,1019)
        pyautogui.typewrite(msg)
        pyautogui.click(1791,1017)

send(sys.argv[1],int(sys.argv[2]))
