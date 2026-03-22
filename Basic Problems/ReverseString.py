def reverse(s: str) -> str:
    words = s.strip().split()
    return " ".join(reversed(words))
def reverse_words(s: str) -> str:
    return " ".join(s.split()[::-1])
print(reverse("  hello   world  python   code  "))  
print(reverse_words("the sky is blue"))          
