def faktoriyel(sayi):
    faktoriyel = 1
    if sayi < 0:
        print("Negatif sayilarin faktöriyeli hesaplanamaz.")
    elif sayi == 0:
        print("0'in faktöriyeli 1'dir.")
    else:
        for i in range(1, sayi + 1):
            faktoriyel *= i
        print(f"{sayi}'nin faktöriyeli: {faktoriyel}")

sayi = int(input("Faktöriyelini hesaplamak istediğiniz sayiyi girin: "))
faktoriyel(sayi)