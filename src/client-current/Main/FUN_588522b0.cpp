// Complete Ghidra body ranges; intervening unowned gaps are excluded.
// Total body size: 2583 bytes across one range.

// Ghidra range: 0x588522B0 .. +0xA17 bytes.
extern "C" __declspec(naked) void FUN_588522b0_segment_00() {
    __asm {
        // 0x588522B0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588522B2: push 0x5898529c
        __asm _emit 0x68
        __asm _emit 0x9C
        __asm _emit 0x52
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588522B7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588522BD: push eax
        __asm _emit 0x50
        // 0x588522BE: push ecx
        __asm _emit 0x51
        // 0x588522BF: push ebx
        __asm _emit 0x53
        // 0x588522C0: push ebp
        __asm _emit 0x55
        // 0x588522C1: push esi
        __asm _emit 0x56
        // 0x588522C2: push edi
        __asm _emit 0x57
        // 0x588522C3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588522C8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588522CA: push eax
        __asm _emit 0x50
        // 0x588522CB: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588522CF: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588522D5: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x588522D7: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588522DB: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588522DF: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588522E3: mov edx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588522E7: mov esi, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588522EB: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588522EF: push eax
        __asm _emit 0x50
        // 0x588522F0: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588522F4: push ecx
        __asm _emit 0x51
        // 0x588522F5: push edx
        __asm _emit 0x52
        // 0x588522F6: push esi
        __asm _emit 0x56
        // 0x588522F7: push edi
        __asm _emit 0x57
        // 0x588522F8: push eax
        __asm _emit 0x50
        // 0x588522F9: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588522FB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x0E
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852300: mov dword ptr [ebx], 0x5898c500
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58852306: or word ptr [ebx + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4B
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5885230B: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5885230D: mov dword ptr [ebx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x50
        // 0x58852310: mov dword ptr [ebx + 0x54], esi
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0x54
        // 0x58852313: mov dword ptr [ebx + 0x58], 0x100
        __asm _emit 0xC7
        __asm _emit 0x43
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885231A: mov dword ptr [ebx + 0x5c], ebp
        __asm _emit 0x89
        __asm _emit 0x6B
        __asm _emit 0x5C
        // 0x5885231D: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852322: mov dword ptr [esp + 0x24], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58852326: mov dword ptr [ebx], 0x5899e8e0
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0xE0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5885232C: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0xA9
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58852331: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58852334: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58852338: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x5885233D: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5885233F: je 0x58852352
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58852341: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58852343: push ebp
        __asm _emit 0x55
        // 0x58852344: push 0x5899e8fc
        __asm _emit 0x68
        __asm _emit 0xFC
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58852349: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5885234B: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x1A
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x58852350: jmp 0x58852354
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852352: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58852354: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58852359: mov dword ptr [ebx + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x5885235C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58852360: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58852362: je 0x58852410
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852368: cmp ebp, 6
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x06
        // 0x5885236B: je 0x58852410
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852371: cmp ebp, 8
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x08
        // 0x58852374: je 0x58852410
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885237A: cmp ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0A
        // 0x5885237D: je 0x58852410
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852383: cmp ebp, 0xc
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0C
        // 0x58852386: je 0x58852410
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885238C: cmp ebp, 1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x01
        // 0x5885238F: je 0x588523fe
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x58852391: cmp ebp, 4
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x04
        // 0x58852394: je 0x588523fe
        __asm _emit 0x74
        __asm _emit 0x68
        // 0x58852396: cmp ebp, 7
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x07
        // 0x58852399: je 0x588523fe
        __asm _emit 0x74
        __asm _emit 0x63
        // 0x5885239B: cmp ebp, 9
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x09
        // 0x5885239E: je 0x588523fe
        __asm _emit 0x74
        __asm _emit 0x5E
        // 0x588523A0: cmp ebp, 0xb
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0B
        // 0x588523A3: je 0x588523fe
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x588523A5: cmp ebp, 0xd
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0D
        // 0x588523A8: je 0x588523fe
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x588523AA: cmp ebp, 2
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x02
        // 0x588523AD: jne 0x588523bd
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588523AF: mov dword ptr [esp + 0x34], 0xa
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588523B7: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588523BB: jmp 0x58852420
        __asm _emit 0xEB
        __asm _emit 0x63
        // 0x588523BD: cmp ebp, 3
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x03
        // 0x588523C0: jne 0x588523d0
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588523C2: mov dword ptr [esp + 0x34], 0xd
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588523CA: mov dword ptr [esp + 0x38], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588523CE: jmp 0x58852420
        __asm _emit 0xEB
        __asm _emit 0x50
        // 0x588523D0: cmp ebp, 5
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x05
        // 0x588523D3: jne 0x588523e7
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588523D5: mov dword ptr [esp + 0x34], 0x10
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588523DD: mov dword ptr [esp + 0x38], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588523E5: jmp 0x58852420
        __asm _emit 0xEB
        __asm _emit 0x39
        // 0x588523E7: cmp ebp, 0xe
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0E
        // 0x588523EA: jne 0x58852420
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x588523EC: mov dword ptr [esp + 0x34], 0x13
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588523F4: mov dword ptr [esp + 0x38], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588523FC: jmp 0x58852420
        __asm _emit 0xEB
        __asm _emit 0x22
        // 0x588523FE: mov dword ptr [esp + 0x34], 7
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852406: mov dword ptr [esp + 0x38], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885240E: jmp 0x58852420
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x58852410: mov dword ptr [esp + 0x34], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852418: mov dword ptr [esp + 0x38], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852420: cmp ebp, 3
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x03
        // 0x58852423: mov dword ptr [esp + 0x3c], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885242B: jl 0x5885247f
        __asm _emit 0x7C
        __asm _emit 0x52
        // 0x5885242D: cmp ebp, 6
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x06
        // 0x58852430: jge 0x5885243c
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x58852432: mov dword ptr [esp + 0x3c], 0x3f
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x3F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885243A: jmp 0x5885247f
        __asm _emit 0xEB
        __asm _emit 0x43
        // 0x5885243C: cmp ebp, 8
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x08
        // 0x5885243F: jge 0x5885244b
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x58852441: mov dword ptr [esp + 0x3c], 0x6f
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x6F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852449: jmp 0x5885247f
        __asm _emit 0xEB
        __asm _emit 0x34
        // 0x5885244B: cmp ebp, 0xa
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0A
        // 0x5885244E: jge 0x5885245a
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x58852450: mov dword ptr [esp + 0x3c], 0x9f
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x9F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852458: jmp 0x5885247f
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x5885245A: cmp ebp, 0xc
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0C
        // 0x5885245D: jge 0x58852469
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x5885245F: mov dword ptr [esp + 0x3c], 0xcf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0xCF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852467: jmp 0x5885247f
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58852469: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5885246B: cmp ebp, 0xe
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0E
        // 0x5885246E: setge cl
        __asm _emit 0x0F
        __asm _emit 0x9D
        __asm _emit 0xC1
        // 0x58852471: dec ecx
        __asm _emit 0x49
        // 0x58852472: and ecx, 0xffffffdf
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0xDF
        // 0x58852475: add ecx, 0x120
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885247B: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5885247F: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58852481: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xA7
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58852486: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58852488: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5885248B: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5885248F: mov byte ptr [esp + 0x20], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x02
        // 0x58852494: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58852496: je 0x58852515
        __asm _emit 0x74
        __asm _emit 0x7D
        // 0x58852498: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5885249C: mov eax, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x5885249F: add edi, 0x22
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x22
        // 0x588524A2: cmp dword ptr [eax + 0x160], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588524A8: jle 0x588524bf
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x588524AA: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588524AC: jl 0x588524bf
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x588524AE: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588524B4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588524B6: je 0x588524bf
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588524B8: shl edi, 6
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x06
        // 0x588524BB: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x588524BD: jmp 0x588524c1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588524BF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588524C1: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588524C5: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588524C7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588524C9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588524CB: push edx
        __asm _emit 0x52
        // 0x588524CC: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588524D1: push ebx
        __asm _emit 0x53
        // 0x588524D2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588524D4: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x0C
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588524D9: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588524DF: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588524E6: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x588524E9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588524EB: je 0x58852517
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588524ED: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x588524F0: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588524F3: mov ecx, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x588524F6: lea eax, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x588524F9: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588524FC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588524FE: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x58852501: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58852504: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58852507: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5885250A: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5885250D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58852510: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58852513: jmp 0x58852517
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852515: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58852517: mov dword ptr [ebx + ebp*4 + 0x118], esi
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0xAB
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885251E: mov ecx, 0xfffb
        __asm _emit 0xB9
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852523: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58852527: mov eax, dword ptr [ebx + ebp*4 + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885252E: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852535: mov ecx, dword ptr [ebx + ebp*4 + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0xAB
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885253C: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852541: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58852546: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x07
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5885254B: mov edi, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5885254F: lea edx, [ebp + ebp*2]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x6D
        __asm _emit 0x00
        // 0x58852553: mov dword ptr [esp + 0x30], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58852557: shl edi, 6
        __asm _emit 0xC1
        __asm _emit 0xE7
        __asm _emit 0x06
        // 0x5885255A: lea esi, [ebx + edx*4 + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x93
        __asm _emit 0x64
        // 0x5885255E: mov dword ptr [esp + 0x2c], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852566: push 0xac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885256B: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xA6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58852570: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58852573: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58852577: mov byte ptr [esp + 0x20], 3
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x03
        // 0x5885257C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885257E: je 0x588525c8
        __asm _emit 0x74
        __asm _emit 0x48
        // 0x58852580: mov ecx, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x60
        // 0x58852583: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58852587: cmp dword ptr [ecx + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885258D: jle 0x588525a1
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5885258F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58852591: jl 0x588525a1
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x58852593: mov edx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852599: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885259B: je 0x588525a1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885259D: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x5885259F: jmp 0x588525a3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588525A1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588525A3: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588525A7: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588525A9: push ecx
        __asm _emit 0x51
        // 0x588525AA: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588525B0: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588525B5: push edx
        __asm _emit 0x52
        // 0x588525B6: mov edx, dword ptr [0x58a24798]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588525BC: push ebx
        __asm _emit 0x53
        // 0x588525BD: push edx
        __asm _emit 0x52
        // 0x588525BE: push ecx
        __asm _emit 0x51
        // 0x588525BF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588525C1: call 0x5875dda0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xB7
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588525C6: jmp 0x588525ca
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588525C8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588525CA: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588525CF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588525D1: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588525D6: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588525D8: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x07
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588525DD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588525DF: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588525E4: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588525E8: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588525ED: add dword ptr [esp + 0x30], eax
        __asm _emit 0x01
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588525F1: add edi, 0x40
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x40
        // 0x588525F4: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588525F7: sub dword ptr [esp + 0x2c], eax
        __asm _emit 0x29
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x588525FB: jne 0x58852566
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x65
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852601: inc ebp
        __asm _emit 0x45
        // 0x58852602: cmp ebp, 0xf
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x0F
        // 0x58852605: jl 0x58852360
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x55
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885260B: lea ebp, [eax + 0x15]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x15
        // 0x5885260E: lea eax, [ebx + 0x158]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852614: mov dword ptr [esp + 0x34], 0x154
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885261C: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58852620: mov dword ptr [esp + 0x38], 0x580
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x80
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852628: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x5885262A: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xA6
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5885262F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58852631: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58852634: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58852638: mov byte ptr [esp + 0x20], 4
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x04
        // 0x5885263D: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885263F: je 0x588526ba
        __asm _emit 0x74
        __asm _emit 0x79
        // 0x58852641: mov eax, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x58852644: lea ecx, [ebp + 1]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x01
        // 0x58852647: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885264D: jle 0x58852667
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x5885264F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58852651: jl 0x58852667
        __asm _emit 0x7C
        __asm _emit 0x14
        // 0x58852653: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852659: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885265B: je 0x58852667
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885265D: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58852661: lea edi, [eax + ecx + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x08
        __asm _emit 0x40
        // 0x58852665: jmp 0x58852669
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852667: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58852669: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5885266B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885266D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885266F: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x58852671: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852676: push ebx
        __asm _emit 0x53
        // 0x58852677: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58852679: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x0B
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x5885267E: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58852684: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885268B: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x5885268E: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58852690: je 0x588526bc
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58852692: mov edx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x18
        // 0x58852695: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58852698: mov eax, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x5885269B: add edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x20
        // 0x5885269E: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588526A1: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588526A3: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x588526A6: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588526A9: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x588526AC: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588526AF: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x588526B2: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588526B5: mov dword ptr [esi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x588526B8: jmp 0x588526bc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588526BA: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588526BC: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588526C0: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x588526C2: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588526C7: mov dword ptr [edx - 4], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0xFC
        // 0x588526CA: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xA5
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x588526CF: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588526D1: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588526D4: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x588526D8: mov byte ptr [esp + 0x20], 5
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x05
        // 0x588526DD: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588526DF: je 0x58852755
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x588526E1: mov eax, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x588526E4: cmp dword ptr [eax + 0x160], ebp
        __asm _emit 0x39
        __asm _emit 0xA8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588526EA: jle 0x58852702
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x588526EC: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x588526EE: jl 0x58852702
        __asm _emit 0x7C
        __asm _emit 0x12
        // 0x588526F0: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588526F6: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588526F8: je 0x58852702
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588526FA: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588526FE: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x58852700: jmp 0x58852704
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852702: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58852704: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58852706: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852708: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885270A: push 0xf
        __asm _emit 0x6A
        __asm _emit 0x0F
        // 0x5885270C: push 0x258
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852711: push ebx
        __asm _emit 0x53
        // 0x58852712: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58852714: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x0A
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852719: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885271F: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852726: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x58852729: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885272B: je 0x58852757
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5885272D: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58852730: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58852733: mov edx, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x58852736: add edi, 0x20
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x20
        // 0x58852739: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x5885273C: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5885273E: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58852741: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x58852744: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58852747: mov edx, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x5885274A: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5885274D: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58852750: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58852753: jmp 0x58852757
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852755: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58852757: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5885275B: mov dword ptr [ecx], esi
        __asm _emit 0x89
        __asm _emit 0x31
        // 0x5885275D: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58852762: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58852764: lea edx, [esi + ebp + 0x3f]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x2E
        __asm _emit 0x3F
        // 0x58852768: mov eax, dword ptr [ebx + edx*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x93
        // 0x5885276B: lea ecx, [ebx + edx*4]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x93
        // 0x5885276E: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852773: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58852777: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58852779: jne 0x58852789
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5885277B: mov eax, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5885277F: mov ecx, dword ptr [eax + ebx]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x18
        // 0x58852782: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852787: jmp 0x58852790
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58852789: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x5885278B: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852790: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x05
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852795: inc esi
        __asm _emit 0x46
        // 0x58852796: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x58852799: jl 0x58852764
        __asm _emit 0x7C
        __asm _emit 0xC9
        // 0x5885279B: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5885279F: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588527A4: add dword ptr [esp + 0x3c], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588527A8: add dword ptr [esp + 0x34], ecx
        __asm _emit 0x01
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588527AC: sub eax, -0x80
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x80
        // 0x588527AF: add ebp, 2
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x02
        // 0x588527B2: cmp eax, 0x880
        __asm _emit 0x3D
        __asm _emit 0x80
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588527B7: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x588527BB: jl 0x58852628
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x67
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588527C1: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588527C6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x83
        __asm _emit 0xA4
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x588527CB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588527CE: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588527D2: mov byte ptr [esp + 0x20], 6
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x06
        // 0x588527D7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588527D9: je 0x588527f0
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588527DB: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588527DD: push 0x26
        __asm _emit 0x6A
        __asm _emit 0x26
        // 0x588527DF: push 0x173
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588527E4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588527E6: push ebx
        __asm _emit 0x53
        // 0x588527E7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588527E9: call 0x587b66e0
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x3E
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x588527EE: jmp 0x588527f2
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588527F0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588527F2: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x588527F4: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588527F9: mov dword ptr [ebx + 0x184], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588527FF: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xA4
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58852804: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58852806: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58852809: mov dword ptr [esp + 0x3c], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5885280D: mov byte ptr [esp + 0x20], 7
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x07
        // 0x58852812: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58852814: je 0x58852840
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58852816: mov eax, dword ptr [ebx + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885281C: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5885281E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852820: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852822: push 0x26
        __asm _emit 0x6A
        __asm _emit 0x26
        // 0x58852824: push 0x173
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852829: push eax
        __asm _emit 0x50
        // 0x5885282A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885282C: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x09
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852831: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58852837: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885283E: jmp 0x58852842
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852840: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58852842: lea ecx, [ebx + 0x18c]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852848: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5885284D: mov dword ptr [ebx + 0x188], esi
        __asm _emit 0x89
        __asm _emit 0xB3
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852853: mov dword ptr [esp + 0x38], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885285B: mov dword ptr [esp + 0x3c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5885285F: mov ebp, 4
        __asm _emit 0xBD
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852864: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58852866: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xA3
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5885286B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885286D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58852870: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58852874: mov byte ptr [esp + 0x20], 8
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x08
        // 0x58852879: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885287B: je 0x588528f5
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852881: mov eax, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x58852884: mov ecx, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58852888: cmp dword ptr [eax + 0x164], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885288E: jle 0x588528a3
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x58852890: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58852892: jl 0x588528a3
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x58852894: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885289A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885289C: je 0x588528a3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5885289E: mov edi, dword ptr [eax + ebp]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x28
        // 0x588528A1: jmp 0x588528a5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588528A3: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588528A5: mov eax, dword ptr [ebx + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588528AB: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588528AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588528AF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588528B1: push 0x26
        __asm _emit 0x6A
        __asm _emit 0x26
        // 0x588528B3: push 0x173
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588528B8: push eax
        __asm _emit 0x50
        // 0x588528B9: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588528BB: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x08
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588528C0: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588528C6: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x588528C9: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588528CB: je 0x588528f7
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x588528CD: mov edx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x10
        // 0x588528D0: mov dword ptr [esi + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x588528D3: mov eax, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x14
        // 0x588528D6: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x18
        // 0x588528D9: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x588528DC: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588528DE: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x588528E1: mov edx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x04
        // 0x588528E4: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x588528E7: mov eax, dword ptr [edi + 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x588528EA: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x588528ED: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x588528F0: mov dword ptr [esi + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x20
        // 0x588528F3: jmp 0x588528f7
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588528F5: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588528F7: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588528FB: mov dword ptr [edx], esi
        __asm _emit 0x89
        __asm _emit 0x32
        // 0x588528FD: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58852900: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852905: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5885290A: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5885290E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58852910: je 0x58852918
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58852912: push esi
        __asm _emit 0x56
        // 0x58852913: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852918: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5885291B: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885291D: je 0x58852925
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5885291F: push esi
        __asm _emit 0x56
        // 0x58852920: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852925: add dword ptr [esp + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x5885292A: dec dword ptr [esp + 0x38]
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5885292E: sub ebp, 4
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x04
        // 0x58852931: cmp ebp, -4
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0xFC
        // 0x58852934: jg 0x58852864
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x2A
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885293A: mov dword ptr [esp + 0x3c], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852942: lea ebp, [ebx + 0x1a0]
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852948: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5885294A: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5885294E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58852950: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58852952: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xA2
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58852957: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58852959: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5885295C: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58852960: mov byte ptr [esp + 0x20], 9
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x09
        // 0x58852965: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58852967: je 0x58852993
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58852969: mov eax, dword ptr [ebx + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885296F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58852971: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852973: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852975: push 0x26
        __asm _emit 0x6A
        __asm _emit 0x26
        // 0x58852977: push 0x173
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885297C: push eax
        __asm _emit 0x50
        // 0x5885297D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5885297F: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x08
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852984: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5885298A: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852991: jmp 0x58852995
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852993: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58852995: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58852997: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5885299C: mov dword ptr [ebp - 4], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x5885299F: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xA2
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x588529A4: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x588529A6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588529A9: mov dword ptr [esp + 0x34], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x588529AD: mov byte ptr [esp + 0x20], 0xa
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0A
        // 0x588529B2: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588529B4: je 0x58852a36
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588529BA: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x588529BE: mov ecx, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x60
        // 0x588529C1: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x588529C3: cmp dword ptr [ecx + 0x164], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588529C9: jle 0x588529de
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588529CB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588529CD: jl 0x588529de
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588529CF: mov ecx, dword ptr [ecx + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588529D5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588529D7: je 0x588529de
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588529D9: mov edi, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x81
        // 0x588529DC: jmp 0x588529e0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588529DE: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588529E0: mov eax, dword ptr [ebx + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588529E6: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588529E8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588529EA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588529EC: push 0x26
        __asm _emit 0x6A
        __asm _emit 0x26
        // 0x588529EE: push 0x173
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588529F3: push eax
        __asm _emit 0x50
        // 0x588529F4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588529F6: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x07
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588529FB: mov dword ptr [esi], 0x5898c55c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x5C
        __asm _emit 0xC5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58852A01: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x58852A04: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58852A06: je 0x58852a2e
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58852A08: mov ecx, dword ptr [edi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58852A0B: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58852A0E: mov edx, dword ptr [edi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x14
        // 0x58852A11: lea eax, [edi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58852A14: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x58852A17: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58852A19: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58852A1C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58852A1F: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x58852A22: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58852A25: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x58852A28: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58852A2B: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x58852A2E: mov edi, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58852A32: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58852A34: jmp 0x58852a38
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852A36: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58852A38: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852A3D: mov byte ptr [esp + 0x24], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58852A42: mov dword ptr [ebp], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58852A45: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x02
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852A4A: mov esi, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x00
        // 0x58852A4D: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x58852A50: mov eax, 0xc8
        __asm _emit 0xB8
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852A55: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58852A59: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58852A5B: je 0x58852a63
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58852A5D: push esi
        __asm _emit 0x56
        // 0x58852A5E: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x04
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852A63: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58852A66: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58852A68: je 0x58852a70
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58852A6A: push esi
        __asm _emit 0x56
        // 0x58852A6B: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852A70: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58852A73: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852A78: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58852A7C: inc edi
        __asm _emit 0x47
        // 0x58852A7D: cmp edi, 2
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58852A80: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58852A84: jl 0x58852950
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xC6
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852A8A: mov eax, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58852A8E: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58852A91: add ebp, 8
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x08
        // 0x58852A94: cmp eax, 0x22
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x22
        // 0x58852A97: mov dword ptr [esp + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58852A9B: jl 0x58852948
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0xA7
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852AA1: lea eax, [ebx + 0x214]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852AA7: mov dword ptr [esp + 0x34], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852AAF: nop
        __asm _emit 0x90
        // 0x58852AB0: mov dword ptr [esp + 0x3c], 3
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852AB8: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58852ABC: mov ebp, 0xc0
        __asm _emit 0xBD
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852AC1: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58852AC3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0xA1
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58852AC8: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58852ACA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58852ACD: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58852AD1: mov byte ptr [esp + 0x20], 0xb
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0B
        // 0x58852AD6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58852AD8: je 0x58852b4f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852ADE: mov eax, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x58852AE1: mov edx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58852AE5: cmp dword ptr [eax + 0x160], edx
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852AEB: jle 0x58852aff
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58852AED: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58852AEF: jl 0x58852aff
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x58852AF1: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852AF7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58852AF9: je 0x58852aff
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58852AFB: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x58852AFD: jmp 0x58852b01
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852AFF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58852B01: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58852B03: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852B05: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852B07: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852B09: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852B0B: push ebx
        __asm _emit 0x53
        // 0x58852B0C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58852B0E: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0x06
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852B13: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58852B19: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852B20: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x58852B23: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58852B25: je 0x58852b51
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58852B27: mov eax, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x18
        // 0x58852B2A: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58852B2D: mov ecx, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x1C
        // 0x58852B30: lea eax, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x58852B33: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58852B36: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58852B38: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x58852B3B: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58852B3E: mov dword ptr [esi + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58852B41: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58852B44: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x58852B47: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58852B4A: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58852B4D: jmp 0x58852b51
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852B4F: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58852B51: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58852B55: dec dword ptr [esp + 0x3c]
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58852B59: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58852B5B: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58852B5E: sub ebp, 0x40
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x40
        // 0x58852B61: cmp ebp, 0x40
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x40
        // 0x58852B64: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58852B69: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58852B6D: jg 0x58852ac1
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852B73: sub dword ptr [esp + 0x34], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x01
        // 0x58852B78: jne 0x58852ab0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x32
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852B7E: lea eax, [ebx + 0x244]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852B84: mov dword ptr [esp + 0x34], 6
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852B8C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58852B90: mov dword ptr [esp + 0x3c], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852B98: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58852B9C: mov ebp, 0x40
        __asm _emit 0xBD
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852BA1: push 0x58
        __asm _emit 0x6A
        __asm _emit 0x58
        // 0x58852BA3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xA0
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x58852BA8: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58852BAA: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58852BAD: mov dword ptr [esp + 0x30], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58852BB1: mov byte ptr [esp + 0x20], 0xc
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x0C
        // 0x58852BB6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58852BB8: je 0x58852c2f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852BBE: mov eax, dword ptr [ebx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x60
        // 0x58852BC1: mov ecx, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58852BC5: cmp dword ptr [eax + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x88
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852BCB: jle 0x58852bdf
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58852BCD: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58852BCF: jl 0x58852bdf
        __asm _emit 0x7C
        __asm _emit 0x0E
        // 0x58852BD1: mov edi, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852BD7: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58852BD9: je 0x58852bdf
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58852BDB: add edi, ebp
        __asm _emit 0x03
        __asm _emit 0xFD
        // 0x58852BDD: jmp 0x58852be1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852BDF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58852BE1: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58852BE3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852BE5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852BE7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852BE9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58852BEB: push ebx
        __asm _emit 0x53
        // 0x58852BEC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58852BEE: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x05
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x58852BF3: mov dword ptr [esi], 0x5898ca74
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x74
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58852BF9: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852C00: mov dword ptr [esi + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x54
        // 0x58852C03: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58852C05: je 0x58852c31
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x58852C07: mov ecx, dword ptr [edi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x18
        // 0x58852C0A: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58852C0D: mov edx, dword ptr [edi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x1C
        // 0x58852C10: lea eax, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x58852C13: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x58852C16: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58852C18: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58852C1B: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58852C1E: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x58852C21: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58852C24: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x58852C27: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58852C2A: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x58852C2D: jmp 0x58852c31
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58852C2F: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58852C31: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58852C35: dec dword ptr [esp + 0x3c]
        __asm _emit 0xFF
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x58852C39: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58852C3B: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58852C3E: sub ebp, 0x40
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x40
        // 0x58852C41: cmp ebp, -0x40
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0xC0
        // 0x58852C44: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58852C49: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58852C4D: jg 0x58852ba1
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x4E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852C53: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852C58: sub dword ptr [esp + 0x34], ecx
        __asm _emit 0x29
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x58852C5C: jne 0x58852b90
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58852C62: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58852C65: or edx, eax
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x58852C67: mov word ptr [ebx + 0x274], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852C6E: mov ax, word ptr [ebx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x58852C72: mov dword ptr [ebx + 0x278], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852C78: mov ecx, 0xe5ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852C7D: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58852C80: mov word ptr [ebx + 0x276], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x76
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852C87: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852C8C: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58852C8F: mov word ptr [ebx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x24
        // 0x58852C93: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58852C95: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852C9A: and word ptr [ebx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4B
        __asm _emit 0x24
        // 0x58852C9E: mov word ptr [ebx + 0x280], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852CA5: mov dword ptr [ebx + 0x27c], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852CAF: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x58852CB1: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58852CB5: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58852CBC: pop ecx
        __asm _emit 0x59
        // 0x58852CBD: pop edi
        __asm _emit 0x5F
        // 0x58852CBE: pop esi
        __asm _emit 0x5E
        // 0x58852CBF: pop ebp
        __asm _emit 0x5D
        // 0x58852CC0: pop ebx
        __asm _emit 0x5B
        // 0x58852CC1: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58852CC4: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
