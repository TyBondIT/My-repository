#CFederal income taxe calculator. 
#Created by Ty Bond
#last revised: 2/7/2024

print("Federal Income Tax Calculator")
print("Program Created by: Ty Bond")
print("Last Revised: 2/7/2024")


def taxfederal2024():

    incomeAnn = float(input("Enter Your Total Annual Income BEFORE TAX: "))


    if incomeAnn <= 53359:
        tax = (incomeAnn * 0.15)
        print(tax)

    elif (incomeAnn >= 53360) and (incomeAnn <= 106017):
        tax= (incomeAnn - 53359 ) * 0.20
        print(tax + 4975)

    elif (incomeAnn >= 106018) and (incomeAnn <= 165430):
        tax = (incomeAnn - 106017 ) * 0.26
        print(tax + 15695)
        
    elif (incomeAnn >= 165431) and (incomeAnn <= 235675):
        tax = (incomeAnn - 165430 ) * 0.29 
        print(tax + 30969)

    elif (incomeAnn > 235675):
        tax = (incomeAnn - 235675) * 0.33
        print(tax + 51545)

def taxQC():
    
    incomeAnn = float(input("Enter Your Total Annual Income BEFORE TAX: "))
    if incomeAnn <= 51780:
        tax = (incomeAnn * 0.14)
        print(tax)

    elif (incomeAnn >= 51781) and (incomeAnn <= 103545):
        tax= (incomeAnn - 51780 ) * 0.19
        print(tax + 4627)

    elif (incomeAnn >= 103546) and (incomeAnn <= 126000):
        tax = (incomeAnn - 103545 ) * 0.24
        print(tax + 15204)
   
    elif (incomeAnn > 126001):
        tax = (incomeAnn - 126000 ) * 0.26
        print(tax + 20075)

def taxALB():
    incomeAnn = float(input("Enter Your Total Annual Income BEFORE TAX: "))
    if incomeAnn <= 142292:
        tax = (incomeAnn * 0.10)
        print(tax)

    elif (incomeAnn >= 142293) and (incomeAnn <= 170751):
        tax= (incomeAnn - 142292 ) * 0.12
        print(tax + 11,653)

    elif (incomeAnn >= 170752) and (incomeAnn <= 227668):
        tax = (incomeAnn - 170752 ) * 0.13
        print(tax + 15056)

    elif (incomeAnn >= 227669) and (incomeAnn <= 341503):
        tax = (incomeAnn - 227669 ) * 0.14
        print(tax + 22449)

    elif (incomeAnn > 341504):
        tax = (incomeAnn -  341504) * 0.15
        print(tax + 38379)




def main():
    repeater = True

    while repeater == True:
        Province = input("Select a Province: ")
        if Province == "Federal":
            taxfederal2024()
        if Province == "Alberta":
            taxALB()
        if Province == "Quebec":
            taxQC()
        else:
            print("This Program Only Supports Federal, Quebec and Alberta.")

main()