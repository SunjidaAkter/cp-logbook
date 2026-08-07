### Missing Coin Sum (Greedy)

- Maintain `reach` = largest value such that every sum in `[1, reach]` is constructible.
- Initially `reach = 0`.
- If `coin <= reach + 1`, extend the reachable range:
  `reach += coin`.
- Otherwise, `reach + 1` is the smallest missing sum.
