#!/usr/bin/python3
"""
module to calculate the perimeter of the island described in grid
"""
def island_perimeter(grid):
        """
        returns the perimeter of the island described in 'grid'
        """
        width = len(grid[0])
        height = len(grid)
        size = 0

        for i in range(height):
            for j in range(width):
                if grid[i][j] == 1:
                    size += 1
                if i != 0:
                    if grid[i - 1][j] == 1 and grid[i][j + 1] == 1:
                        size += 1
                if i != height - 1:
                    if grid[i + 1][j] == 1 and grid[i][j + 1] == 1:
                        size += 1
        return size * 2
