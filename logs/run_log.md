# Run Log – FIT4012 Lab 2

## Caesar Cipher

### Test 1: Encrypt "I LOVE YOU" with key 3
```
Input: I LOVE YOU
Key: 3
Output: L ORYH BRX
Status: ✓ PASSED
```

### Test 2: Encrypt "hello world" with key 5
```
Input: hello world
Key: 5
Output: mjqqt btwqi
Status: ✓ PASSED
```

### Test 3: Decrypt "LORYH BRX" with key 3
```
Input: LORYH BRX
Key: 3
Output: I LOVE YOU
Status: ✓ PASSED
```

## Rail Fence Cipher

### Test 1: Encrypt "I LOVE YOU" with 2 rails
```
Input: I LOVE YOU
Rails: 2
Output: ILV OOEYU
Status: ✓ PASSED
```

### Test 2: Encrypt "I LOVE YOU" with 4 rails
```
Input: I LOVE YOU
Rails: 4
Output: I LVOU EY
Status: ✓ PASSED
```

### Test 3: Decrypt "ILV OOEYU" with 2 rails
```
Input: ILV OOEYU
Rails: 2
Output: I LOVE YOU
Status: ✓ PASSED
```

### Test 4: Decrypt "I LVOU EY" with 4 rails
```
Input: I LVOU EY
Rails: 4
Output: I LOVE YOU
Status: ✓ PASSED
```

## Validation / File Input

### Test 1: Invalid input (numbers)
```
Input: 123abc
Output: Invalid input. Only letters and spaces are allowed.
Status: ✓ PASSED
```

### Test 2: Read from file and encrypt with 2 rails
```
File path: data/input.txt
Content: I LOVE YOU
Rails: 2
Output: ILV OOEYU
Status: ✓ PASSED
```

## Summary
- Total tests: 8
- Passed: 8
- Failed: 0
- Success rate: 100%

## Lập trình viên học được
1. Cách hoạt động của Caesar Cipher: mã hoá dựa trên dịch chuyển ký tự trong bảng chữ cái
2. Cách hoạt động của Rail Fence Cipher: mã hoá dựa trên việc sắp xếp lại ký tự theo mô hình zigzag
3. Các kỹ năng lập trình: xử lý chuỗi, vector, file I/O và kiểm tra dữ liệu đầu vào
