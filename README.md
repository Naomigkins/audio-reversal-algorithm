# audio-reversal-algorithm
# 🎵 In-Place Audio Data Reversal & Runtime Performance Algorithm

A low-level C++ console application engineered to simulate audio buffer manipulation through an optimized, in-place array reversal algorithm. This project includes built-in benchmarking utilities to measure exact execution runtimes across variable data loads.

---

## 🛠️ Tech Stack & Technical Focus
* **Language:** C++ (ISO/IEC 14882)
* **Algorithmic Efficiency:** In-Place Data Manipulation (\(O(1)\) Space Complexity)
* **Benchmarking:** High-Resolution Microsecond Clock Tracking (`std::chrono`)
* **Memory Control:** Dynamic Array Allocation & Safe Memory Cleanup (`new[]` / `delete[]`)

---

## 🧠 Code Architecture & Implementation Details

The program is structured into three highly optimized parts designed to demonstrate computational efficiency:

### 1. The In-Place Reversal Logic
Instead of creating a duplicate array (which wastes memory), the algorithm uses a **Two-Pointer Approach** to swap symmetrical elements toward the center using a single temporary tracking variable. This minimizes memory overhead during processing.

### 2. Microsecond Runtime Tracking (`std::chrono`)
The program dynamically builds and processes arrays of varying operational scaling (Sizes: 500, 1500, and 2500 data points). It utilizes a high-resolution monotonic clock to track precise processor execution time down to the microsecond level.

### 3. Execution Snapshot
When executed, the program validates its core logical accuracy before outputting performance metrics:
```text
Original: [1,2,3,4,5]
Reversed: [5,4,3,2,1]

Array Size: 500  | Runtime: [X] microseconds
Array Size: 1500 | Runtime: [Y] microseconds
Array Size: 2500 | Runtime: [Z] microseconds
```

---

## 🔧 How to Compile and Run Locally

### Prerequisites
Ensure you have a C++ compiler installed (such as `g++` via MinGW for Windows, or Clang for macOS/Linux).

### Execution Steps
1. Clone this repository to your machine:
   ```bash
   git clone https://github.com
   ```
2. Navigate into the project directory:
   ```bash
   cd audio-reversal-algorithm
   ```
3. Compile the source file (assuming file is saved as `main.cpp`):
   ```bash
   g++ main.cpp -o audio_processor
   ```
4. Run the compiled executable:
   * **Windows:** `audio_processor.exe`
   * **macOS/Linux:** `./audio_processor`

---

## 🎓 Cybersecurity Relevance
Understanding how data structural buffers are rearranged in memory—and how processing time scales alongside data input structures—is foundational to reverse engineering malware, examining cryptographic buffers, and defending against memory-exhaustion exploits.
