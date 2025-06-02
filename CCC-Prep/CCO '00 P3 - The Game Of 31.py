memo = {}

def answer(cards, player, total):
    key = ((tuple(cards), player), total)
    if key in memo: return memo[key]
    if total > 31: return not player
    winner = False
    for card in range(6):
        if (cards[card] > 0):
            cards[card] -= 1
            if (total + card + 1 < 32):
                if (player != answer(cards, not player, total + card + 1)):
                    winner = True
            cards[card] += 1
    memo[key] = player if not winner else not player
    return memo[key]

for _ in range(int(input())):
    cards = [4 for _ in range(6)]
    for i in (b := list(map(int, a := input()))):
        cards[i - 1] -= 1
    print("A" if answer(cards, len(a) % 2, sum(b)) else "B")
