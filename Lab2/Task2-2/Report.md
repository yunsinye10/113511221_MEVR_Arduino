**`Lab2/Task2-2/report.md`（完整示範報告）**

```markdown
# 課題報告：Task 2-2 使用超音波感測器(HC-SR04)控制伺服馬達(SG90)

- **學生姓名**：[江翰霖]
- **學生學號**：[113511221]
- **完成日期**：2026-09-24

---

### 1. 實驗目標
- 驗證 HC-SR04 是否正常運作。
- 掌握 HC-SR04 之使用方式，以及超音波傳遞之觀念。
- 學習透過 IC 功能獲取資料，並且PWM進行輸出。

### 2. 設備與元件
- Arduino Uno 開發板 x 1
- USB Type-B 傳輸線 x 1
- 個人電腦（已安裝 Arduino IDE）x 1
- HC-SR04 x 1
- SG90 x 1

### 3. 操作說明與成果
1. **連接電路**：將 Arduino Uno 上的 5V 、 GND接到HC-SR04、SG90的電源腳位，Uno板的digital pin10、pin11分別接到HC-SR04的TRIG、ECHO，SG90的橘色線接到Pin6，利用PWM做控制。
2. **燒錄程式** 將Arduino Uno連接上電腦，並將 `Task2-2.ino` 燒錄至 Arduino Uno 上
3. **實驗成果**：將物體放到HC-SR04前，隨著物品與HC-SR04的距離改變，SG90的舵片角度也隨之改變
4. **操作影片**：請參閱同目錄下 `video/Task2-2.mp4` 之實際操作畫面。
