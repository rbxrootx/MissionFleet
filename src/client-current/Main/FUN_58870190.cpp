// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 281 bytes in 1 exact ranges.
// Source symbol alias: FUN_58870190.

// Ghidra body range 0x58870190..0x588702A9; 281 mapped bytes.
extern "C" __declspec(naked) void FUN_58870190_segment_00() {
    __asm {
        // 0x58870190: push ebx
        __asm _emit 0x53
        // 0x58870191: push ebp
        __asm _emit 0x55
        // 0x58870192: push esi
        __asm _emit 0x56
        // 0x58870193: push edi
        __asm _emit 0x57
        // 0x58870194: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58870198: movzx ax, byte ptr [edi + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x47
        __asm _emit 0x10
        // 0x5887019D: movzx ebx, word ptr [edi + 0x12]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x5F
        __asm _emit 0x12
        // 0x588701A1: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x588701A4: mov eax, dword ptr [0x58a24698]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588701A9: cmp dword ptr [eax + 0x164], 0x99
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588701B3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588701B5: jle 0x588701ce
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588701B7: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588701BE: je 0x588701ce
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588701C0: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588701C6: mov eax, dword ptr [ecx + 0x264]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588701CC: jmp 0x588701d0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588701CE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588701D0: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588701D3: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588701D6: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588701D8: je 0x58870202
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588701DA: mov ebp, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x588701DD: mov dword ptr [ecx + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x0C
        // 0x588701E0: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x588701E3: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588701E6: mov dword ptr [ecx + 0x10], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x10
        // 0x588701E9: mov ebp, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x28
        // 0x588701EB: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588701EE: mov dword ptr [ecx], ebp
        __asm _emit 0x89
        __asm _emit 0x29
        // 0x588701F0: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x588701F3: mov dword ptr [ecx + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x04
        // 0x588701F6: mov ebp, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x588701F9: mov dword ptr [ecx + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x08
        // 0x588701FC: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588701FF: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58870202: movzx cx, bl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xCB
        // 0x58870206: movzx eax, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC1
        // 0x58870209: push eax
        __asm _emit 0x50
        // 0x5887020A: push edx
        __asm _emit 0x52
        // 0x5887020B: call 0x5876ccc0
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xCA
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58870210: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870216: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58870219: push eax
        __asm _emit 0x50
        // 0x5887021A: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x1A
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5887021F: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x58870222: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58870224: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58870227: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x5887022A: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5887022D: lea ebx, [esi + 0x140]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870233: add edi, 0x6e
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x6E
        // 0x58870236: lea ebp, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x58870239: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870240: cmp byte ptr [edi - 1], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x58870244: je 0x58870261
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x58870246: movzx eax, word ptr [edi]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x07
        // 0x58870249: movzx ecx, byte ptr [edi - 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x4F
        __asm _emit 0xFE
        // 0x5887024D: push eax
        __asm _emit 0x50
        // 0x5887024E: push ecx
        __asm _emit 0x51
        // 0x5887024F: call 0x5876ccc0
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0xCA
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58870254: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58870256: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58870259: push eax
        __asm _emit 0x50
        // 0x5887025A: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x1A
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x5887025F: jmp 0x58870297
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x58870261: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58870263: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x58870266: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58870268: je 0x58870297
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x5887026A: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887026F: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870274: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5887027A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887027C: je 0x5887028f
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5887027E: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x58870280: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58870282: je 0x5887028f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58870284: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x58870286: inc eax
        __asm _emit 0x40
        // 0x58870287: inc edx
        __asm _emit 0x42
        // 0x58870288: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x5887028B: jne 0x58870274
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5887028D: jmp 0x58870293
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5887028F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58870291: jne 0x58870294
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58870293: dec eax
        __asm _emit 0x48
        // 0x58870294: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870297: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5887029A: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5887029D: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588702A0: jne 0x58870240
        __asm _emit 0x75
        __asm _emit 0x9E
        // 0x588702A2: pop edi
        __asm _emit 0x5F
        // 0x588702A3: pop esi
        __asm _emit 0x5E
        // 0x588702A4: pop ebp
        __asm _emit 0x5D
        // 0x588702A5: pop ebx
        __asm _emit 0x5B
        // 0x588702A6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
