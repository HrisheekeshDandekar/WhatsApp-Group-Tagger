# Whatsapp Group Tagger

## Overview
The Whatsapp Group Tagger is a powerful tool designed to tag multiple participants in a Whatsapp group chat swiftly and efficiently. This tool is optimized for performance on Windows systems, enabling users to tag hundreds of participants within minutes.

## Why C?
Much faster than Python scrips out there!
The painfully slow pyautogui tags around 40 people before our patience runs out.
Experience native driver parformance using C. Tag 750+ participants in minutes.

## How to Use
Follow these simple steps to use the Whatsapp Group Tagger:

1. **Download the Program**:
   - Download the release and run,
   - *skip step 3 & 4 if you are an over trusting individual* cool with running a random exe. 
   - Alternatively, click on the "Clone or download" button and select "Download ZIP".
   - Extract the downloaded ZIP file to a convenient location on your computer.

3. **Prepare the Environment**:
   - Ensure you have the Windows operating system installed on your computer.
   - Install a C compiler compatible with Windows, such as MinGW.

4. **Compilation**:
   - Open a command prompt window.
   - Navigate to the directory where you extracted the Whatsapp Group Tagger files.
   - Run the following command to compile the program:
     ```bash
     gcc -O1 main.c -o tagall.exe
     ```
     Replace `-O1` with `-O2` if you prefer higher optimization.
     WARNING: DO NOT USE -O3, PERFORMANCE TAKES A HIT....

5. **Prepare Whatsapp Web**:
   - Open Whatsapp Web in your preferred web browser.
     
6. **Execution**:
   - Double-click the `tagall.exe` file to execute the program.
   - When prompted, enter the number of participants in the Whatsapp group and press Enter.

7. **Tagging**:
   - Within 7 seconds after executing the program, switch back to the Whatsapp web chat window.
   - Navigate to the chat where you want to tag participants.
   - Position your cursor in the chat input field.
   - The program will automatically start tagging participants according to the provided number.

## Important Notes
- Ensure that you have GCC compiler installed and accessible in your command prompt environment.
- Respect the privacy and terms of service of Whatsapp while using this tool.
- For any issues or inquiries, refer to the Github repository.

## Hello Reddit, provided you an EXE.
- Sincerely, smelly nerds

