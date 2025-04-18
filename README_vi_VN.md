<h1 align="center">
<img src="https://i.imgur.com/d9a8NfA.png" alt="Friccoin" width="300"/>
<br/><br/>
Nhân Tố Friccoin [FRC, B]
</h1>

Chọn ngôn ngữ: [EN](./README.md)| [CN](./README_zh_CN.md) | [PT](./README_pt_BR.md) | [FA](./README_fa_IR.md) | VI | [FR](./README_fr_FR.md) | [JA](./README_ja_JP.md) | [DE](./README_de_DE.md)

Friccoin là một loại tiền điện tử tập trung vào cộng đồng. Nó được tạo ra với một mục tiêu duy nhất: xây dựng một cộng đồng mới và vui vẻ giống như cộng đồng Dogecoin ban đầu.

Không giống như các phiên bản trước đó, Friccoin là một loại tiền tệ tầng 1. Điều này có nghĩa là không có hồ bơi thanh khoản để tiêu tốn, không có ví tiền bị đen danh sách và không có hợp đồng thông minh phức tạp. Friccoin là một chuỗi khối đơn giản.

Giống như Dogecoin, phần mềm Nhân Tố Friccoin cho phép bất kỳ ai cũng có thể vận hành một nút trong mạng lưới chuỗi khối Friccoin và sử dụng phương pháp băm Scrypt cho Bằng Chứng Công Việc. Nó được điều chỉnh từ Bitcoin Core và các loại tiền điện tử khác.

Để biết thông tin về các mức phí mặc định được sử dụng trên mạng lưới Friccoin, vui lòng tham khảo [đề xuất phí](doc/fee-recommendation.md).

**Trang web:** [friccoin.org](https://friccoin.org)

## Sự Khác Biệt với Dogecoin

Friccoin là một nhánh của Dogecoin. Vì sự quen thuộc, chúng tôi sẽ cố gắng giữ cho Friccoin giống với Dogecoin.

Thay đổi:

* Địa chỉ bắt đầu bằng `B` thay vì `D`
* Các tính năng BIPS sẽ bắt đầu từ khối 1000
* AuxPow bắt đầu từ khối 1500 (ID Chuỗi: 63)
* Giao diện đồ họa được thiết kế cho Friccoin

## Sử Dụng 💻

Để bắt đầu hành trình của bạn với Nhân Tố Friccoin, hãy xem [hướng dẫn cài đặt](INSTALL.md) và hướng dẫn [bắt đầu](doc/getting-started.md).

API JSON-RPC được cung cấp bởi Nhân Tố Friccoin cho phép tự mô tả và có thể được duyệt bằng `friccoin-cli help`, trong khi thông tin chi tiết cho mỗi lệnh có thể được xem bằng cách sử dụng `friccoin-cli help <lệnh>`. Hoặc, xem [tài liệu Bitcoin Core](https://developer.bitcoin.org/reference/rpc/) - mà thực hiện một giao thức tương tự - để có phiên bản có thể duyệt.

### Cổng

Nhân Tố Friccoin mặc định sử dụng cổng `14327` cho giao tiếp ngang hàng cần thiết để đồng bộ hóa chuỗi khối "mainnet" và cập nhật thông tin về giao dịch và khối mới. Ngoài ra, có thể mở một cổng JSONRPC, mặc định là cổng `15612` cho các nút mainnet. Rất khuyến nghị không tiết lộ các cổng RPC ra internet công cộng.

| Chức năng | mainnet | testnet | regtest |
| :------- | ------: | ------: | ------: |
| P2P      |   14327 |   14328 |   14329 |
| RPC      |   15612 |   15613 |   15614 |

## Phát Triển Liên Tục 💻

Nhân Tố Friccoin là một phần mềm mã nguồn mở và do cộng đồng thúc đẩy. Quy trình phát triển là mở và được công khai; bất kỳ ai cũng có thể xem, thảo luận và làm việc trên phần mềm.

Các tài nguyên phát triển chính:

* [Dự Án GitHub](https://github.com/Friccoin/Friccoin-core/projects) được sử dụng để theo dõi công việc đã được lên kế hoạch và đang tiến hành cho các bản phát hành sắp tới.
* [Thảo Luận GitHub](https://github.com/Friccoin/Friccoin-core/discussions) được sử dụng để thảo luận về các tính năng, cả về những tính năng đã được lên kế hoạch và chưa được lên kế hoạch, liên quan đến cả phát triển phần mềm Nhân Tố Friccoin, các giao thức cơ bản và tài sản FRC.

### Chiến Lược Phiên Bản
Các số phiên bản tuân thủ cú pháp ```major.minor.patch```.

### Nhánh
Có 3 loại nhánh trong kho lưu trữ này:

- **master:** Ổn định, chứa phiên bản mới nhất của bản phát hành *major.minor* mới nhất.
- **maintenance:** Ổn định, chứa phiên bản mới nhất của các bản phát hành trước đó, vẫn đang được bảo trì. Định dạng: ```<phiên bản>-maint```
- **development:** Không ổn định, chứa mã nguồn mới cho các bản phát hành được lên kế hoạch. Định dạng: ```<phiên bản>-dev```

*Các nhánh Master và Maintenance chỉ có thể thay đổi bằng cách phát hành. Các bản phát hành đã được lên kế hoạch luôn có một nhánh phát triển và các yêu cầu kéo nên được gửi đối với những nhánh đó. Các nhánh Bảo dưỡng chỉ dành cho **sửa lỗi** thôi,***xin vui lòng gửi tính năng mới đối với nhánh phát triển với phiên bản cao nhất.***

## Đóng Góp 🤝

Nếu bạn phát hiện ra lỗi hoặc gặp vấn đề với phần mềm này, vui lòng báo cáo bằng cách sử dụng [hệ thống vấn đề](https://github.com/Friccoin/Friccoin-core/issues/new?assignees=&labels=bug&template=bug_report.md&title=%5Bbug%5D+).

Vui lòng xem [hướng dẫn đóng góp](CONTRIBUTING.md) để biết cách bạn có thể tham gia vào việc phát triển Nhân Tố Friccoin. Thường có [chủ đề cần trợ giúp](https://github.com/Friccoin/Friccoin-core/labels/help%20wanted) nơi đóng góp của bạn sẽ có tác động lớn và nhận được sự đánh giá cao.

## Cộng Đồng 🐸

Bạn có thể tham gia vào các cộng đồng trên các phương tiện truyền thông xã hội khác nhau.
Để xem điều gì đang diễn ra, gặp gỡ mọi người và thảo luận, tìm ra hình ảnh mới nhất, tìm hiểu về Friccoin, cung cấp hoặc yêu cầu sự trợ giúp, để chia sẻ dự án của bạn.

Dưới đây là một số nơi bạn có thể thăm:


* [Discord](https://discord.gg/rqtkgwsk6j)
* [Telegram](https://t.me/fricscoin)
* [Twitter/X](https://x.com/friccoinpow)

## Câu Hỏi Thường Gặp ❓

Bạn có câu hỏi liên quan đến Friccoin? Có thể có một câu trả lời trong [FAQ](doc/FAQ.md) hoặc phần [hỏi đáp](https://github.com/Friccoin/Friccoin-core/discussions/categories/q-a) của bảng thảo luận!

## Giấy Phép ⚖️
Nhân Tố Friccoin được phát hành theo các điều khoản của giấy phép MIT. Xem
[COPYING](COPYING) để biết thêm thông tin hoặc xem
[opensource.org](https://opensource.org/licenses/MIT)
