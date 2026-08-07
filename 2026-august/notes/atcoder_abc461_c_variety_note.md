# ABC461 C - Select K Gems with At Least M Colors

## Observation

1. Sort all gems by value in descending order.
2. While the number of selected distinct colors is less than `M`:
   - Take the highest-value gem of a new color.
   - Ignore other gems of already selected colors for now.
3. Once `M` distinct colors are obtained, simply take the remaining highest-value gems regardless of color.
4. Since the values are processed in descending order, choosing the first occurrence of a color always gives the maximum-valued gem of that color.

## Why it works

- To satisfy the color constraint, each required color should contribute its maximum-valued gem.
- Before reaching `M` colors, taking another gem of an already selected color does not help increase the number of distinct colors.
- After obtaining `M` distinct colors, the only objective is to maximize the total value, so we can greedily take the remaining highest-valued gems.

## Implementation

- Store each gem as `(value, color)`.
- Sort in descending order by value.
- Use a `map` (or `unordered_map`) to track selected colors.
- Mark the gems already chosen for satisfying the color requirement.
- Finally, scan again and take the remaining highest-valued gems until `K` gems are selected.

## Mistakes I made

- Forgot to increment `i` while taking the remaining gems, causing the same element to be considered repeatedly.
- Initially focused too much on implementation instead of carefully verifying the greedy observation.

## Complexity

- Sorting: `O(N log N)`
- Traversal: `O(N)`
- Overall: `O(N log N)`
