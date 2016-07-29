# Leetcode

##  1. Two Sum

Given an array of integers, return **indices** of the two numbers such that they add up to a specific target.

You may assume that each input would have **exactly** one solution.

**Example:**

```
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].*
```

**solution:**

1. 遍历（O(n2)）
2. hashmap(O(n))    *边检索边建map，遍历一遍*

