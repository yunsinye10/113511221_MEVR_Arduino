**`Lab3/Task3-2/report.md`（完整示範報告）**

```markdown
# 課題報告：Task 3-2 使用C#視窗程式與序列通訊控制LED

- **學生姓名**：[江翰霖]
- **學生學號**：[113511221]
- **報告日期**：2026-10-07

---

### 1. 實驗目標
- 學習以Visual Studio建立C# Windows Forms圖形介面。
- 掌握電腦與Arduino之間的序列通訊，透過按鈕傳送LED控制命令。
- 接收 Arduino 回傳訊息，將LED狀態顯示於電腦介面。

### 2. 設備與元件
- Arduino Uno 開發板 x 1
- USB Type-B 傳輸線 x 1
- 個人電腦（已安裝 Arduino IDE、Visual Studio，並可執行C# Windows Forms 專案）x 1
- LED x 1
- LED 限流電阻 x 1
- 麵包板與杜邦線

### 3. 操作說明與成果
1. **連接電路**：LED 正極經限流電阻接至Arduino Uno的D5，負極接GND；Arduin 以USB線連接電腦，供電並進行序列通訊。
2. **燒錄程式**：開啟並上傳`Task3_2_adv.ino`。程式使用`Serial.begin(9600)`，持續檢查收到的資料，以換行字元`\n`作為命令結尾，並透過`trim()`移除首尾空白。
3. **結果說明**：使用Visual Studio 開啟原專案`Lab3/Task3-2_3-3_Visual_Studio/Task3_2.slnx`，選擇 `WinFormsApp2`作為啟動專案。程式目前設定為**COM6、9600 baud**，使用前須將 `Form1.cs` 中的 COM 埠改為實際 Arduino 的埠號，並關閉占用該埠的序列埠監控器，按下介面的On按鈕，C#透過`SerialPort.WriteLine("ON")`傳送命令，Arduino 將D5設為HIGH，點亮LED；按下Off按鈕則傳送`OFF`，將D5設為LOW，熄滅LED。
4. **操作影片**：請參閱同目錄下 `video/Task3-2.mov`之實際操作畫面。
