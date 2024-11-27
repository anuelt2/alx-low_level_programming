#!/usr/bin/python3
"""Module for island_perimeter function"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

    Args:
        grid: List of list of integers.

    Returns:
        Perimeter of island.
    """
    perimeter = 0
    height = len(grid)
    width = len(grid[0])

    if height <= 0:
        width = 0

    for h in range(height):
        for w in range(width):
            if grid[h][w] == 1:
                perimeter += 4
                if h > 0 and grid[h - 1][w] == 1:
                    perimeter -= 1
                if h < height - 1 and grid[h + 1][w] == 1:
                    perimeter -= 1
                if w > 0 and grid[h][w - 1] == 1:
                    perimeter -= 1
                if w < width - 1 and grid[h][w + 1] == 1:
                    perimeter -= 1
    return perimeter
