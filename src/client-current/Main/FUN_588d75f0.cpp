// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1477 bytes in 3 discontiguous ranges.
// Source symbol alias: FUN_588d75f0.

// Ghidra body range 0x588D75F0..0x588D76BA; 202 mapped bytes.
extern "C" __declspec(naked) void FUN_588d75f0_segment_00() {
    __asm {
        // 0x588D75F0: push ecx
        __asm _emit 0x51
        // 0x588D75F1: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588D75F5: push ebx
        __asm _emit 0x53
        // 0x588D75F6: push ebp
        __asm _emit 0x55
        // 0x588D75F7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D75F9: push esi
        __asm _emit 0x56
        // 0x588D75FA: push edi
        __asm _emit 0x57
        // 0x588D75FB: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D75FF: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588D7602: je 0x588d7a91
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7608: cmp edx, 7
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x588D760B: je 0x588d7a91
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7611: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588D7614: je 0x588d7951
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D761A: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D761D: je 0x588d7951
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x2E
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7623: cmp edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x14
        // 0x588D7626: jne 0x588d779c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D762C: mov edx, dword ptr [ecx + 0x60a8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7632: cmp edx, 0x40000000
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D7638: jne 0x588d7687
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x588D763A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D763C: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7642: jle 0x588d7674
        __asm _emit 0x7E
        __asm _emit 0x30
        // 0x588D7644: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D7648: lea edi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D764E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588D7650: movzx esi, byte ptr [ecx + edx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB4
        __asm _emit 0x11
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7658: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588D765A: jne 0x588d7668
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588D765C: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588D765E: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D7660: je 0x588d7668
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D7662: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7668: inc edx
        __asm _emit 0x42
        // 0x588D7669: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D766C: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7672: jl 0x588d7650
        __asm _emit 0x7C
        __asm _emit 0xDC
        // 0x588D7674: pop edi
        __asm _emit 0x5F
        // 0x588D7675: pop esi
        __asm _emit 0x5E
        // 0x588D7676: pop ebp
        __asm _emit 0x5D
        // 0x588D7677: mov dword ptr [ecx + 0x60a8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D767D: mov ax, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D7682: pop ebx
        __asm _emit 0x5B
        // 0x588D7683: pop ecx
        __asm _emit 0x59
        // 0x588D7684: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D7687: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588D7689: jne 0x588d7bb7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D768F: movzx edx, word ptr [ecx + 0x60ba]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7696: mov bl, dl
        __asm _emit 0x8A
        __asm _emit 0xDA
        // 0x588D7698: and bl, 0x30
        __asm _emit 0x80
        __asm _emit 0xE3
        __asm _emit 0x30
        // 0x588D769B: cmp bl, 0x30
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x30
        // 0x588D769E: jne 0x588d76f1
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x588D76A0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D76A2: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D76A8: jle 0x588d7bb7
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x09
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D76AE: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D76B2: lea edi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D76B8: jmp 0x588d76c0
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x588D76C0..0x588D78E7; 551 mapped bytes.
extern "C" __declspec(naked) void FUN_588d75f0_segment_01() {
    __asm {
        // 0x588D76C0: movzx esi, byte ptr [ecx + edx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB4
        __asm _emit 0x11
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D76C8: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588D76CA: jne 0x588d76d8
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588D76CC: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588D76CE: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D76D0: je 0x588d76d8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D76D2: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D76D8: inc edx
        __asm _emit 0x42
        // 0x588D76D9: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D76DC: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D76E2: jl 0x588d76c0
        __asm _emit 0x7C
        __asm _emit 0xDC
        // 0x588D76E4: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D76E9: pop edi
        __asm _emit 0x5F
        // 0x588D76EA: pop esi
        __asm _emit 0x5E
        // 0x588D76EB: pop ebp
        __asm _emit 0x5D
        // 0x588D76EC: pop ebx
        __asm _emit 0x5B
        // 0x588D76ED: pop ecx
        __asm _emit 0x59
        // 0x588D76EE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D76F1: test dl, 0x10
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x588D76F4: je 0x588d774a
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x588D76F6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D76F8: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D76FE: jle 0x588d7bb7
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xB3
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7704: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D7708: lea edi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D770E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588D7710: cmp byte ptr [ecx + edx + 0x21c], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7717: jne 0x588d7731
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588D7719: movzx esi, byte ptr [edx + ecx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB4
        __asm _emit 0x0A
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7721: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588D7723: jne 0x588d7731
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588D7725: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588D7727: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D7729: je 0x588d7731
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D772B: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7731: inc edx
        __asm _emit 0x42
        // 0x588D7732: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D7735: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D773B: jl 0x588d7710
        __asm _emit 0x7C
        __asm _emit 0xD3
        // 0x588D773D: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D7742: pop edi
        __asm _emit 0x5F
        // 0x588D7743: pop esi
        __asm _emit 0x5E
        // 0x588D7744: pop ebp
        __asm _emit 0x5D
        // 0x588D7745: pop ebx
        __asm _emit 0x5B
        // 0x588D7746: pop ecx
        __asm _emit 0x59
        // 0x588D7747: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D774A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D774C: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7752: jle 0x588d7bb7
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x5F
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7758: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D775C: lea edi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7762: cmp byte ptr [ecx + edx + 0x21c], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7769: je 0x588d7783
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588D776B: movzx esi, byte ptr [edx + ecx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB4
        __asm _emit 0x0A
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7773: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588D7775: jne 0x588d7783
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588D7777: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588D7779: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D777B: je 0x588d7783
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D777D: mov dword ptr [esi + 0x108], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7783: inc edx
        __asm _emit 0x42
        // 0x588D7784: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D7787: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D778D: jl 0x588d7762
        __asm _emit 0x7C
        __asm _emit 0xD3
        // 0x588D778F: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D7794: pop edi
        __asm _emit 0x5F
        // 0x588D7795: pop esi
        __asm _emit 0x5E
        // 0x588D7796: pop ebp
        __asm _emit 0x5D
        // 0x588D7797: pop ebx
        __asm _emit 0x5B
        // 0x588D7798: pop ecx
        __asm _emit 0x59
        // 0x588D7799: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D779C: cmp edx, 0x15
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x15
        // 0x588D779F: jne 0x588d78ac
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D77A5: movzx edx, word ptr [ecx + 0x60ba]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D77AC: mov bl, dl
        __asm _emit 0x8A
        __asm _emit 0xDA
        // 0x588D77AE: and bl, 0x30
        __asm _emit 0x80
        __asm _emit 0xE3
        __asm _emit 0x30
        // 0x588D77B1: cmp bl, 0x30
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x30
        // 0x588D77B4: jne 0x588d7801
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x588D77B6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D77B8: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D77BE: jle 0x588d7bb7
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D77C4: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D77C8: lea edi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D77CE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588D77D0: movzx esi, byte ptr [ecx + edx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB4
        __asm _emit 0x11
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D77D8: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588D77DA: jne 0x588d77e8
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588D77DC: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588D77DE: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D77E0: je 0x588d77e8
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D77E2: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D77E8: inc edx
        __asm _emit 0x42
        // 0x588D77E9: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D77EC: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D77F2: jl 0x588d77d0
        __asm _emit 0x7C
        __asm _emit 0xDC
        // 0x588D77F4: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D77F9: pop edi
        __asm _emit 0x5F
        // 0x588D77FA: pop esi
        __asm _emit 0x5E
        // 0x588D77FB: pop ebp
        __asm _emit 0x5D
        // 0x588D77FC: pop ebx
        __asm _emit 0x5B
        // 0x588D77FD: pop ecx
        __asm _emit 0x59
        // 0x588D77FE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D7801: test dl, 0x10
        __asm _emit 0xF6
        __asm _emit 0xC2
        __asm _emit 0x10
        // 0x588D7804: je 0x588d785a
        __asm _emit 0x74
        __asm _emit 0x54
        // 0x588D7806: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D7808: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D780E: jle 0x588d7bb7
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7814: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D7818: lea edi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D781E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588D7820: cmp byte ptr [ecx + edx + 0x21c], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7827: jne 0x588d7841
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x588D7829: movzx esi, byte ptr [edx + ecx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB4
        __asm _emit 0x0A
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7831: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588D7833: jne 0x588d7841
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588D7835: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588D7837: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D7839: je 0x588d7841
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D783B: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7841: inc edx
        __asm _emit 0x42
        // 0x588D7842: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D7845: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D784B: jl 0x588d7820
        __asm _emit 0x7C
        __asm _emit 0xD3
        // 0x588D784D: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D7852: pop edi
        __asm _emit 0x5F
        // 0x588D7853: pop esi
        __asm _emit 0x5E
        // 0x588D7854: pop ebp
        __asm _emit 0x5D
        // 0x588D7855: pop ebx
        __asm _emit 0x5B
        // 0x588D7856: pop ecx
        __asm _emit 0x59
        // 0x588D7857: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D785A: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D785C: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7862: jle 0x588d7bb7
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x4F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7868: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D786C: lea edi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7872: cmp byte ptr [ecx + edx + 0x21c], al
        __asm _emit 0x38
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7879: je 0x588d7893
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x588D787B: movzx esi, byte ptr [edx + ecx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xB4
        __asm _emit 0x0A
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7883: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x588D7885: jne 0x588d7893
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588D7887: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x588D7889: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588D788B: je 0x588d7893
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588D788D: mov dword ptr [esi + 0x10c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7893: inc edx
        __asm _emit 0x42
        // 0x588D7894: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588D7897: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D789D: jl 0x588d7872
        __asm _emit 0x7C
        __asm _emit 0xD3
        // 0x588D789F: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D78A4: pop edi
        __asm _emit 0x5F
        // 0x588D78A5: pop esi
        __asm _emit 0x5E
        // 0x588D78A6: pop ebp
        __asm _emit 0x5D
        // 0x588D78A7: pop ebx
        __asm _emit 0x5B
        // 0x588D78A8: pop ecx
        __asm _emit 0x59
        // 0x588D78A9: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D78AC: cmp edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x588D78AF: je 0x588d78ba
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588D78B1: cmp edx, 0xb
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x588D78B4: jne 0x588d7bb7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFD
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D78BA: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D78BF: cmp edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x588D78C2: je 0x588d78cc
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588D78C4: cmp edx, 0xb
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0B
        // 0x588D78C7: jne 0x588d78cc
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588D78C9: or edi, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCF
        __asm _emit 0xFF
        // 0x588D78CC: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D78CE: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D78D4: jle 0x588d7935
        __asm _emit 0x7E
        __asm _emit 0x5F
        // 0x588D78D6: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D78DA: lea esi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D78E0: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D78E5: jmp 0x588d78f0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x588D78F0..0x588D7BC4; 724 mapped bytes.
extern "C" __declspec(naked) void FUN_588d75f0_segment_02() {
    __asm {
        // 0x588D78F0: movzx eax, byte ptr [ecx + edx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D78F8: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x588D78FA: jne 0x588d7929
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x588D78FC: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588D78FE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D7900: je 0x588d7929
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x588D7902: cmp byte ptr [edx + ecx + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x0A
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D790A: je 0x588d791d
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588D790C: mov ebx, edi
        __asm _emit 0x8B
        __asm _emit 0xDF
        // 0x588D790E: neg ebx
        __asm _emit 0xF7
        __asm _emit 0xDB
        // 0x588D7910: mov dword ptr [eax + 0x124], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7916: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D791B: jmp 0x588d7923
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x588D791D: mov dword ptr [eax + 0x124], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7923: mov dword ptr [eax + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7929: inc edx
        __asm _emit 0x42
        // 0x588D792A: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D792D: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7933: jl 0x588d78f0
        __asm _emit 0x7C
        __asm _emit 0xBB
        // 0x588D7935: mov cl, byte ptr [ecx + 0x60ac]
        __asm _emit 0x8A
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D793B: or cl, 1
        __asm _emit 0x80
        __asm _emit 0xC9
        __asm _emit 0x01
        // 0x588D793E: movzx dx, cl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD1
        // 0x588D7942: pop edi
        __asm _emit 0x5F
        // 0x588D7943: pop esi
        __asm _emit 0x5E
        // 0x588D7944: movzx eax, dx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC2
        // 0x588D7947: pop ebp
        __asm _emit 0x5D
        // 0x588D7948: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D794C: pop ebx
        __asm _emit 0x5B
        // 0x588D794D: pop ecx
        __asm _emit 0x59
        // 0x588D794E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D7951: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x588D7954: cmp edx, 4
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x588D7957: jne 0x588d795e
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x588D7959: lea ebp, [edx - 3]
        __asm _emit 0x8D
        __asm _emit 0x6A
        __asm _emit 0xFD
        // 0x588D795C: jmp 0x588d7966
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588D795E: cmp edx, 5
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x588D7961: jne 0x588d7966
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588D7963: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x588D7966: movzx eax, word ptr [ecx + 0x60ba]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D796D: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x588D796F: and dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x30
        // 0x588D7972: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x30
        // 0x588D7975: jne 0x588d79cb
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x588D7977: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D7979: cmp dword ptr [ecx + 0x141c], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D797F: jle 0x588d7a84
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7985: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D7989: lea esi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D798F: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D7994: movzx eax, byte ptr [ecx + edx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D799C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588D799E: jne 0x588d79b2
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588D79A0: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588D79A2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D79A4: je 0x588d79b2
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D79A6: mov dword ptr [eax + 0x128], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D79AC: mov dword ptr [eax + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D79B2: inc edx
        __asm _emit 0x42
        // 0x588D79B3: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D79B6: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D79BC: jl 0x588d7994
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x588D79BE: mov al, byte ptr [ecx + 0x60ac]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D79C4: or al, 2
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x588D79C6: jmp 0x588d7bac
        __asm _emit 0xE9
        __asm _emit 0xE1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D79CB: test al, 0x10
        __asm _emit 0xA8
        __asm _emit 0x10
        // 0x588D79CD: je 0x588d7a31
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x588D79CF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D79D1: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D79D7: jle 0x588d7a84
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D79DD: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D79E1: lea esi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D79E7: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D79EC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x588D79F0: cmp byte ptr [ecx + eax + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D79F8: jne 0x588d7a18
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x588D79FA: movzx edx, byte ptr [eax + ecx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A02: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x588D7A04: jne 0x588d7a18
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588D7A06: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588D7A08: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D7A0A: je 0x588d7a18
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D7A0C: mov dword ptr [edx + 0x128], ebp
        __asm _emit 0x89
        __asm _emit 0xAA
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A12: mov dword ptr [edx + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A18: inc eax
        __asm _emit 0x40
        // 0x588D7A19: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D7A1C: cmp eax, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A22: jl 0x588d79f0
        __asm _emit 0x7C
        __asm _emit 0xCC
        // 0x588D7A24: mov al, byte ptr [ecx + 0x60ac]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A2A: or al, 2
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x588D7A2C: jmp 0x588d7bac
        __asm _emit 0xE9
        __asm _emit 0x7B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A31: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D7A33: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A39: jle 0x588d7a84
        __asm _emit 0x7E
        __asm _emit 0x49
        // 0x588D7A3B: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D7A3F: lea esi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A45: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D7A4A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A50: cmp byte ptr [ecx + eax + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A58: je 0x588d7a78
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588D7A5A: movzx edx, byte ptr [eax + ecx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A62: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x588D7A64: jne 0x588d7a78
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588D7A66: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588D7A68: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D7A6A: je 0x588d7a78
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D7A6C: mov dword ptr [edx + 0x128], ebp
        __asm _emit 0x89
        __asm _emit 0xAA
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A72: mov dword ptr [edx + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A78: inc eax
        __asm _emit 0x40
        // 0x588D7A79: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D7A7C: cmp eax, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A82: jl 0x588d7a50
        __asm _emit 0x7C
        __asm _emit 0xCC
        // 0x588D7A84: mov al, byte ptr [ecx + 0x60ac]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A8A: or al, 2
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x588D7A8C: jmp 0x588d7bac
        __asm _emit 0xE9
        __asm _emit 0x1B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A91: mov ebp, 1
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7A96: cmp edx, 6
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x588D7A99: je 0x588d7aa3
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588D7A9B: cmp edx, 7
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x07
        // 0x588D7A9E: jne 0x588d7aa3
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588D7AA0: or ebp, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCD
        __asm _emit 0xFF
        // 0x588D7AA3: movzx eax, word ptr [ecx + 0x60ba]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7AAA: mov dl, al
        __asm _emit 0x8A
        __asm _emit 0xD0
        // 0x588D7AAC: and dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x30
        // 0x588D7AAF: cmp dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x30
        // 0x588D7AB2: jne 0x588d7b00
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x588D7AB4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588D7AB6: cmp dword ptr [ecx + 0x141c], edx
        __asm _emit 0x39
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7ABC: jle 0x588d7ba4
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xE2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7AC2: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D7AC6: lea esi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7ACC: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D7AD1: movzx eax, byte ptr [ecx + edx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7AD9: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x588D7ADB: jne 0x588d7aef
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588D7ADD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588D7ADF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D7AE1: je 0x588d7aef
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D7AE3: mov dword ptr [eax + 0x124], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7AE9: mov dword ptr [eax + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7AEF: inc edx
        __asm _emit 0x42
        // 0x588D7AF0: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D7AF3: cmp edx, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7AF9: jl 0x588d7ad1
        __asm _emit 0x7C
        __asm _emit 0xD6
        // 0x588D7AFB: jmp 0x588d7ba4
        __asm _emit 0xE9
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B00: test al, 0x10
        __asm _emit 0xA8
        __asm _emit 0x10
        // 0x588D7B02: je 0x588d7b57
        __asm _emit 0x74
        __asm _emit 0x53
        // 0x588D7B04: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D7B06: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B0C: jle 0x588d7ba4
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B12: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D7B16: lea esi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B1C: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D7B21: cmp byte ptr [ecx + eax + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B29: jne 0x588d7b49
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x588D7B2B: movzx edx, byte ptr [eax + ecx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B33: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x588D7B35: jne 0x588d7b49
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588D7B37: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588D7B39: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D7B3B: je 0x588d7b49
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D7B3D: mov dword ptr [edx + 0x124], ebp
        __asm _emit 0x89
        __asm _emit 0xAA
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B43: mov dword ptr [edx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B49: inc eax
        __asm _emit 0x40
        // 0x588D7B4A: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D7B4D: cmp eax, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B53: jl 0x588d7b21
        __asm _emit 0x7C
        __asm _emit 0xCC
        // 0x588D7B55: jmp 0x588d7ba4
        __asm _emit 0xEB
        __asm _emit 0x4D
        // 0x588D7B57: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D7B59: cmp dword ptr [ecx + 0x141c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B5F: jle 0x588d7ba4
        __asm _emit 0x7E
        __asm _emit 0x43
        // 0x588D7B61: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D7B65: lea esi, [ecx + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B6B: mov ebx, 0x40000000
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D7B70: cmp byte ptr [ecx + eax + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B78: je 0x588d7b98
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588D7B7A: movzx edx, byte ptr [eax + ecx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x08
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B82: cmp edx, edi
        __asm _emit 0x3B
        __asm _emit 0xD7
        // 0x588D7B84: jne 0x588d7b98
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588D7B86: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x588D7B88: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D7B8A: je 0x588d7b98
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588D7B8C: mov dword ptr [edx + 0x124], ebp
        __asm _emit 0x89
        __asm _emit 0xAA
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B92: mov dword ptr [edx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7B98: inc eax
        __asm _emit 0x40
        // 0x588D7B99: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588D7B9C: cmp eax, dword ptr [ecx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7BA2: jl 0x588d7b70
        __asm _emit 0x7C
        __asm _emit 0xCC
        // 0x588D7BA4: mov al, byte ptr [ecx + 0x60ac]
        __asm _emit 0x8A
        __asm _emit 0x81
        __asm _emit 0xAC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D7BAA: or al, 1
        __asm _emit 0x0C
        __asm _emit 0x01
        // 0x588D7BAC: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x588D7BB0: movzx edx, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD1
        // 0x588D7BB3: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D7BB7: mov ax, word ptr [esp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D7BBC: pop edi
        __asm _emit 0x5F
        // 0x588D7BBD: pop esi
        __asm _emit 0x5E
        // 0x588D7BBE: pop ebp
        __asm _emit 0x5D
        // 0x588D7BBF: pop ebx
        __asm _emit 0x5B
        // 0x588D7BC0: pop ecx
        __asm _emit 0x59
        // 0x588D7BC1: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
