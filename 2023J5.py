#!usr/bin/env python

word = input()
rows, cols = int(input()), int(input())

grid = ""
total = 0
ab = [-cols - 1, -cols, -cols + 1,
      -1, 0, 1,
      cols - 1, cols, cols + 1]

for _ in range(rows):
    grid += input()

# UP -1   UP   UP 1
# -1           1
# DOWN -1 DOWN DOWN 1

def get_starting_points(grid):
    indexes = []
    for i, t in enumerate(grid):
        if t == word[0]:
            indexes.append(i)
    return indexes

def adj_squares2(sq):
    a = [1 for _ in range(9)]
    if sq < cols: # if the index is touching top border
        a[:3] = [0 for _ in range(3)]
    if sq >= (rows - 1) * cols: # if index is touching bottom border
        a[5:] = [0 for _ in range(3)]
    if sq % cols == 0: # if the index is touching the left border
        a[::3] = [0 for _ in range(3)]
    if sq % cols == cols - 1: # if the index is touching the right border
        a[2::3] = [0 for _ in range(3)]
    return a

def recursive(letter_index, grid_index, dir_index, has_turned):
    if word[letter_index] == grid_index:
        if letter_index == len(word):
            global total; total += 1; return
        if has_turned:
            recursive(letter_index + 1, grid_index + dir_index, dir_index, has_turned); return
        recursive(letter_index + 1, grid_index + dir_index, dir_index, has_turned); return