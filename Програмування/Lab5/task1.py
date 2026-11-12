def print_in_order(keys, dict1):
    print("MENU")
    for k in keys:
        print(f"{k}: {dict1[k]}")
    print("="*25)

menu = {
    "Borscht": 79,
    "Varenyky": 119,
    "Namazka": 49,
    "Salat 'Postribaychik'": 69,
    "Kompot": 29
}

keys = list(menu.keys())
keys.sort(key = lambda x: menu[x])
print_in_order(keys, menu)
keys.sort()
print_in_order(keys, menu)
