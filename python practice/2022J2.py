gold_players, players = 0, int(input())
for _ in range(players):
    pt = int(input()) * 5 - int(input()) * 3
    if pt > 40:
        gold_players += 1
print(gold_players if gold_players != players else f"{players}+")