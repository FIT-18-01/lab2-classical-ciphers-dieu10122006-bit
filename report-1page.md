# Report 1 Page – FIT4012 Lab 2

## 1. Mục tiêu
Bài lab này có mục tiêu cài đặt, mở rộng và kiểm thử hai mã hoá cổ điển: Caesar Cipher và Rail Fence Cipher. Thông qua bài lab, sinh viên sẽ hiểu rõ nguyên lý hoạt động của các mã cổ điển, rèn luyện kỹ năng lập trình C++ (xử lý chuỗi, vector, file I/O), và làm quen quy trình nộp bài qua GitHub.

## 2. Cách làm
- Hoàn thiện Caesar Cipher cho chữ thường (Q1), giữ dấu cách (Q2) và giải mã (Q3).
- Hoàn thiện Rail Fence Cipher cho giải mã (Q5), giữ dấu cách (Q6), kiểm tra đầu vào (Q7) và đọc file (Q8).
- Thay đổi số ray thành 4 và quan sát kết quả (Q4).
- Chạy thử trên nhiều test case và ghi lại kết quả.

## 3. Kết quả chính

### 3.1 Caesar Cipher
| Input | Key | Output | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 3 | L ORYH BRX | Encrypt thành công, giữ dấu cách |
| hello world | 5 | mjqqt btwqi | Encrypt chữ thường thành công |
| LORYH BRX | 3 | I LOVE YOU | Decrypt thành công |

**Kết luận:** Caesar Cipher hoạt động đúng với cả chữ hoa, chữ thường và dấu cách.

### 3.2 Rail Fence Cipher
| Input | Rails | Output | Nhận xét |
|---|---:|---|---|
| I LOVE YOU | 2 | ILV OOEYU | Encrypt với 2 rays thành công |
| I LOVE YOU | 4 | I LVOU EY | Encrypt với 4 rays thành công |
| ILV OOEYU | 2 | I LOVE YOU | Decrypt từ 2 rays thành công |
| I LVOU EY | 4 | I LOVE YOU | Decrypt từ 4 rays thành công |

**Kết luận:** Rail Fence Cipher hoạt động chính xác với cả mã hoá và giải mã. Khi thay đổi số ray, ciphertext thay đổi khác nhau.

### 3.3 Input Validation & File Input
- **Đầu vào không hợp lệ:** Chương trình đúng cách từ chối đầu vào chứa số hoặc ký tự đặc biệt.
- **Đọc từ file:** Chương trình đọc thành công thông điệp "I LOVE YOU" từ `data/input.txt` và mã hoá với số ray tùy ý.

## 4. Kết luận
Bài lab giúp em hiểu rõ hơn về cách hoạt động của hai mã hoá cổ điển. Caesar Cipher dễ hiểu nhưng không an toàn vì chỉ có 26 khóa có thể. Rail Fence Cipher phức tạp hơn nhưng cũng không an toàn nếu biết số ray. Khó khăn lớn nhất là cài đặt giải mã cho Rail Fence Cipher vì phải tính chính xác độ dài của mỗi ray. Điều giúp em hiểu rõ hơn là vẽ sơ đồ zigzag trước khi viết code.
