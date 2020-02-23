#!/usr/bin/python3
"""contains only one function : island_perimeter"""


def surrounding(grid, i, j):
    """ calculates number of surroundes 1's"""
    surr = 0

    try:
        if grid[i + 1][j] == 1:
            surr += 1
    except IndexError:
        pass

    try:
        if grid[i - 1][j] == 1:
            surr += 1
    except IndexError:
        pass

    try:
        if grid[i][j + 1] == 1:
            surr += 1
    except IndexError:
        pass

    try:
        if grid[i][j - 1] == 1:
            surr += 1
    except IndexError:
        pass
    return surr


def island_perimeter(grid):
    """ returns perimeter of the island described in grid
    """
    peri = 0
    i = -1
    for line in grid:
        i += 1
        for j in range(len(line)):
            if grid[i][j] == 1:
                peri += 4 - surrounding(grid, i, j)
    return peri
