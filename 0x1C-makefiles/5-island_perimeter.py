#!/usr/bin/python3
"""contains only one function : island_perimeter"""
def island_perimeter(grid):
    """ returns perimeter of the island described in grid
    """
    sum_of_1 = 0
    for i in grid:
        for j in i:
            if j == 1:
                sum_of_1 += 1
    if sum_of_1 == 0:
        return 0
    return (2 * sum_of_1 + 2)
