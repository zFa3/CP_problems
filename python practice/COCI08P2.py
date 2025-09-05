a = "ABC"
b = "BABC"
g = "CCAABB"


def gen_string(pattern, target_len):
    counter = 0
    new_pattern = ""
    for _ in range(target_len):
        new_pattern += pattern[counter % len(pattern)]
        counter += 1
    return new_pattern

def check_ans(guess, answer):
    correct = 0
    for i, t in enumerate(answer):
        if guess[i] == t:
            correct += 1
    return correct

target_length = int(input())
answer = input()

a = check_ans(gen_string(a, target_length), answer)
b = check_ans(gen_string(b, target_length), answer)
g = check_ans(gen_string(g, target_length), answer)

max_score = max(a, b ,g)
print(max_score)

if a == max_score:
    print("Adrian")

if b == max_score:
    print("Bruno")

if g == max_score:
    print("Goran")