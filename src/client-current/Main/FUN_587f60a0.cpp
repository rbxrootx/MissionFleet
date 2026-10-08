// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 482 bytes in 3 exact ranges.
// Source symbol alias: FUN_587f60a0.

// Ghidra body range 0x587F60A0..0x587F610D; 109 mapped bytes.
extern "C" __declspec(naked) void FUN_587f60a0_segment_00() {
    __asm {
        // 0x587F60A0: sub esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x3C
        // 0x587F60A3: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587F60A8: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587F60AA: mov dword ptr [esp + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F60AE: push ebx
        __asm _emit 0x53
        // 0x587F60AF: push ebp
        __asm _emit 0x55
        // 0x587F60B0: push esi
        __asm _emit 0x56
        // 0x587F60B1: push edi
        __asm _emit 0x57
        // 0x587F60B2: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587F60B4: mov eax, dword ptr [edi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F60BA: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F60C0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587F60C2: cmp byte ptr [ecx + 2], 0x6c
        __asm _emit 0x80
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x6C
        // 0x587F60C6: mov ebp, 2
        __asm _emit 0xBD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F60CB: sete dl
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC2
        // 0x587F60CE: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587F60D2: lea edx, [edx + edx + 3]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x12
        __asm _emit 0x03
        // 0x587F60D6: mov esi, edx
        __asm _emit 0x8B
        __asm _emit 0xF2
        // 0x587F60D8: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587F60DC: cmp dword ptr [edi + 0x21ce4], ebp
        __asm _emit 0x39
        __asm _emit 0xAF
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F60E2: je 0x587f60fa
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587F60E4: push 0x5899c504
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0xC5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F60E9: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F60EF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F60F2: push eax
        __asm _emit 0x50
        // 0x587F60F3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587F60F5: call 0x587f2a70
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xC9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F60FA: mov eax, dword ptr [edi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6100: mov ebx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x98
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6106: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587F6108: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587F610B: jmp 0x587f6110
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587F6110..0x587F622B; 283 mapped bytes.
extern "C" __declspec(naked) void FUN_587f60a0_segment_01() {
    __asm {
        // 0x587F6110: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587F6112: inc eax
        __asm _emit 0x40
        // 0x587F6113: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587F6115: jne 0x587f6110
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F6117: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587F6119: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x587F611B: jbe 0x587f6241
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6121: cmp byte ptr [ebx + esi - 1], 0x20
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x33
        __asm _emit 0xFF
        __asm _emit 0x20
        // 0x587F6126: jne 0x587f6241
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F612C: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x587F612E: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587F6132: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F6134: push ecx
        __asm _emit 0x51
        // 0x587F6135: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0x6B
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F613A: mov eax, dword ptr [0x58a0b454]
        __asm _emit 0xA1
        __asm _emit 0x54
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F613F: mov ecx, dword ptr [0x58a0b458]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x58
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6145: mov edx, dword ptr [0x58a0b450]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F614B: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F614F: mov eax, dword ptr [0x58a0b460]
        __asm _emit 0xA1
        __asm _emit 0x60
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6154: mov dword ptr [esp + 0x2c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587F6158: mov ecx, dword ptr [0x58a0b464]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x64
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F615E: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F6162: mov edx, dword ptr [0x58a0b45c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x5C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587F6168: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587F616C: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587F616E: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587F6172: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587F6175: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F6179: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x587F617C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587F6180: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587F6182: inc eax
        __asm _emit 0x40
        // 0x587F6183: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587F6185: jne 0x587f6180
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587F6187: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587F6189: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x587F618B: add eax, 0x31
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x31
        // 0x587F618E: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587F6190: push ebx
        __asm _emit 0x53
        // 0x587F6191: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0xB3
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x587F6196: push ebx
        __asm _emit 0x53
        // 0x587F6197: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587F6199: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F619B: push ebp
        __asm _emit 0x55
        // 0x587F619C: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x6A
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F61A1: mov ecx, 0xc
        __asm _emit 0xB9
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F61A6: lea esi, [esp + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587F61AA: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x587F61AC: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587F61AE: mov esi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587F61B2: mov eax, dword ptr [esi + 0x20d30]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F61B8: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F61BE: add ecx, dword ptr [esp + 0x20]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587F61C2: lea edx, [ebx - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x53
        __asm _emit 0xD0
        // 0x587F61C5: push edx
        __asm _emit 0x52
        // 0x587F61C6: push ecx
        __asm _emit 0x51
        // 0x587F61C7: lea edx, [ebp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x55
        __asm _emit 0x30
        // 0x587F61CA: push edx
        __asm _emit 0x52
        // 0x587F61CB: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x6B
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F61D0: mov ecx, dword ptr [0x58a2458c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x8C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F61D6: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587F61D9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F61DB: push ebx
        __asm _emit 0x53
        // 0x587F61DC: push ebp
        __asm _emit 0x55
        // 0x587F61DD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587F61DF: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F61E1: call 0x587b8110
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0x1F
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587F61E6: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F61EB: mov ecx, 8
        __asm _emit 0xB9
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F61F0: push 0x5899a274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xA2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F61F5: mov dword ptr [eax + 0x20d24], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F61FF: mov word ptr [eax + 0x20d20], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6206: mov dword ptr [eax + 0x21ce4], 2
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6210: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F6216: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F6219: push eax
        __asm _emit 0x50
        // 0x587F621A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F621C: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587F621E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587F6220: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x80
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6225: push ebp
        __asm _emit 0x55
        // 0x587F6226: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x6A
        __asm _emit 0x18
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587F6241..0x587F629B; 90 mapped bytes.
extern "C" __declspec(naked) void FUN_587f60a0_segment_02() {
    __asm {
        // 0x587F6241: mov bl, byte ptr [ebx + esi - 1]
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587F6245: cmp bl, 0x20
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x20
        // 0x587F6248: je 0x587f624e
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587F624A: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x587F624C: jne 0x587f6288
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x587F624E: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587F6253: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6258: push 0x5899a274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xA2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587F625D: mov dword ptr [eax + 0x20d24], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F6267: mov word ptr [eax + 0x20d20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F626E: mov dword ptr [eax + 0x21ce4], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0xE4
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F6274: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587F627A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587F627D: push eax
        __asm _emit 0x50
        // 0x587F627E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587F6280: push ebp
        __asm _emit 0x55
        // 0x587F6281: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587F6283: call 0x587ee240
        __asm _emit 0xE8
        __asm _emit 0xB8
        __asm _emit 0x7F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F6288: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x587F628C: pop edi
        __asm _emit 0x5F
        // 0x587F628D: pop esi
        __asm _emit 0x5E
        // 0x587F628E: pop ebp
        __asm _emit 0x5D
        // 0x587F628F: pop ebx
        __asm _emit 0x5B
        // 0x587F6290: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587F6292: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x69
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587F6297: add esp, 0x3c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x3C
        // 0x587F629A: ret
        __asm _emit 0xC3
    }
}
