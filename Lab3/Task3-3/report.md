# 課題報告：Task 3-3 使用 HC-05 藍牙模組無線控制 LED

- **學生姓名**：[江翰霖]
- **學生學號**：[113511221]
- **報告日期**：2026-10-07

---

### 1. 實驗目標
- 學習 HC-05 藍牙模組的連接與資料通訊方式。
- 使用`SoftwareSerial`建立 Arduino 與 HC-05 之間的序列通訊。
- 將Task 3-2 的LED控制改為電腦經藍牙傳送命令，完成無線控制。

### 2. 設備與元件
- Arduino Uno 開發板 x 1
- USB Type-B 傳輸線 x 1（供電、燒錄與除錯）
- 個人電腦（具藍牙功能，已安裝 Arduino IDE、Visual Studio）x 1
- HC-05 藍牙模組 x 1
- LED x 1
- LED 限流電阻 x 1
- 分壓電阻 x 2
- 麵包板與杜邦線

### 3. 操作說明與成果
1. **連接電路**：LED 正極經限流電阻接至 D5，負極接GND。HC-05的TXD接Arduino D10(軟體序列埠 RX)，Arduino D11(軟體序列埠 TX)經分壓後接HC-05的RXD，將輸入電位降至約3.3V。模組電源依所使用板型的規格接入，GND 與 Arduino 共地。
2. **燒錄程式**：開啟並上傳`Task3_3.ino`。程式以`SoftwareSerial BT(10, 11)`建立藍牙通訊，`BT.begin(9600)`設定資料模式通訊速率；USB除錯輸出也使用9600 baud。
3. **結果說明**：將電腦與 HC-05 配對，確認模組資料模式速率為9600 baud，並確認Windows提供的藍牙序列埠。使用Visual Studio開啟原專案`Lab3/Task3-2_3-3_Visual_Studio/Task3_2.slnx`，選擇`BluetoothApp` 作為啟動專案。電腦端目前設定為 **COM10、9600 baud**，使用前須將`Form1.cs`中的埠號改為實際藍牙通訊埠，按下介面的 On 或 Off 按鈕，電腦透過藍牙序列埠送出以換行結尾的`ON`或`OFF`。HC-05將命令傳給Arduino，Arduino讀取並去除首尾空白，再將D5設為HIGH或LOW，控制LED亮滅。
4. **操作影片**：請參閱同目錄下 `video/Task3-3.mov`之實際操作畫面。