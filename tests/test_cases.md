# Test Cases – FIT4012 Lab 2

## Caesar Cipher
- [x] Encrypt `I LOVE YOU` với key `3` → `L ORYH BRX`
- [x] Encrypt `hello world` với key `5` → `mjqqt btwqi`
- [x] Decrypt `LORYH BRX` với key `3` → `I LOVE YOU`
- [x] Encrypt `abc` với key `1` → `bcd`
- [x] Encrypt `XYZ` với key `3` → `ABC` (wrap-around)

## Rail Fence Cipher
- [x] Encrypt `I LOVE YOU` với `2` rails → `ILV OOEYU`
- [x] Encrypt `I LOVE YOU` với `4` rails → `I LVOU EY`
- [x] Decrypt `ILV OOEYU` với `2` rails → `I LOVE YOU`
- [x] Decrypt `I LVOU EY` với `4` rails → `I LOVE YOU`
- [x] Encrypt `HELLO` với `3` rails → `HLOEL`

## Validation / File input
- [x] Kiểm tra đầu vào không hợp lệ: "123abc" → Invalid input message
- [x] Đọc thông điệp từ `data/input.txt` → `I LOVE YOU`
