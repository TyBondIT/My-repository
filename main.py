

def calc():
    try:
        num1 = input("Enter first price of item:")
        num1 = float(num1)
        tps = num1 / 5.0
        tvq = num1 / 9.975
        tvq = float(tvq)
        tps = float(tps)
        total = num1 + tps + tvq
        roundednum = round(total, 2)
        print("Total is:", roundednum)
    except:
        print("Not a valid number. Try something like 10.90 or 10.")



calc()