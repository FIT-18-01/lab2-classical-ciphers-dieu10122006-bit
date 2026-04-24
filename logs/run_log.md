# Run Log – FIT4012 Lab 2

## Caesar Cipher
- [x] Đã chạy Caesar encrypt với `I LOVE YOU`, key `3` → Kết quả: `L ORYH BRX`
- [x] Đã chạy Caesar encrypt với `hello world`, key `5` → Kết quả: `mjqqt btwqi`
- [x] Đã chạy Caesar decrypt với `LORYH BRX`, key `3` → Kết quả: `I LOVE YOU`
- [x] Đã kiểm tra hỗ trợ chữ thường: `abc` với key `1` → Kết quả: `bcd`
- [x] Đã kiểm tra wrap-around: `XYZ` với key `3` → Kết quả: `ABC`

## Rail Fence Cipher
- [x] Đã chạy Rail Fence encrypt với `I LOVE YOU`, 2 rails → Kết quả: `ILV OOEYU`
- [x] Đã chạy Rail Fence encrypt với `I LOVE YOU`, 4 rails → Kết quả: `I LVOU EY`
- [x] Đã chạy Rail Fence decrypt từ `ILV OOEYU` với 2 rails → Kết quả: `I LOVE YOU`
- [x] Đã chạy Rail Fence decrypt từ `I LVOU EY` với 4 rails → Kết quả: `I LOVE YOU`
- [x] Đã chạy Rail Fence encrypt với `HELLO`, 3 rails → Kết quả: `HLOEL`

## Validation / File input
- [x] Đã kiểm tra đầu vào không hợp lệ: `123abc` → Output: `Invalid input. Only letters and spaces are allowed.`
- [x] Đã đọc dữ liệu từ `data/input.txt`: Thông điệp `I LOVE YOU` đã được đọc thành công và mã hoá với 2 rails → Kết quả: `ILV OOEYU`

## Tóm tắt kết quả
- Tổng test: 12
- Passed: 12  
- Failed: 0
- Success rate: 100%

## Lập trình viên học được
Bài lab này giúp em hiểu rõ hơn về cách hoạt động của hai mã hoá cổ điển. Caesar Cipher dễ hiểu nhưng không an toàn vì chỉ có 26 khóa có thể. Rail Fence Cipher phức tạp hơn nhưng cũng không an toàn nếu biết số ray. Khó khăn lớn nhất là cài đặt giải mã cho Rail Fence Cipher vì phải tính chính xác độ dài của mỗi ray. Điều giúp em hiểu rõ hơn là vẽ sơ đồ zigzag trước khi viết code.
