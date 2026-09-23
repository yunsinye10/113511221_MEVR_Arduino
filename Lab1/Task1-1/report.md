**`Lab1/Task1-1/report.md`（完整示範報告）**

```markdown
# 課題報告：Task 1-1 使用可變電阻調整LED之亮度

- **學生姓名**：[江翰霖]
- **學生學號**：[113511221]
- **完成日期**：2026-09-17

---

### 1. 實驗目標
- 驗證 Arduino IDE 類比輸入環境正常。
- 掌握 `analog.read()` 之使用方式，以及電路類比之觀念。
- 學習透過 Arduino IDE 類比輸入腳位獲取資料，並且觀察該類比資料與實際電路之關係。

### 2. 設備與元件
- Arduino Uno 開發板 x 1
- USB Type-B 傳輸線 x 1
- 個人電腦（已安裝 Arduino IDE）x 1
- 可變電阻 x 1
- LED x 1

### 3. 操作說明與成果
1. **連接電路**：將 Arduino Uno 上的 5V 、 GND連接到可變電阻兩端， 並將可變電阻上的滑動接角接至LED正端、類比輸入A0上。
2. **燒錄程式** 將Arduino Uno連接上電腦，並將 `Task1-1.ino` 燒錄至 Arduino Uno 上
3. **開啟監控器**：開啟 Arduino IDE 的 Serial Monitor，將鮑率（Baud rate）設為 **9600 baud**。
4. **實驗成果**：序列埠監控器持續讀取類比輸入值，該值落在0~1023之間，與LED亮度相關，LED越亮，讀值越大。
5. **操作影片**：請參閱同目錄下 `video/Task1-1.mp4` 之實際操作畫面。
