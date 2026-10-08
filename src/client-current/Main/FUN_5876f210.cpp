// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 583 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876f210.

// Ghidra body range 0x5876F210..0x5876F457; 583 mapped bytes.
extern "C" __declspec(naked) void FUN_5876f210_segment_00() {
    __asm {
        // 0x5876F210: movzx edx, byte ptr [ecx + 0x7a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x7A
        // 0x5876F214: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F216: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876F219: je 0x5876f31c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F21F: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876F222: je 0x5876f271
        __asm _emit 0x74
        __asm _emit 0x4D
        // 0x5876F224: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5876F227: jne 0x5876f31b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F22D: movzx ecx, byte ptr [ecx + 0x78]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x49
        __asm _emit 0x78
        // 0x5876F231: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5876F234: je 0x5876f251
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5876F236: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5876F239: jne 0x5876f31b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F23F: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F244: test byte ptr [eax + 0xd54], 0xf
        __asm _emit 0xF6
        __asm _emit 0x80
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0F
        // 0x5876F24B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5876F24D: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5876F250: ret
        __asm _emit 0xC3
        // 0x5876F251: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F257: mov eax, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F25D: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5876F261: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5876F265: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5876F268: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F26A: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5876F26D: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5876F270: ret
        __asm _emit 0xC3
        // 0x5876F271: movzx edx, byte ptr [ecx + 0x78]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x78
        // 0x5876F275: dec edx
        __asm _emit 0x4A
        // 0x5876F276: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5876F279: ja 0x5876f31b
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F27F: jmp dword ptr [edx*4 + 0x5876f458]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x58
        __asm _emit 0xF4
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x5876F286: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F28B: mov eax, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F291: jmp 0x5876f377
        __asm _emit 0xE9
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F296: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5876F299: mov eax, dword ptr [edx + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F29F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876F2A1: cmp dword ptr [eax + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5876F2A8: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5876F2AB: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5876F2AD: ret
        __asm _emit 0xC3
        // 0x5876F2AE: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5876F2B1: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F2B6: mov ecx, dword ptr [edx + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F2BC: mov edx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F2C2: mov eax, dword ptr [edx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F2C8: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5876F2CC: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5876F2D0: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5876F2D2: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x5876F2D4: jne 0x5876f319
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x5876F2D6: test byte ptr [ecx + 0x5e], 0xf
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x5E
        __asm _emit 0x0F
        // 0x5876F2DA: jmp 0x5876f44b
        __asm _emit 0xE9
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F2DF: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5876F2E2: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F2E7: mov ecx, dword ptr [edx + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F2ED: mov edx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F2F3: mov eax, dword ptr [edx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F2F9: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5876F2FD: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5876F301: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5876F303: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x5876F305: jne 0x5876f319
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5876F307: mov ecx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F30D: and ecx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0xFE
        // 0x5876F310: cmp ecx, 6
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x06
        // 0x5876F313: je 0x5876f451
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F319: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F31B: ret
        __asm _emit 0xC3
        // 0x5876F31C: movzx edx, byte ptr [ecx + 0x78]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x78
        // 0x5876F320: dec edx
        __asm _emit 0x4A
        // 0x5876F321: cmp edx, 7
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x5876F324: ja 0x5876f31b
        __asm _emit 0x77
        __asm _emit 0xF5
        // 0x5876F326: jmp dword ptr [edx*4 + 0x5876f470]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x70
        __asm _emit 0xF4
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x5876F32D: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F333: mov eax, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F339: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5876F33D: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5876F341: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5876F343: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876F345: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5876F347: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5876F34A: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5876F34C: ret
        __asm _emit 0xC3
        // 0x5876F34D: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5876F350: mov eax, dword ptr [edx + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F356: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876F358: cmp dword ptr [eax + 0xb8], -1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x5876F35F: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5876F362: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5876F364: ret
        __asm _emit 0xC3
        // 0x5876F365: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F36B: mov eax, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F371: mov eax, dword ptr [eax + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F377: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5876F37B: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x5876F37F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5876F382: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F384: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5876F387: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5876F38A: ret
        __asm _emit 0xC3
        // 0x5876F38B: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F391: mov edx, dword ptr [ecx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F397: mov eax, dword ptr [edx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F39D: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5876F3A1: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5876F3A5: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5876F3A7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5876F3A9: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x5876F3AB: sete cl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC1
        // 0x5876F3AE: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5876F3B0: ret
        __asm _emit 0xC3
        // 0x5876F3B1: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5876F3B4: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F3B9: mov ecx, dword ptr [edx + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F3BF: mov edx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F3C5: mov eax, dword ptr [edx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F3CB: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5876F3CF: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5876F3D3: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5876F3D5: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x5876F3D7: jne 0x5876f319
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x3C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876F3DD: mov ecx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F3E3: and ecx, 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0xFE
        // 0x5876F3E6: cmp ecx, 2
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5876F3E9: jne 0x5876f319
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876F3EF: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F3F4: ret
        __asm _emit 0xC3
        // 0x5876F3F5: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F3FB: mov eax, dword ptr [edx + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F401: mov eax, dword ptr [eax + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F407: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5876F40B: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x5876F40F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x5876F412: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876F414: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x5876F417: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x5876F41A: ret
        __asm _emit 0xC3
        // 0x5876F41B: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5876F41E: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876F423: mov ecx, dword ptr [edx + 0x82c]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0x2C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F429: mov edx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F42F: mov eax, dword ptr [edx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F435: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x5876F439: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5876F43D: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5876F43F: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x5876F441: jne 0x5876f319
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xD2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876F447: cmp byte ptr [ecx + 0x60], 0
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x5876F44B: je 0x5876f319
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876F451: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876F456: ret
        __asm _emit 0xC3
    }
}
