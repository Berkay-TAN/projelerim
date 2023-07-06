import math

def alan_hesapla(kenarlar):
    if len(kenarlar) == 3:

        a, b, c = kenarlar

        s = (a + b + c) / 2 
        alan = math.sqrt(s * (s - a) * (s - b) * (s - c))
        return alan
        
    else:
        # Geçersiz kenar sayısı
        return "Hatalı kenar sayısı!"

# Kenar uzunluklarını kullanıcıdan al
kenar1 = float(input("Birinci kenar uzunluğunu girin: "))
kenar2 = float(input("İkinci kenar uzunluğunu girin: "))
kenar3 = float(input("Üçüncü kenar uzunluğunu girin: "))

kenarlar = [kenar1, kenar2, kenar3]
alan = alan_hesapla(kenarlar)

if isinstance(alan, str):
    print(alan)
else:
    print("Üçgenin alanı:", alan)
