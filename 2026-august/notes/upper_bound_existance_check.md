### 📝 C++ STL Note — `upper_bound()` + Previous Element

When using `upper_bound(x)` to find the **largest value ≤ x**:

```cpp
auto it = s.upper_bound(x);
```

- `upper_bound(x)` returns the **first element greater than `x`**.
- The required answer is the **previous element**, so use `--it`.

⚠️ **Important: Check `begin()`, not `end()`.**

```cpp
auto it = s.upper_bound(x);

if (it == s.begin()) {
    // No element <= x exists.
    cout << -1 << '\n';
} else {
    --it;
    cout << *it << '\n';
}
```

### Why not check `end()`?

If `upper_bound(x) == end()`, it usually means **all elements are ≤ x**.

So the answer is simply the **last element**, obtained by `--it`.

The only invalid case is when `upper_bound(x) == begin()`, because there is **no previous element**.

**Rule to remember:**

> If you need the element just before `upper_bound()`, always check `begin()` before doing `--it`.
