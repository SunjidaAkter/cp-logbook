# 🧠 Pattern: Greedy + Constraint

## Trigger 🚩

যদি problem-এ থাকে—

- Maximum / Minimum answer
- Kটা element নিতে হবে
- At least / At most / Exactly কোনো condition
- Distinct / Unique / Group-এর কথা

➡️ Greedy + Sorting চিন্তা করো।

---

## Thinking Process

1. Sort করলে কি সহজ হবে?

2. Constraint পূরণ করতে minimum কী করতে হবে?

3. Constraint পূরণ হওয়ার পর কি শুধু বড় (বা ছোট) value নিলেই হবে?

---

## Common Structure

Phase 1:

- Constraint পূরণ করো।

Phase 2:

- বাকি answer greedily optimize করো।

---

## Before Coding

নিজেকে ৩টা প্রশ্ন করো—

- কেন greedy কাজ করবে?
- কোনো counterexample আছে?
- ছোট example-এ dry run করেছি?

---

## Similar Problems

- Distinct colors
- Distinct numbers
- Group selection
- Maximum sum with conditions

---

## Reminder ⭐

Greedy মনে হলেই code লিখো না।

✔️ আগে proof ভাবো।
✔️ না পারলে counterexample খুঁজো।
✔️ তারপর implement করো।
Trigger:
Maximum + Constraint + Distinct → Think Greedy + Sorting

Reminder:
আগে constraint, পরে optimization।
Proof না পেলে counterexample খুঁজো।
