// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 686 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fc210.

// Ghidra body range 0x588FC210..0x588FC4BE; 686 mapped bytes.
extern "C" __declspec(naked) void FUN_588fc210_segment_00() {
    __asm {
        // 0x588FC210: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x588FC213: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FC218: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FC21A: mov dword ptr [esp + 0x40], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588FC21E: mov eax, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x588FC222: cmp eax, 0x80025101
        __asm _emit 0x3D
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x588FC227: jne 0x588fc241
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588FC229: cmp word ptr [esp + 0x4c], 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x4C
        __asm _emit 0x0E
        // 0x588FC22F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC231: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC233: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC235: je 0x588fc29d
        __asm _emit 0x74
        __asm _emit 0x66
        // 0x588FC237: push 0x1777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC23C: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC241: cmp eax, 0x80025103
        __asm _emit 0x3D
        __asm _emit 0x03
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x588FC246: jne 0x588fc306
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC24C: movzx eax, word ptr [esp + 0x4c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588FC251: add eax, -2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFE
        // 0x588FC254: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x588FC257: ja 0x588fc2c7
        __asm _emit 0x77
        __asm _emit 0x6E
        // 0x588FC259: movzx eax, byte ptr [eax + 0x588fc4dc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0xDC
        __asm _emit 0xC4
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588FC260: jmp dword ptr [eax*4 + 0x588fc4c0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0xC4
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588FC267: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC269: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC26B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC26D: push 0x1778
        __asm _emit 0x68
        __asm _emit 0x78
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC272: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0x2A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC277: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC279: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC27B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC27D: push 0x1779
        __asm _emit 0x68
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC282: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0x1A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC287: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC289: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC28B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC28D: push 0x1787
        __asm _emit 0x68
        __asm _emit 0x87
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC292: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC297: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC299: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC29B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC29D: push 0x1789
        __asm _emit 0x68
        __asm _emit 0x89
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC2A2: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0xFA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC2A7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC2A9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC2AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC2AD: push 0x178a
        __asm _emit 0x68
        __asm _emit 0x8A
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC2B2: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0xEA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC2B7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC2B9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC2BB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC2BD: push 0x178c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC2C2: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0xDA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC2C7: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x588FC2C9: lea ecx, [esp + 5]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588FC2CD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC2CF: push ecx
        __asm _emit 0x51
        // 0x588FC2D0: mov byte ptr [esp + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FC2D5: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0x09
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FC2DA: movzx edx, word ptr [esp + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588FC2DF: push edx
        __asm _emit 0x52
        // 0x588FC2E0: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FC2E4: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FC2E9: push eax
        __asm _emit 0x50
        // 0x588FC2EA: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FC2F0: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588FC2F3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC2F5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC2F7: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FC2FB: push ecx
        __asm _emit 0x51
        // 0x588FC2FC: push 0x177a
        __asm _emit 0x68
        __asm _emit 0x7A
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC301: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC306: cmp eax, 0x80025104
        __asm _emit 0x3D
        __asm _emit 0x04
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x588FC30B: jne 0x588fc344
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x588FC30D: mov edx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x68
        // 0x588FC310: mov ecx, dword ptr [edx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC316: call 0x588facd0
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FC31B: movzx eax, word ptr [esp + 0x4c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588FC320: dec eax
        __asm _emit 0x48
        // 0x588FC321: cmp eax, 0x11
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x11
        // 0x588FC324: ja 0x588fc2c7
        __asm _emit 0x77
        __asm _emit 0xA1
        // 0x588FC326: movzx eax, byte ptr [eax + 0x588fc500]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588FC32D: jmp dword ptr [eax*4 + 0x588fc4ec]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xEC
        __asm _emit 0xC4
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588FC334: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC336: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC338: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC33A: push 0x177d
        __asm _emit 0x68
        __asm _emit 0x7D
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC33F: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0x5D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC344: cmp eax, 0x80025105
        __asm _emit 0x3D
        __asm _emit 0x05
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x588FC349: jne 0x588fc3ea
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC34F: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x588FC352: call 0x588ff080
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC357: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FC359: je 0x588fc362
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588FC35B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FC35D: call 0x588f7e90
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FC362: movzx eax, word ptr [esp + 0x4c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588FC367: dec eax
        __asm _emit 0x48
        // 0x588FC368: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x588FC36B: ja 0x588fc3ab
        __asm _emit 0x77
        __asm _emit 0x3E
        // 0x588FC36D: movzx edx, byte ptr [eax + 0x588fc52c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x2C
        __asm _emit 0xC5
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588FC374: jmp dword ptr [edx*4 + 0x588fc514]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0xC5
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588FC37B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC37D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC37F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC381: push 0x177e
        __asm _emit 0x68
        __asm _emit 0x7E
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC386: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC38B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC38D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC38F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC391: push 0x177f
        __asm _emit 0x68
        __asm _emit 0x7F
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC396: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC39B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC39D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC39F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC3A1: push 0x178b
        __asm _emit 0x68
        __asm _emit 0x8B
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC3A6: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0xF6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC3AB: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x588FC3AD: lea eax, [esp + 5]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588FC3B1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC3B3: push eax
        __asm _emit 0x50
        // 0x588FC3B4: mov byte ptr [esp + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FC3B9: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FC3BE: movzx ecx, word ptr [esp + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588FC3C3: push ecx
        __asm _emit 0x51
        // 0x588FC3C4: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FC3C8: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FC3CD: push edx
        __asm _emit 0x52
        // 0x588FC3CE: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FC3D4: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588FC3D7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC3D9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC3DB: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FC3DF: push eax
        __asm _emit 0x50
        // 0x588FC3E0: push 0x177a
        __asm _emit 0x68
        __asm _emit 0x7A
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC3E5: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC3EA: cmp eax, 0x80025106
        __asm _emit 0x3D
        __asm _emit 0x06
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x588FC3EF: jne 0x588fc440
        __asm _emit 0x75
        __asm _emit 0x4F
        // 0x588FC3F1: movzx eax, word ptr [esp + 0x4c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588FC3F6: add eax, -6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFA
        // 0x588FC3F9: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588FC3FC: ja 0x588fc2c7
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xC5
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FC402: jmp dword ptr [eax*4 + 0x588fc53c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0xC5
        __asm _emit 0x8F
        __asm _emit 0x58
        // 0x588FC409: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC40B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC40D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC40F: push 0x1780
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC414: jmp 0x588fc4a1
        __asm _emit 0xE9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC419: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC41B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC41D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC41F: push 0x1781
        __asm _emit 0x68
        __asm _emit 0x81
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC424: jmp 0x588fc4a1
        __asm _emit 0xEB
        __asm _emit 0x7B
        // 0x588FC426: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC428: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC42A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC42C: push 0x1782
        __asm _emit 0x68
        __asm _emit 0x82
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC431: jmp 0x588fc4a1
        __asm _emit 0xEB
        __asm _emit 0x6E
        // 0x588FC433: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC435: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC437: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC439: push 0x1783
        __asm _emit 0x68
        __asm _emit 0x83
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC43E: jmp 0x588fc4a1
        __asm _emit 0xEB
        __asm _emit 0x61
        // 0x588FC440: cmp eax, 0x80025102
        __asm _emit 0x3D
        __asm _emit 0x02
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x588FC445: jne 0x588fc4ad
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x588FC447: movzx eax, word ptr [esp + 0x4c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588FC44C: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588FC44F: je 0x588fc496
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x588FC451: sub eax, 0xd
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x0D
        // 0x588FC454: je 0x588fc297
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3D
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FC45A: push 0x3f
        __asm _emit 0x6A
        __asm _emit 0x3F
        // 0x588FC45C: lea edx, [esp + 5]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588FC460: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC462: push edx
        __asm _emit 0x52
        // 0x588FC463: mov byte ptr [esp + 0xc], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588FC468: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x07
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FC46D: movzx eax, word ptr [esp + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588FC472: push eax
        __asm _emit 0x50
        // 0x588FC473: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FC477: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FC47C: push ecx
        __asm _emit 0x51
        // 0x588FC47D: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FC483: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x588FC486: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC488: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC48A: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FC48E: push edx
        __asm _emit 0x52
        // 0x588FC48F: push 0x177a
        __asm _emit 0x68
        __asm _emit 0x7A
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC494: jmp 0x588fc4a1
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x588FC496: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC498: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC49A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC49C: push 0x177b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC4A1: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xF6
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588FC4A6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588FC4A8: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588FC4AD: mov ecx, dword ptr [esp + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x588FC4B1: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588FC4B3: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FC4B8: add esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x44
        // 0x588FC4BB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
