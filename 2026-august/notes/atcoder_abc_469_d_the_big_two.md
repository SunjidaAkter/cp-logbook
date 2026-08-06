# 📝 Problem Notes

## D - The Big Two (AtCoder ABC)

Difficulty: 400

Time:

- Observation: ~30-40 min
- Implementation + Debugging: ~2-3 hours

### Key Observation

A valid pair (x, y) must contain one of the players from the first match.

For each of the two players in the first match:

- Fix that player.
- Consider only matches where the fixed player does not appear.
- The other player must belong to the intersection of all those pairs.
- If there is no such match, then any player can be the partner.

### Implementation Lessons

- Think branch by branch.
- Don't confuse "no uncovered match" with "empty intersection".
- Handle the special case before checking for an empty intersection.
- Use set<pair<int,int>> to avoid duplicate pairs.
- Normalize every pair as (min, max).

### Mistakes I Made

- Used one global flag instead of handling each branch independently.
- Confused empty intersection with the special case.
- Forgot duplicate pairs.
- Wrong order of special-case handling.
- Needed several dry runs to identify logic bugs.

### Takeaway

- Understanding the observation was easier than implementing it.
- The implementation contained several subtle edge cases.
