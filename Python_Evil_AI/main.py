# This is a sample Python script.
import time
import pyautogui
import random
# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.\

list_keys = ["space", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "1", "2", "3", "4", "5", "6", "7", "8", "9", "0"]


def press_random_key():
    pyautogui.press(random.choice(list_keys))
    

def print_hi(name):
    while 1 == 1:
        time.sleep(3 * 60)
        press_random_key()

#

# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    print_hi('PyCharm')

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
