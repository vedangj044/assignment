import datetime
import time
import pyperclip
import pyautogui

time.sleep(1)
start = datetime.datetime.now()
end = datetime.datetime(2019, 7, 13)
delta = end-start


def change(x):
    pyautogui.click(1843, 616)
    pyautogui.keyDown('backspace')
    time.sleep(1)
    pyautogui.keyUp('backspace')
    pyperclip.copy(x)
    pyautogui.hotkey('ctrl', 'v')
    pyautogui.press('enter')


while True:
    start = datetime.datetime.now()
    delta = end-start
    if "0:15:" in str(delta):
        change(str("Happy Bday"))
        break
    change(str(delta)[0:7])
