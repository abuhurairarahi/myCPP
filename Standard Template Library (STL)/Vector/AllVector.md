# Vector (C++ STL)

## 1. Header

```cpp
#include <vector>
#include <bits/stdc++.h>
```

## 2. Namespace

```cpp
using namespace std;
```

---

# 3. Declaration

### 3.1 Empty Vector

```cpp
vector<data_type> vectorName;
```

### 3.2 Fixed Size Vector

```cpp
vector<data_type> vectorName(size);
```

*Allocates a vector with fixed size.*

---

### 3.3 Initializer List

```cpp
vector<data_type> vectorName = {1,2,3,4};
```

*Pre-initializes the vector with values.*

---

### 3.4 Fixed Size with Same Value

```cpp
vector<data_type> vectorName(size, data);
```

Example:

```
size = 4
data = 1

| 1 | 1 | 1 | 1 |
```

---

### 3.5 Copy One Vector Into Another

```cpp
vector<data_type> vectorName(vectorName2);
```

*Copies all elements of another vector.*

---

### 3.6 Reference Vector (Same Address)

```cpp
vector<data_type> &vectorName = vectorName2;
```

*Both vectors refer to the same memory.*

---

# 4. Properties

### 4.1 Size

```cpp
vectorName.size();
```

### 4.2 Capacity

```cpp
vectorName.capacity();
```

Example:

```
| 1 | 2 | 3 |   |   |

size = 3
capacity = 5
```

---

### 4.3 Check Empty

```cpp
vectorName.empty();
```

Returns **true / false**.

---

# 5. Element Access

### 5.1 Using Index

```cpp
vectorName[index];
```

### 5.2 Using at()

```cpp
vectorName.at(index);
```

### 5.3 Front Element

```cpp
vectorName.front();
```

### 5.4 Back Element

```cpp
vectorName.back();
```

---

# 6. Modifiers

### 6.1 Add Element

```cpp
vectorName.push_back(data);
```

### 6.2 Remove Last Element

```cpp
vectorName.pop_back();
```

### 6.3 Insert Element

```cpp
vectorName.insert(vectorName.begin() + index, data);
```

### 6.4 Erase Single Element

```cpp
vectorName.erase(vectorName.begin() + index);
```

### 6.5 Erase Range

```cpp
vectorName.erase(vectorName.begin(), vectorName.begin() + index);
```

Removes elements from **begin() up to (but not including) index**.

---

### 6.6 Clear Vector

```cpp
vectorName.clear();
```

Removes all elements.

---

### 6.7 Resize Vector

```cpp
vectorName.resize(size);
```

If `new_size < old_size`

* Size decreases

If `new_size > old_size`

* New elements are added with **default value**

---

### 6.8 Swap Two Vectors

```cpp
vectorName.swap(vectorName2);
```

---

### 6.9 Reserve Capacity

```cpp
vectorName.reserve(size);
```

*Increases capacity without changing size.*

---

# 7. Iterators

### 7.1 Begin

```cpp
vectorName.begin();
```

Points to **first element**.

---

### 7.2 End

```cpp
vectorName.end();
```

Points to **position after last element**.

---

### 7.3 Reverse Begin

```cpp
vectorName.rbegin();
```

Example:

```
{10,20,30,40}

rbegin() → points to 40
```

---

### 7.4 Reverse End

```cpp
vectorName.rend();
```

Example:

```
{10,20,30,40}

rend() → position before 10
```

⚠ It **does not point to a valid element**, so dereferencing it causes an error.

---

# 8. Traversing Vector

## 8.1 Index Method

```cpp
for(int index = 0; index < vectorName.size(); index++)
{
    cout << vectorName[index] << " ";
}
```

---

## 8.2 Iterator Method

```cpp
auto index = vectorName.begin();

while(index != vectorName.end())
{
    cout << *(index) << " ";
    index++;
}
```

---

## 8.3 Range-Based Loop (Modern C++)

```cpp
for(int value : vectorName)
{
    cout << value << " ";
}
```

---

# 9. Time Complexity

| Operation | Complexity     |
| --------- | -------------- |
| Access    | O(1)           |
| push_back | O(1) amortized |
| insert    | O(n)           |
| erase     | O(n)           |

---
