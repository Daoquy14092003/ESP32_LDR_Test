# Platform IO: ESP32 LDR
By Đào Ngọc Quý

## Mục đích : 
- Nâng cao sự nhanh nhẹn trong các quy trình làm việc với PlatformIO, Git và Github
- Dự án này sử dụng ESP32 để đo cường độ ánh sáng từ một quang trở (LDR)

## Yêu cầu :
- Đọc giá trị độ sáng (tương đối) từ quang trở qua chân ADC.
- In giá trị này ra cổng UART dưới dạng số nguyên (0 - 4095).
- Sử dụng công cụ Teleplot để vẽ đồ thị của cường độ ánh sáng theo thời gian thực.

## Phần cứng :
- Sử dụng board phát triển ESP32 Devkit v1
- Quang trở, điện trở và dây nối được kết nối như trong bài giảng 

## Hướng dẫn kết nối : 
-  Kết nối một chân của quang trở (LDR) với chân ADC (ví dụ: GPIO 34) của ESP32.
-  Kết nối chân còn lại của quang trở với nguồn 3.3V.
-  Kết nối một điện trở (10kΩ) từ chân ADC đến GND.
-  Đảm bảo tất cả các kết nối chắc chắn.

## Hình ảnh đồ thị :

 
## Các công cụ trong `workspace` này
- 
- 
