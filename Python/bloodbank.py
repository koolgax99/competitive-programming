from openpyxl import load_workbook

class Patient:
    def __init__(self):
        self.name = input("enter your name:") 
        self.group = input("enter your blood group: ")
        self.age = int(input("enter your age: ")

    def openfile(self):
        wb = load_workbook('sample_book.xlsx')

    def append(self):
        


