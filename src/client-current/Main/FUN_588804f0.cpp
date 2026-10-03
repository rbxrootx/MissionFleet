// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588804F0 .. +0x13B bytes.
extern "C" __declspec(naked) void FUN_588804f0() {
    __asm {
        // 0x588804F0: push ecx
        __asm _emit 0x51
        // 0x588804F1: push ebx
        __asm _emit 0x53
        // 0x588804F2: push ebp
        __asm _emit 0x55
        // 0x588804F3: push esi
        __asm _emit 0x56
        // 0x588804F4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588804F6: push edi
        __asm _emit 0x57
        // 0x588804F7: mov edi, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588804FD: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58880501: cmp edi, dword ptr [esi + 0xa8]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880507: jbe 0x5888050e
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58880509: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xC7
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888050E: mov esi, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880514: mov ebp, edi
        __asm _emit 0x8B
        __asm _emit 0xEF
        // 0x58880516: lea ebx, [edi + 0x22]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x22
        // 0x58880519: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880520: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58880524: mov edi, dword ptr [eax + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888052A: cmp dword ptr [eax + 0xa4], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880530: jbe 0x5888053b
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58880532: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xC7
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58880537: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888053B: mov eax, dword ptr [eax + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880541: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58880543: je 0x58880549
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58880545: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58880547: je 0x5888054e
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58880549: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xC7
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888054E: cmp ebp, edi
        __asm _emit 0x3B
        __asm _emit 0xEF
        // 0x58880550: je 0x58880621
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58880556: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58880558: jne 0x588805ae
        __asm _emit 0x75
        __asm _emit 0x54
        // 0x5888055A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x13
        __asm _emit 0xC7
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888055F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58880561: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58880564: jb 0x5888056b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58880566: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xC7
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888056B: mov di, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58880570: cmp word ptr [ebx - 0x1e], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x7B
        __asm _emit 0xE2
        // 0x58880574: jne 0x58880596
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x58880576: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58880578: jne 0x588805b2
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x5888057A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xC6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888057F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58880581: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x58880584: jb 0x5888058b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58880586: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xC6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888058B: mov ax, word ptr [esp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58880590: cmp word ptr [ebx - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x43
        __asm _emit 0xE4
        // 0x58880594: je 0x588805d1
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x58880596: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58880598: jne 0x588805b6
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x5888059A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xC6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888059F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588805A1: cmp ebx, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x10
        // 0x588805A4: ja 0x588805c1
        __asm _emit 0x77
        __asm _emit 0x1B
        // 0x588805A6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588805A8: je 0x588805ba
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588805AA: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588805AC: jmp 0x588805bc
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x588805AE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588805B0: jmp 0x58880561
        __asm _emit 0xEB
        __asm _emit 0xAF
        // 0x588805B2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588805B4: jmp 0x58880581
        __asm _emit 0xEB
        __asm _emit 0xCB
        // 0x588805B6: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x588805B8: jmp 0x588805a1
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x588805BA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588805BC: cmp ebx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x588805BF: jae 0x588805c6
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x588805C1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xC6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588805C6: add ebp, 0x22
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x22
        // 0x588805C9: add ebx, 0x22
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x22
        // 0x588805CC: jmp 0x58880520
        __asm _emit 0xE9
        __asm _emit 0x4F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588805D1: cmp di, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x01
        // 0x588805D5: jne 0x588805fe
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x588805D7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588805D9: jne 0x588805fa
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x588805DB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xC6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588805E0: cmp ebp, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x588805E3: jb 0x588805ea
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588805E5: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0xC6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588805EA: movzx eax, word ptr [ebp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588805EE: sub eax, dword ptr [esp + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588805F2: pop edi
        __asm _emit 0x5F
        // 0x588805F3: pop esi
        __asm _emit 0x5E
        // 0x588805F4: pop ebp
        __asm _emit 0x5D
        // 0x588805F5: pop ebx
        __asm _emit 0x5B
        // 0x588805F6: pop ecx
        __asm _emit 0x59
        // 0x588805F7: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588805FA: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x588805FC: jmp 0x588805e0
        __asm _emit 0xEB
        __asm _emit 0xE2
        // 0x588805FE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58880600: jne 0x5888061d
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x58880602: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0xC6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58880607: cmp ebp, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x5888060A: jb 0x58880611
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5888060C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0xC6
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58880611: movzx eax, word ptr [ebp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58880615: pop edi
        __asm _emit 0x5F
        // 0x58880616: pop esi
        __asm _emit 0x5E
        // 0x58880617: pop ebp
        __asm _emit 0x5D
        // 0x58880618: pop ebx
        __asm _emit 0x5B
        // 0x58880619: pop ecx
        __asm _emit 0x59
        // 0x5888061A: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5888061D: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5888061F: jmp 0x58880607
        __asm _emit 0xEB
        __asm _emit 0xE6
        // 0x58880621: pop edi
        __asm _emit 0x5F
        // 0x58880622: pop esi
        __asm _emit 0x5E
        // 0x58880623: pop ebp
        __asm _emit 0x5D
        // 0x58880624: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58880626: pop ebx
        __asm _emit 0x5B
        // 0x58880627: pop ecx
        __asm _emit 0x59
        // 0x58880628: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
