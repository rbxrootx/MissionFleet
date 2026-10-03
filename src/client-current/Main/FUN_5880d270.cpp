// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 2724 bytes across two ranges.

// Ghidra range: 0x5880D270 .. +0x1FD bytes.
extern "C" __declspec(naked) void FUN_5880d270_segment_00() {
    __asm {
        // 0x5880D270: push ecx
        __asm _emit 0x51
        // 0x5880D271: push ebx
        __asm _emit 0x53
        // 0x5880D272: push ebp
        __asm _emit 0x55
        // 0x5880D273: mov eax, 0xaaaaaaaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880D278: push esi
        __asm _emit 0x56
        // 0x5880D279: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5880D27D: xor dword ptr [esi + 0x10c], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D283: xor dword ptr [esi + 0x108], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D289: xor dword ptr [esi + 0x124], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D28F: xor dword ptr [esi + 0x12c], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D295: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D29B: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5880D29E: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5880D2A0: mov ecx, dword ptr [eax + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D2A6: movzx ecx, word ptr [ecx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x5880D2AA: and ecx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5880D2AD: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5880D2AF: mov dword ptr [esp + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5880D2B3: cmp ecx, 9
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x5880D2B6: ja 0x5880d300
        __asm _emit 0x77
        __asm _emit 0x48
        // 0x5880D2B8: jmp dword ptr [ecx*4 + 0x5880dd18]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x18
        __asm _emit 0xDD
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x5880D2BF: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5880D2C1: jmp 0x5880d300
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x5880D2C3: mov ebp, 0x4aa
        __asm _emit 0xBD
        __asm _emit 0xAA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D2C8: jmp 0x5880d300
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x5880D2CA: mov ebp, 0x4ca
        __asm _emit 0xBD
        __asm _emit 0xCA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D2CF: jmp 0x5880d300
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x5880D2D1: mov ebp, 0xbe2
        __asm _emit 0xBD
        __asm _emit 0xE2
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D2D6: jmp 0x5880d300
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x5880D2D8: mov ebp, 0x1308
        __asm _emit 0xBD
        __asm _emit 0x08
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D2DD: jmp 0x5880d300
        __asm _emit 0xEB
        __asm _emit 0x21
        // 0x5880D2DF: mov ebp, 0x12f6
        __asm _emit 0xBD
        __asm _emit 0xF6
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D2E4: jmp 0x5880d300
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x5880D2E6: mov ebp, 0x1c7c
        __asm _emit 0xBD
        __asm _emit 0x7C
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D2EB: jmp 0x5880d300
        __asm _emit 0xEB
        __asm _emit 0x13
        // 0x5880D2ED: mov ebp, 0x1d4e
        __asm _emit 0xBD
        __asm _emit 0x4E
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D2F2: jmp 0x5880d300
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5880D2F4: mov ebp, 0xea60
        __asm _emit 0xBD
        __asm _emit 0x60
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D2F9: jmp 0x5880d300
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x5880D2FB: mov ebp, 0x1b58
        __asm _emit 0xBD
        __asm _emit 0x58
        __asm _emit 0x1B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D300: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D305: movzx eax, word ptr [eax + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880D30C: push edi
        __asm _emit 0x57
        // 0x5880D30D: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D312: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5880D316: je 0x5880d464
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D31C: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5880D320: je 0x5880d464
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D326: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5880D32A: je 0x5880d464
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D330: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x5880D334: je 0x5880d464
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D33A: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5880D33E: je 0x5880d464
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D344: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5880D347: je 0x5880d464
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D34D: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5880D351: jne 0x5880da1c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D357: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5880D35A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880D35C: je 0x5880d367
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5880D35E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5880D360: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x78
        // 0x5880D363: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880D365: jne 0x5880d360
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5880D367: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5880D36A: je 0x5880d3d8
        __asm _emit 0x74
        __asm _emit 0x6C
        // 0x5880D36C: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5880D36F: jne 0x5880da1c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D375: mov eax, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D37B: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5880D37E: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5880D381: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D386: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5880D388: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5880D38B: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5880D38D: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5880D390: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5880D392: mov dword ptr [esi + 0x10c], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D398: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D39E: mov eax, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D3A4: xor eax, dword ptr [esi + 0x138]
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D3AA: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5880D3AD: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5880D3B0: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D3B6: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D3BC: mov ecx, dword ptr [ecx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D3C2: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xC8
        // 0x5880D3C4: mov dword ptr [esi + 0x138], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D3CA: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D3D0: mov edx, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D3D6: jmp 0x5880d432
        __asm _emit 0xEB
        __asm _emit 0x5A
        // 0x5880D3D8: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D3DE: imul ecx, ecx, 0x4b
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x4B
        // 0x5880D3E1: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D3E6: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5880D3E8: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5880D3EB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5880D3ED: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5880D3F0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880D3F2: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D3F8: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D3FE: mov eax, dword ptr [ecx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D404: xor eax, dword ptr [esi + 0x138]
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D40A: imul eax, eax, 0x4b
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x4B
        // 0x5880D40D: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D413: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D419: mov ecx, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D41F: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xC8
        // 0x5880D421: mov dword ptr [esi + 0x138], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D427: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D42C: mov edx, dword ptr [eax + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D432: xor edx, ecx
        __asm _emit 0x33
        __asm _emit 0xD1
        // 0x5880D434: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D439: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5880D43B: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5880D43E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5880D440: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5880D443: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880D445: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D44B: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D451: mov edx, dword ptr [ecx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D457: xor edx, eax
        __asm _emit 0x33
        __asm _emit 0xD0
        // 0x5880D459: mov dword ptr [esi + 0x138], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D45F: jmp 0x5880da1c
        __asm _emit 0xE9
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D464: mov ecx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x5880D467: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880D469: je 0x5880d4e6
        __asm _emit 0x74
        __asm _emit 0x7B
        // 0x5880D46B: jmp 0x5880d470
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra range: 0x5880D470 .. +0x8A7 bytes.
extern "C" __declspec(naked) void FUN_5880d270_segment_01() {
    __asm {
        // 0x5880D470: mov eax, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D476: movzx eax, word ptr [eax + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x5880D47A: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x5880D47D: add eax, -4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xFC
        // 0x5880D480: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x5880D483: ja 0x5880d4df
        __asm _emit 0x77
        __asm _emit 0x5A
        // 0x5880D485: jmp dword ptr [eax*4 + 0x5880dd40]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0xDD
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x5880D48C: mov eax, dword ptr [ecx + 0x1270]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D492: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880D497: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5880D499: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5880D49C: sub edx, eax
        __asm _emit 0x2B
        __asm _emit 0xD0
        // 0x5880D49E: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5880D4A0: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5880D4A2: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5880D4A4: jmp 0x5880d4c9
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x5880D4A6: mov edx, dword ptr [ecx + 0x1270]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D4AC: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880D4B2: imul edx, edx, 0x82
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D4B8: jmp 0x5880d4c9
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5880D4BA: mov edx, dword ptr [ecx + 0x1270]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D4C0: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880D4C6: imul edx, edx, 0x6e
        __asm _emit 0x6B
        __asm _emit 0xD2
        __asm _emit 0x6E
        // 0x5880D4C9: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D4CE: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5880D4D0: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5880D4D3: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880D4D9: mov dword ptr [ecx + 0x1270], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D4DF: mov ecx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x78
        // 0x5880D4E2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5880D4E4: jne 0x5880d470
        __asm _emit 0x75
        __asm _emit 0x8A
        // 0x5880D4E6: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D4EB: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5880D4EE: mov edx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D4F4: movzx eax, word ptr [edx + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5880D4F8: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x5880D4FB: dec eax
        __asm _emit 0x48
        // 0x5880D4FC: cmp eax, 8
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5880D4FF: ja 0x5880d7a0
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x9B
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D505: jmp dword ptr [eax*4 + 0x5880dd58]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xDD
        __asm _emit 0x80
        __asm _emit 0x58
        // 0x5880D50C: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D512: imul ecx, ecx, 0x4b
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x4B
        // 0x5880D515: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D51A: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5880D51C: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5880D51F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5880D521: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5880D524: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880D526: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D52C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D532: mov eax, dword ptr [ecx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D538: xor eax, dword ptr [esi + 0x138]
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D53E: imul eax, eax, 0x4b
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x4B
        // 0x5880D541: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D547: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D54D: mov ecx, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D553: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xC8
        // 0x5880D555: mov dword ptr [esi + 0x138], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D55B: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D560: mov edx, dword ptr [eax + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D566: jmp 0x5880d773
        __asm _emit 0xE9
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D56B: mov eax, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D571: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5880D574: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5880D577: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D57C: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5880D57E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5880D581: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5880D583: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5880D586: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880D588: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D58E: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D594: mov eax, dword ptr [ecx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D59A: xor eax, dword ptr [esi + 0x138]
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D5A0: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5880D5A3: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5880D5A6: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D5AC: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D5B2: mov ecx, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D5B8: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xC8
        // 0x5880D5BA: mov dword ptr [esi + 0x138], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D5C0: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D5C5: mov edx, dword ptr [eax + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D5CB: jmp 0x5880d773
        __asm _emit 0xE9
        __asm _emit 0xA3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D5D0: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D5D6: imul ecx, ecx, 0x55
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x55
        // 0x5880D5D9: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D5DE: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5880D5E0: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5880D5E3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5880D5E5: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5880D5E8: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880D5EA: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D5F0: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D5F6: mov eax, dword ptr [ecx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D5FC: xor eax, dword ptr [esi + 0x138]
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D602: imul eax, eax, 0x55
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x55
        // 0x5880D605: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D60B: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D611: mov ecx, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D617: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xC8
        // 0x5880D619: mov dword ptr [esi + 0x138], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D61F: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D624: mov edx, dword ptr [eax + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D62A: jmp 0x5880d773
        __asm _emit 0xE9
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D62F: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D635: imul ecx, ecx, 0x5f
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x5F
        // 0x5880D638: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D63D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5880D63F: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D645: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5880D648: imul ecx, ecx, 0x6e
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x6E
        // 0x5880D64B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5880D64D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5880D650: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880D652: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D658: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D65D: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5880D65F: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5880D662: mov dword ptr [esi + 0x124], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D668: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D66E: mov eax, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D674: xor eax, dword ptr [esi + 0x138]
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D67A: imul eax, eax, 0x5f
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x5F
        // 0x5880D67D: jmp 0x5880d74d
        __asm _emit 0xE9
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D682: mov eax, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D688: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5880D68A: shl ecx, 4
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x04
        // 0x5880D68D: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5880D68F: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5880D691: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5880D693: add ecx, ecx
        __asm _emit 0x03
        __asm _emit 0xC9
        // 0x5880D695: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D69A: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5880D69C: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5880D69F: mov dword ptr [esi + 0x124], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D6A5: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D6AB: mov ecx, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D6B1: xor ecx, dword ptr [esi + 0x138]
        __asm _emit 0x33
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D6B7: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5880D6B9: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5880D6BC: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5880D6BE: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5880D6C0: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5880D6C2: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5880D6C4: jmp 0x5880d74d
        __asm _emit 0xE9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D6C9: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D6CF: imul ecx, ecx, 0x82
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D6D5: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D6DA: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5880D6DC: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5880D6DF: mov dword ptr [esi + 0x124], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D6E5: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D6EB: mov eax, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D6F1: xor eax, dword ptr [esi + 0x138]
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D6F7: imul eax, eax, 0x82
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D6FD: jmp 0x5880d74d
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x5880D6FF: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D705: imul ecx, ecx, 0x5a
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x5A
        // 0x5880D708: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D70D: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5880D70F: mov ecx, dword ptr [esi + 0x124]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D715: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5880D718: imul ecx, ecx, 0x6e
        __asm _emit 0x6B
        __asm _emit 0xC9
        __asm _emit 0x6E
        // 0x5880D71B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5880D71D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5880D720: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880D722: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D728: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D72D: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5880D72F: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5880D732: mov dword ptr [esi + 0x124], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D738: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D73E: mov eax, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D744: xor eax, dword ptr [esi + 0x138]
        __asm _emit 0x33
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D74A: imul eax, eax, 0x5a
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x5A
        // 0x5880D74D: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D753: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D759: mov ecx, dword ptr [ecx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D75F: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xC8
        // 0x5880D761: mov dword ptr [esi + 0x138], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D767: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D76D: mov edx, dword ptr [edx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D773: xor edx, ecx
        __asm _emit 0x33
        __asm _emit 0xD1
        // 0x5880D775: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D77A: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5880D77C: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5880D77F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5880D781: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5880D784: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880D786: mov dword ptr [esi + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D78C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D792: mov edx, dword ptr [ecx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D798: xor edx, eax
        __asm _emit 0x33
        __asm _emit 0xD0
        // 0x5880D79A: mov dword ptr [esi + 0x138], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D7A0: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D7A6: movzx eax, word ptr [ecx + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880D7AD: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5880D7B1: je 0x5880d818
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x5880D7B3: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5880D7B7: je 0x5880d7e6
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5880D7B9: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5880D7BD: je 0x5880d7e6
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x5880D7BF: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x5880D7C3: je 0x5880d7e6
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x5880D7C5: cmp ax, 0xc
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0C
        // 0x5880D7C9: je 0x5880d7e6
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5880D7CB: cmp ax, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0D
        // 0x5880D7CF: je 0x5880d7e6
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5880D7D1: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5880D7D5: je 0x5880d7e6
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5880D7D7: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5880D7DA: je 0x5880d7e6
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5880D7DC: cmp ax, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x10
        // 0x5880D7E0: jne 0x5880d879
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D7E6: cmp ax, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5880D7EA: je 0x5880d818
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5880D7EC: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5880D7F0: je 0x5880d818
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5880D7F2: cmp ax, 0xb
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0B
        // 0x5880D7F6: je 0x5880d818
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x5880D7F8: cmp ax, 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0A
        // 0x5880D7FC: je 0x5880d818
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5880D7FE: cmp ax, 0xe
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0E
        // 0x5880D802: je 0x5880d818
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5880D804: cmp ax, di
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5880D807: je 0x5880d818
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5880D809: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880D80B: call 0x5880b810
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880D810: add dword ptr [esi + 0x10c], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D816: jmp 0x5880d86c
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x5880D818: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D81D: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5880D820: movzx eax, byte ptr [edx + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D827: cmp dword ptr [ecx + 0x10a14], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880D82D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880D82F: jne 0x5880d83e
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5880D831: call 0x5880b810
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880D836: add dword ptr [esi + 0x10c], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D83C: jmp 0x5880d86c
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x5880D83E: call 0x5880b810
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880D843: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880D847: fild dword ptr [esp + 0x18]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5880D84B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5880D84D: jge 0x5880d855
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x5880D84F: fadd qword ptr [0x5898cb10]
        __asm _emit 0xDC
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xCB
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5880D855: fmul qword ptr [0x58999e50]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x50
        __asm _emit 0x9E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5880D85B: fiadd dword ptr [esi + 0x10c]
        __asm _emit 0xDA
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D861: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x3A
        __asm _emit 0xF4
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5880D866: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D86C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880D86E: call 0x5880bf00
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880D873: add dword ptr [esi + 0x108], eax
        __asm _emit 0x01
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D879: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D87E: cmp word ptr [eax + 0x105f0], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880D885: jne 0x5880da1c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D88B: mov ecx, dword ptr [eax + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D891: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D897: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5880D89A: movzx edx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D8A1: mov eax, dword ptr [ecx + 0x920]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D8A7: cmp dword ptr [ecx + 0x92c], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x2C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D8AD: mov edx, dword ptr [ecx + 0x924]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D8B3: mov edi, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D8B9: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x5880D8BC: lea eax, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x50
        // 0x5880D8BF: jne 0x5880d938
        __asm _emit 0x75
        __asm _emit 0x77
        // 0x5880D8C1: add eax, dword ptr [ecx + 0x91c]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D8C7: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5880D8C9: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D8CF: div dword ptr [ecx + 0x918]
        __asm _emit 0xF7
        __asm _emit 0xB1
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D8D5: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5880D8D7: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x5880D8DA: mov eax, 0xd1b71759
        __asm _emit 0xB8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x5880D8DF: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5880D8E1: shr edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0D
        // 0x5880D8E4: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x5880D8E6: mov dword ptr [esi + 0x10c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D8EC: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D8F2: mov ecx, dword ptr [edx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D8F8: mov eax, dword ptr [ecx + 0x920]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D8FE: mov edx, dword ptr [ecx + 0x924]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D904: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x5880D907: lea eax, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x50
        // 0x5880D90A: add eax, dword ptr [ecx + 0x91c]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D910: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5880D912: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D918: div dword ptr [ecx + 0x918]
        __asm _emit 0xF7
        __asm _emit 0xB1
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D91E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5880D920: imul ecx, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCF
        // 0x5880D923: mov eax, 0xd1b71759
        __asm _emit 0xB8
        __asm _emit 0x59
        __asm _emit 0x17
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x5880D928: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5880D92A: shr edx, 0xd
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x0D
        // 0x5880D92D: add dword ptr [esi + 0x108], edx
        __asm _emit 0x01
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D933: jmp 0x5880d9b8
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D938: add eax, dword ptr [ecx + 0x91c]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D93E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5880D940: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D946: div dword ptr [ecx + 0x918]
        __asm _emit 0xF7
        __asm _emit 0xB1
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D94C: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x5880D94F: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5880D952: mov eax, 0x4f8b588f
        __asm _emit 0xB8
        __asm _emit 0x8F
        __asm _emit 0x58
        __asm _emit 0x8B
        __asm _emit 0x4F
        // 0x5880D957: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5880D959: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x5880D95B: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5880D95D: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5880D95F: shr ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x10
        // 0x5880D962: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x5880D964: mov dword ptr [esi + 0x10c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D96A: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D970: mov ecx, dword ptr [ecx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D976: mov eax, dword ptr [ecx + 0x920]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x20
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D97C: mov edx, dword ptr [ecx + 0x924]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x24
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D982: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x5880D985: lea eax, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x50
        // 0x5880D988: add eax, dword ptr [ecx + 0x91c]
        __asm _emit 0x03
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D98E: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5880D990: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D996: div dword ptr [ecx + 0x918]
        __asm _emit 0xF7
        __asm _emit 0xB1
        __asm _emit 0x18
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D99C: imul eax, edi
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC7
        // 0x5880D99F: lea ecx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x80
        // 0x5880D9A2: mov eax, 0x4f8b588f
        __asm _emit 0xB8
        __asm _emit 0x8F
        __asm _emit 0x58
        __asm _emit 0x8B
        __asm _emit 0x4F
        // 0x5880D9A7: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5880D9A9: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x5880D9AB: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x5880D9AD: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5880D9AF: shr ecx, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x10
        // 0x5880D9B2: add dword ptr [esi + 0x108], ecx
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D9B8: mov edx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D9BE: mov eax, dword ptr [edx + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D9C4: mov eax, dword ptr [eax + 0x928]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D9CA: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D9D0: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5880D9D3: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5880D9D6: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880D9DB: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5880D9DD: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5880D9E0: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5880D9E2: mov ecx, dword ptr [esi + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D9E8: mov dword ptr [esi + 0x10c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D9EE: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880D9F3: mov edx, dword ptr [eax + 0x21c4c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x4C
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880D9F9: mov eax, dword ptr [edx + 0x928]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880D9FF: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x5880DA02: lea edx, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x80
        // 0x5880DA05: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5880DA0A: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5880DA0C: shr edx, 5
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x05
        // 0x5880DA0F: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5880DA11: mov dword ptr [esi + 0x108], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DA17: mov edi, 0xf
        __asm _emit 0xBF
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DA1C: push esi
        __asm _emit 0x56
        // 0x5880DA1D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5880DA1F: call 0x5880bf90
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880DA24: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DA29: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5880DA2C: mov ecx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DA32: movzx eax, word ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880DA36: movzx edx, word ptr [ecx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x0E
        // 0x5880DA3A: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DA40: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x5880DA43: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x5880DA46: and edx, edi
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x5880DA48: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5880DA4A: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x5880DA4D: cmp word ptr [ecx + 0x105f0], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880DA54: je 0x5880da9f
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x5880DA56: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DA5C: mov ecx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5880DA5F: cmp dword ptr [ecx + 0x63b8], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xB8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DA66: je 0x5880da71
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5880DA68: cmp dword ptr [ecx + 0x63bc], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xBC
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DA6F: jne 0x5880da9f
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x5880DA71: cmp dword ptr [esi + 0x10c], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DA77: jle 0x5880da7f
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x5880DA79: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DA7F: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DA85: mov ecx, dword ptr [ecx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880DA8B: mov edx, dword ptr [esi + 0x138]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DA91: xor edx, ecx
        __asm _emit 0x33
        __asm _emit 0xD1
        // 0x5880DA93: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5880DA95: jbe 0x5880da9f
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5880DA97: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xC8
        // 0x5880DA99: mov dword ptr [esi + 0x138], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DA9F: lea ecx, [ebp + ebp*8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0xED
        __asm _emit 0x00
        // 0x5880DAA3: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x5880DAA8: mul ecx
        __asm _emit 0xF7
        __asm _emit 0xE1
        // 0x5880DAAA: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x5880DAAD: cmp dword ptr [ebx + 0x808], edx
        __asm _emit 0x39
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DAB3: jbe 0x5880dabb
        __asm _emit 0x76
        __asm _emit 0x06
        // 0x5880DAB5: mov dword ptr [ebx + 0x808], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DABB: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DAC0: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x5880DAC3: mov ecx, dword ptr [ecx + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DAC9: movzx eax, word ptr [ecx + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5880DACD: movzx ecx, word ptr [ecx + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x49
        __asm _emit 0x0E
        // 0x5880DAD1: shr eax, 0xa
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0A
        // 0x5880DAD4: and eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x5880DAD7: and ecx, edi
        __asm _emit 0x23
        __asm _emit 0xCF
        // 0x5880DAD9: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5880DADB: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DAE1: imul eax, ebp
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC5
        // 0x5880DAE4: cmp word ptr [ecx + 0x105f0], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880DAEB: je 0x5880db36
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x5880DAED: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DAF3: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x5880DAF6: cmp dword ptr [ecx + 0x63b8], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xB8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DAFD: je 0x5880db08
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5880DAFF: cmp dword ptr [ecx + 0x63bc], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xBC
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB06: jne 0x5880db36
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x5880DB08: cmp dword ptr [ebx + 0x7f0], eax
        __asm _emit 0x39
        __asm _emit 0x83
        __asm _emit 0xF0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB0E: jle 0x5880db16
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x5880DB10: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB16: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DB1C: mov ecx, dword ptr [ecx + 0x21c90]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5880DB22: mov edi, dword ptr [ebx + 0x81c]
        __asm _emit 0x8B
        __asm _emit 0xBB
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB28: xor edi, ecx
        __asm _emit 0x33
        __asm _emit 0xF9
        // 0x5880DB2A: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5880DB2C: jbe 0x5880db36
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x5880DB2E: xor ecx, eax
        __asm _emit 0x33
        __asm _emit 0xC8
        // 0x5880DB30: mov dword ptr [ebx + 0x81c], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB36: cmp dword ptr [ebx + 0x810], edx
        __asm _emit 0x39
        __asm _emit 0x93
        __asm _emit 0x10
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB3C: jbe 0x5880db44
        __asm _emit 0x76
        __asm _emit 0x06
        // 0x5880DB3E: mov dword ptr [esi + 0x12c], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB44: cmp dword ptr [ebx + 0x808], edx
        __asm _emit 0x39
        __asm _emit 0x93
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB4A: jbe 0x5880db52
        __asm _emit 0x76
        __asm _emit 0x06
        // 0x5880DB4C: mov dword ptr [esi + 0x124], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB52: lea edx, [ebp + ebp*2]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x6D
        __asm _emit 0x00
        // 0x5880DB56: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5880DB58: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x5880DB5A: mov eax, 0xcccccccd
        __asm _emit 0xB8
        __asm _emit 0xCD
        __asm _emit 0xCC
        __asm _emit 0xCC
        __asm _emit 0xCC
        // 0x5880DB5F: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5880DB61: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x5880DB64: cmp dword ptr [ebx + 0x7ec], edx
        __asm _emit 0x39
        __asm _emit 0x93
        __asm _emit 0xEC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB6A: jbe 0x5880db72
        __asm _emit 0x76
        __asm _emit 0x06
        // 0x5880DB6C: mov dword ptr [esi + 0x108], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB72: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DB77: movzx eax, word ptr [eax + 0x105f0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5880DB7E: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x5880DB82: je 0x5880db8a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5880DB84: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x5880DB88: jne 0x5880dbb5
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x5880DB8A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5880DB8C: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB92: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB98: mov dword ptr [esi + 0x124], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DB9E: mov dword ptr [esi + 0x12c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBA4: mov eax, 0xaaaaaaaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880DBA9: mov dword ptr [esi + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBAF: mov dword ptr [esi + 0x120], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBB5: mov eax, 0xaaaaaaaa
        __asm _emit 0xB8
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880DBBA: xor dword ptr [esi + 0x11c], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBC0: xor dword ptr [esi + 0x128], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBC6: xor dword ptr [esi + 0x120], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBCC: xor dword ptr [esi + 0x110], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBD2: xor dword ptr [esi + 0x130], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBD8: xor dword ptr [esi + 0x1a8], eax
        __asm _emit 0x31
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBDE: mov bl, 0xaa
        __asm _emit 0xB3
        __asm _emit 0xAA
        // 0x5880DBE0: xor byte ptr [esi + 0x1ac], bl
        __asm _emit 0x30
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBE6: lea ebp, [esi + 6]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x06
        // 0x5880DBE9: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5880DBEB: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DBF0: xor byte ptr [eax - 1], bl
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x5880DBF3: xor byte ptr [eax], bl
        __asm _emit 0x30
        __asm _emit 0x18
        // 0x5880DBF5: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5880DBF8: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5880DBFB: jne 0x5880dbf0
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5880DBFD: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DC03: cmp word ptr [ecx + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x5880DC0B: jne 0x5880dc17
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5880DC0D: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5880DC11: push esi
        __asm _emit 0x56
        // 0x5880DC12: call 0x5880b6e0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0xDA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880DC17: mov ecx, dword ptr [esi + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DC1D: mov dword ptr [esi + 0x1c4], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DC27: xor ecx, 0xf3a91cd0
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xD0
        __asm _emit 0x1C
        __asm _emit 0xA9
        __asm _emit 0xF3
        // 0x5880DC2D: mov dword ptr [esi + 0x1a0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DC33: mov eax, dword ptr [0x58a24588]
        __asm _emit 0xA1
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DC38: mov edi, dword ptr [eax + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x40
        // 0x5880DC3B: mov eax, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x58
        // 0x5880DC3E: imul eax, eax, 0xd
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x0D
        // 0x5880DC41: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5880DC43: div dword ptr [edi + 4]
        __asm _emit 0xF7
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x5880DC46: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5880DC49: mov edx, dword ptr [eax + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x90
        // 0x5880DC4C: xor edx, ecx
        __asm _emit 0x33
        __asm _emit 0xD1
        // 0x5880DC4E: mov dword ptr [esi + 0x1a0], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DC54: lea eax, [esi + 2]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x02
        // 0x5880DC57: mov edx, 0x71
        __asm _emit 0xBA
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DC5C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5880DC60: movzx ecx, byte ptr [eax - 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0xFE
        // 0x5880DC64: add dword ptr [esi + 0x1c4], ecx
        __asm _emit 0x01
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DC6A: movzx edi, byte ptr [eax - 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x78
        __asm _emit 0xFF
        // 0x5880DC6E: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DC74: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5880DC76: mov dword ptr [esi + 0x1c4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DC7C: movzx edi, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x38
        // 0x5880DC7F: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5880DC81: mov dword ptr [esi + 0x1c4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DC87: movzx edi, byte ptr [eax + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x5880DC8B: add edi, ecx
        __asm _emit 0x03
        __asm _emit 0xF9
        // 0x5880DC8D: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5880DC90: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5880DC93: mov dword ptr [esi + 0x1c4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DC99: jne 0x5880dc60
        __asm _emit 0x75
        __asm _emit 0xC5
        // 0x5880DC9B: mov edx, 0xaaaaaaaa
        __asm _emit 0xBA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5880DCA0: xor dword ptr [esi + 0x1c4], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCA6: xor dword ptr [esi + 0x11c], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCAC: xor dword ptr [esi + 0x128], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCB2: xor dword ptr [esi + 0x120], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCB8: xor dword ptr [esi + 0x110], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCBE: xor dword ptr [esi + 0x130], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCC4: xor dword ptr [esi + 0x1a8], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCCA: xor byte ptr [esi + 0x1ac], bl
        __asm _emit 0x30
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCD0: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5880DCD2: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCD7: pop edi
        __asm _emit 0x5F
        // 0x5880DCD8: xor byte ptr [eax - 1], bl
        __asm _emit 0x30
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x5880DCDB: xor byte ptr [eax], bl
        __asm _emit 0x30
        __asm _emit 0x18
        // 0x5880DCDD: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x5880DCE0: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5880DCE3: jne 0x5880dcd8
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5880DCE5: xor dword ptr [esi + 0x10c], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCEB: xor dword ptr [esi + 0x108], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCF1: xor dword ptr [esi + 0x124], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCF7: xor dword ptr [esi + 0x12c], edx
        __asm _emit 0x31
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DCFD: push ecx
        __asm _emit 0x51
        // 0x5880DCFE: push ecx
        __asm _emit 0x51
        // 0x5880DCFF: mov ecx, dword ptr [0x58a24814]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5880DD05: push 0x1c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880DD0A: push esi
        __asm _emit 0x56
        // 0x5880DD0B: call 0x5875b3f0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0xD6
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5880DD10: pop esi
        __asm _emit 0x5E
        // 0x5880DD11: pop ebp
        __asm _emit 0x5D
        // 0x5880DD12: pop ebx
        __asm _emit 0x5B
        // 0x5880DD13: pop ecx
        __asm _emit 0x59
        // 0x5880DD14: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
