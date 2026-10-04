// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A75E0 .. +0x676 bytes.
// Source symbol alias: FUN_587a75e0.
// Direct callers: 0x587E8A40 (2 sites) and 0x58856560 (16 sites).
// Requires global 0x58A247F8 +4, then dispatches selector values 1..47.
// Case names and domain behavior are unresolved; see docs/current-main-selector-dispatch-587a75e0.md.
extern "C" __declspec(naked) void FUN_587a75e0() {
    __asm {
        // 0x587A75E0: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A75E5: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A75E8: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587A75EB: push ebx
        __asm _emit 0x53
        // 0x587A75EC: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587A75EE: push edi
        __asm _emit 0x57
        // 0x587A75EF: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587A75F1: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587A75F3: je 0x587a7c51
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A75F9: mov cl, byte ptr [esp + 0x14]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A75FD: push esi
        __asm _emit 0x56
        // 0x587A75FE: movzx esi, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xF1
        // 0x587A7601: lea edx, [esi - 1]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0xFF
        // 0x587A7604: cmp edx, 0x2e
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x2E
        // 0x587A7607: ja 0x587a7c50
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x43
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A760D: movzx edx, byte ptr [edx + 0x587a7c98]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x7C
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x587A7614: push ebp
        __asm _emit 0x55
        // 0x587A7615: jmp dword ptr [edx*4 + 0x587a7c5c]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x5C
        __asm _emit 0x7C
        __asm _emit 0x7A
        __asm _emit 0x58
        // 0x587A761C: movzx eax, byte ptr [eax + 0x340]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7623: push eax
        __asm _emit 0x50
        // 0x587A7624: push esi
        __asm _emit 0x56
        // 0x587A7625: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A7627: call 0x587a5a70
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A762C: pop ebp
        __asm _emit 0x5D
        // 0x587A762D: pop esi
        __asm _emit 0x5E
        // 0x587A762E: mov word ptr [edi + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587A7632: pop edi
        __asm _emit 0x5F
        // 0x587A7633: pop ebx
        __asm _emit 0x5B
        // 0x587A7634: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A7637: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A763A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A763C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A763E: call 0x587a7310
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7643: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7649: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A764C: movzx edx, byte ptr [eax + 0x340]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7653: push edx
        __asm _emit 0x52
        // 0x587A7654: push esi
        __asm _emit 0x56
        // 0x587A7655: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A7657: call 0x587a5a70
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xE4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A765C: pop ebp
        __asm _emit 0x5D
        // 0x587A765D: pop esi
        __asm _emit 0x5E
        // 0x587A765E: mov word ptr [edi + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587A7662: pop edi
        __asm _emit 0x5F
        // 0x587A7663: pop ebx
        __asm _emit 0x5B
        // 0x587A7664: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A7667: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A766A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A766C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A766E: call 0x587a7310
        __asm _emit 0xE8
        __asm _emit 0x9D
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7673: mov dword ptr [edi + 0x8c], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A767D: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7682: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587A7685: movzx ecx, byte ptr [eax + 0x340]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A768C: push ecx
        __asm _emit 0x51
        // 0x587A768D: push esi
        __asm _emit 0x56
        // 0x587A768E: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A7690: call 0x587a5a70
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7695: pop ebp
        __asm _emit 0x5D
        // 0x587A7696: pop esi
        __asm _emit 0x5E
        // 0x587A7697: mov word ptr [edi + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587A769B: pop edi
        __asm _emit 0x5F
        // 0x587A769C: pop ebx
        __asm _emit 0x5B
        // 0x587A769D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A76A0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A76A3: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A76A8: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A76AA: call 0x587a6190
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xEA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A76AF: pop ebp
        __asm _emit 0x5D
        // 0x587A76B0: pop esi
        __asm _emit 0x5E
        // 0x587A76B1: pop edi
        __asm _emit 0x5F
        // 0x587A76B2: pop ebx
        __asm _emit 0x5B
        // 0x587A76B3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A76B6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A76B9: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587A76BE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A76C0: call 0x587a7110
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A76C5: pop ebp
        __asm _emit 0x5D
        // 0x587A76C6: pop esi
        __asm _emit 0x5E
        // 0x587A76C7: pop edi
        __asm _emit 0x5F
        // 0x587A76C8: pop ebx
        __asm _emit 0x5B
        // 0x587A76C9: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A76CC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A76CF: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587A76D1: cmp cl, 0x17
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x17
        // 0x587A76D4: setne dl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC2
        // 0x587A76D7: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587A76D9: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A76DD: mov dword ptr [eax + 0x340], ecx
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A76E3: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A76E9: call 0x587e5b50
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xE4
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587A76EE: xor word ptr [edi + 4], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x03
        // 0x587A76F3: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A76F8: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587A76FB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587A76FD: cmp dword ptr [edx + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7703: jle 0x587a7731
        __asm _emit 0x7E
        __asm _emit 0x2C
        // 0x587A7705: lea eax, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587A7708: cmp dword ptr [eax], ebx
        __asm _emit 0x39
        __asm _emit 0x18
        // 0x587A770A: je 0x587a771c
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587A770C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587A770E: mov dword ptr [edx + 0x108], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7714: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587A7716: mov dword ptr [edx + 0x10c], ebx
        __asm _emit 0x89
        __asm _emit 0x9A
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A771C: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7722: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587A7725: inc ecx
        __asm _emit 0x41
        // 0x587A7726: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587A7729: cmp ecx, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0x8A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A772F: jl 0x587a7708
        __asm _emit 0x7C
        __asm _emit 0xD7
        // 0x587A7731: mov eax, dword ptr [0x58a247fc]
        __asm _emit 0xA1
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7736: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A773D: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7743: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A7746: cmp dword ptr [edx + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x9A
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A774C: mov byte ptr [esp + 0x1c], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A7750: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A7754: jle 0x587a7c4f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A775A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A775C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587A7760: cmp dword ptr [edi + esi*4 + 8], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A7764: je 0x587a77bf
        __asm _emit 0x74
        __asm _emit 0x59
        // 0x587A7766: mov eax, dword ptr [0x58a247fc]
        __asm _emit 0xA1
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A776B: mov dword ptr [eax + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x50
        // 0x587A776E: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7774: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587A7777: movzx edx, byte ptr [eax + esi + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x30
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A777F: cmp edx, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A7783: je 0x587a77e6
        __asm _emit 0x74
        __asm _emit 0x61
        // 0x587A7785: lea ecx, [eax + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A778B: mov eax, dword ptr [ecx + esi*4 + 0xb40]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB1
        __asm _emit 0x40
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7792: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587A7794: je 0x587a77aa
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x587A7796: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x587A7799: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587A779D: jne 0x587a77aa
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587A779F: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A77A3: call 0x587a5720
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A77A8: jmp 0x587a77bf
        __asm _emit 0xEB
        __asm _emit 0x15
        // 0x587A77AA: push esi
        __asm _emit 0x56
        // 0x587A77AB: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A77B0: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587A77B4: jne 0x587a77bf
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587A77B6: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A77BA: call 0x587a57e0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xE0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A77BF: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A77C3: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A77C9: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A77CC: inc eax
        __asm _emit 0x40
        // 0x587A77CD: movzx esi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF0
        // 0x587A77D0: cmp esi, dword ptr [edx + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB2
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A77D6: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A77DA: jl 0x587a7760
        __asm _emit 0x7C
        __asm _emit 0x84
        // 0x587A77DC: pop ebp
        __asm _emit 0x5D
        // 0x587A77DD: pop esi
        __asm _emit 0x5E
        // 0x587A77DE: pop edi
        __asm _emit 0x5F
        // 0x587A77DF: pop ebx
        __asm _emit 0x5B
        // 0x587A77E0: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A77E3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A77E6: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A77EB: cmp byte ptr [eax + 0x74], 1
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x587A77EF: jne 0x587a7842
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x587A77F1: cmp byte ptr [esp + 0x1c], bl
        __asm _emit 0x38
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A77F5: jne 0x587a7842
        __asm _emit 0x75
        __asm _emit 0x4B
        // 0x587A77F7: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587A77FA: movzx edx, byte ptr [esi + ecx + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x0E
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7802: lea eax, [esi + ecx]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x0E
        // 0x587A7805: movzx eax, byte ptr [eax + 0x21c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A780C: lea ecx, [eax + edx*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x50
        // 0x587A780F: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7815: mov eax, dword ptr [edx + ecx*8 + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xCA
        __asm _emit 0x7C
        // 0x587A7819: cmp word ptr [eax + 0xa4], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7820: jne 0x587a782a
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587A7822: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A7826: push ebx
        __asm _emit 0x53
        // 0x587A7827: push ecx
        __asm _emit 0x51
        // 0x587A7828: jmp 0x587a7831
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x587A782A: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A782E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587A7830: push edx
        __asm _emit 0x52
        // 0x587A7831: call 0x587ebcb0
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A7836: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A7839: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587A783C: jne 0x587a7842
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587A783E: mov byte ptr [esp + 0x1c], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A7842: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7847: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x587A784A: mov eax, dword ptr [ebp + esi*4 + 0xe8c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0xB5
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7851: lea ecx, [ebp + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7857: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587A7859: je 0x587a78aa
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x587A785B: movzx eax, byte ptr [eax]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x00
        // 0x587A785E: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587A7862: jne 0x587a78aa
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x587A7864: movzx eax, word ptr [edi + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A786B: test al, 0x10
        __asm _emit 0xA8
        __asm _emit 0x10
        // 0x587A786D: je 0x587a7886
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587A786F: cmp byte ptr [esi + ebp + 0x21c], bl
        __asm _emit 0x38
        __asm _emit 0x9C
        __asm _emit 0x2E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7876: jne 0x587a7886
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587A7878: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A787C: call 0x587a56a0
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7881: jmp 0x587a77bf
        __asm _emit 0xE9
        __asm _emit 0x39
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7886: test al, 0x20
        __asm _emit 0xA8
        __asm _emit 0x20
        // 0x587A7888: je 0x587a779f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x11
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A788E: cmp byte ptr [esi + ebp + 0x21c], 1
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x2E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587A7896: jne 0x587a779f
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A789C: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A78A0: call 0x587a56a0
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A78A5: jmp 0x587a77bf
        __asm _emit 0xE9
        __asm _emit 0x15
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A78AA: push esi
        __asm _emit 0x56
        // 0x587A78AB: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0xE7
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A78B0: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587A78B4: jne 0x587a77bf
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x05
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A78BA: movzx eax, word ptr [edi + 0x90]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x87
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A78C1: test al, 0x10
        __asm _emit 0xA8
        __asm _emit 0x10
        // 0x587A78C3: je 0x587a78dc
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587A78C5: cmp byte ptr [esi + ebp + 0x21c], bl
        __asm _emit 0x38
        __asm _emit 0x9C
        __asm _emit 0x2E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A78CC: jne 0x587a78dc
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587A78CE: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A78D2: call 0x587a5790
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A78D7: jmp 0x587a77bf
        __asm _emit 0xE9
        __asm _emit 0xE3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A78DC: test al, 0x20
        __asm _emit 0xA8
        __asm _emit 0x20
        // 0x587A78DE: je 0x587a77b6
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD2
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A78E4: cmp byte ptr [esi + ebp + 0x21c], 1
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x2E
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x587A78EC: jne 0x587a77b6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A78F2: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A78F6: call 0x587a5790
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A78FB: jmp 0x587a77bf
        __asm _emit 0xE9
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7900: mov al, byte ptr [edi + 0x93]
        __asm _emit 0x8A
        __asm _emit 0x87
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7906: and al, 0x10
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587A7908: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x587A790C: mov word ptr [edi + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7913: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7919: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A791C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587A791E: cmp dword ptr [eax + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7924: jle 0x587a7c4f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A792A: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A792C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587A7930: mov ebp, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A7934: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A7936: je 0x587a79da
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A793C: cmp byte ptr [eax + esi + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x30
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7944: jne 0x587a799d
        __asm _emit 0x75
        __asm _emit 0x57
        // 0x587A7946: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A794C: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587A794F: movzx edx, byte ptr [ecx + esi + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7957: cmp edx, dword ptr [ecx + 0x340]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A795D: jne 0x587a799d
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x587A795F: push esi
        __asm _emit 0x56
        // 0x587A7960: lea ecx, [eax + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7966: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xE7
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A796B: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587A796F: jne 0x587a7978
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A7971: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A7973: call 0x587a56a0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7978: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A797D: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A7980: push esi
        __asm _emit 0x56
        // 0x587A7981: add ecx, 0x34c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7987: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xE6
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A798C: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587A7990: jne 0x587a79da
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x587A7992: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A7996: call 0x587a5790
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A799B: jmp 0x587a79da
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x587A799D: push esi
        __asm _emit 0x56
        // 0x587A799E: lea ecx, [eax + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A79A4: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xE6
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A79A9: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587A79AD: jne 0x587a79b6
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A79AF: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A79B1: call 0x587a5720
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A79B6: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A79BC: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587A79BF: push esi
        __asm _emit 0x56
        // 0x587A79C0: add ecx, 0x34c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A79C6: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xE6
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A79CB: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587A79CF: jne 0x587a79da
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587A79D1: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A79D5: call 0x587a57e0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A79DA: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A79E0: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A79E3: inc ebx
        __asm _emit 0x43
        // 0x587A79E4: movzx esi, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF3
        // 0x587A79E7: cmp esi, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A79ED: jl 0x587a7930
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A79F3: pop ebp
        __asm _emit 0x5D
        // 0x587A79F4: pop esi
        __asm _emit 0x5E
        // 0x587A79F5: pop edi
        __asm _emit 0x5F
        // 0x587A79F6: pop ebx
        __asm _emit 0x5B
        // 0x587A79F7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A79FA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A79FD: mov al, byte ptr [edi + 0x93]
        __asm _emit 0x8A
        __asm _emit 0x87
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A03: and al, 0x20
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587A7A05: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x587A7A09: mov word ptr [edi + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A10: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7A16: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A7A19: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587A7A1B: cmp dword ptr [eax + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A21: jle 0x587a7c4f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A27: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A7A29: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A30: mov ebp, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A7A34: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x587A7A36: je 0x587a7ada
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A3C: cmp byte ptr [eax + esi + 0x21c], 0
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x30
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A44: je 0x587a7a9d
        __asm _emit 0x74
        __asm _emit 0x57
        // 0x587A7A46: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7A4C: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587A7A4F: movzx edx, byte ptr [ecx + esi + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A57: cmp edx, dword ptr [ecx + 0x340]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A5D: jne 0x587a7a9d
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x587A7A5F: push esi
        __asm _emit 0x56
        // 0x587A7A60: lea ecx, [eax + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A66: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xE6
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A7A6B: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587A7A6F: jne 0x587a7a78
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A7A71: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A7A73: call 0x587a56a0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7A78: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7A7D: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587A7A80: push esi
        __asm _emit 0x56
        // 0x587A7A81: add ecx, 0x34c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7A87: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xE5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A7A8C: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587A7A90: jne 0x587a7ada
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x587A7A92: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A7A96: call 0x587a5790
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7A9B: jmp 0x587a7ada
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x587A7A9D: push esi
        __asm _emit 0x56
        // 0x587A7A9E: lea ecx, [eax + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7AA4: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0xE5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A7AA9: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587A7AAD: jne 0x587a7ab6
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x587A7AAF: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587A7AB1: call 0x587a5720
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7AB6: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7ABC: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587A7ABF: push esi
        __asm _emit 0x56
        // 0x587A7AC0: add ecx, 0x34c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7AC6: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xE5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A7ACB: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587A7ACF: jne 0x587a7ada
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x587A7AD1: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A7AD5: call 0x587a57e0
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7ADA: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7AE0: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A7AE3: inc ebx
        __asm _emit 0x43
        // 0x587A7AE4: movzx esi, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF3
        // 0x587A7AE7: cmp esi, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7AED: jl 0x587a7a30
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7AF3: pop ebp
        __asm _emit 0x5D
        // 0x587A7AF4: pop esi
        __asm _emit 0x5E
        // 0x587A7AF5: pop edi
        __asm _emit 0x5F
        // 0x587A7AF6: pop ebx
        __asm _emit 0x5B
        // 0x587A7AF7: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A7AFA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A7AFD: mov al, byte ptr [edi + 0x93]
        __asm _emit 0x8A
        __asm _emit 0x87
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7B03: and al, 0x30
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587A7B05: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x587A7B09: mov word ptr [edi + 0x90], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7B10: mov ebp, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7B16: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587A7B19: cmp dword ptr [eax + 0x141c], ebx
        __asm _emit 0x39
        __asm _emit 0x98
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7B1F: mov dword ptr [esp + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A7B23: jle 0x587a7c4f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7B29: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587A7B2B: jmp 0x587a7b30
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x587A7B2D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587A7B30: mov ebx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A7B34: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587A7B36: je 0x587a7b8e
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x587A7B38: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x587A7B3B: movzx edx, byte ptr [ecx + esi + 0x1fc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x94
        __asm _emit 0x31
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7B43: cmp edx, dword ptr [ecx + 0x340]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7B49: jne 0x587a7b8e
        __asm _emit 0x75
        __asm _emit 0x43
        // 0x587A7B4B: push esi
        __asm _emit 0x56
        // 0x587A7B4C: lea ecx, [eax + 0x34c]
        __asm _emit 0x8D
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7B52: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xE5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A7B57: cmp ax, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x587A7B5B: jne 0x587a7b6a
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587A7B5D: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587A7B5F: call 0x587a56a0
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xDB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7B64: mov ebp, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7B6A: mov ecx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x04
        // 0x587A7B6D: push esi
        __asm _emit 0x56
        // 0x587A7B6E: add ecx, 0x34c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x4C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7B74: call 0x58736080
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xE5
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587A7B79: cmp ax, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x587A7B7D: jne 0x587a7b8e
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x587A7B7F: mov ecx, dword ptr [edi + esi*4 + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0xB7
        __asm _emit 0x08
        // 0x587A7B83: call 0x587a5790
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xDC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7B88: mov ebp, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7B8E: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A7B92: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587A7B95: inc ecx
        __asm _emit 0x41
        // 0x587A7B96: movzx esi, cx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF1
        // 0x587A7B99: cmp esi, dword ptr [eax + 0x141c]
        __asm _emit 0x3B
        __asm _emit 0xB0
        __asm _emit 0x1C
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7B9F: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A7BA3: jl 0x587a7b30
        __asm _emit 0x7C
        __asm _emit 0x8B
        // 0x587A7BA5: pop ebp
        __asm _emit 0x5D
        // 0x587A7BA6: pop esi
        __asm _emit 0x5E
        // 0x587A7BA7: pop edi
        __asm _emit 0x5F
        // 0x587A7BA8: pop ebx
        __asm _emit 0x5B
        // 0x587A7BA9: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A7BAC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A7BAF: movzx eax, byte ptr [eax + 0x340]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7BB6: push eax
        __asm _emit 0x50
        // 0x587A7BB7: push 0x15
        __asm _emit 0x6A
        __asm _emit 0x15
        // 0x587A7BB9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A7BBB: call 0x587a5a70
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7BC0: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7BC6: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587A7BC9: movzx eax, byte ptr [edx + 0x340]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x82
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7BD0: push eax
        __asm _emit 0x50
        // 0x587A7BD1: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x587A7BD3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A7BD5: call 0x587a5a70
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7BDA: pop ebp
        __asm _emit 0x5D
        // 0x587A7BDB: pop esi
        __asm _emit 0x5E
        // 0x587A7BDC: pop edi
        __asm _emit 0x5F
        // 0x587A7BDD: pop ebx
        __asm _emit 0x5B
        // 0x587A7BDE: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A7BE1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A7BE4: movzx ecx, byte ptr [eax + 0x340]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7BEB: push ecx
        __asm _emit 0x51
        // 0x587A7BEC: push 0x15
        __asm _emit 0x6A
        __asm _emit 0x15
        // 0x587A7BEE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A7BF0: call 0x587a5a70
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7BF5: xor word ptr [edi + 4], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x02
        // 0x587A7BFA: pop ebp
        __asm _emit 0x5D
        // 0x587A7BFB: pop esi
        __asm _emit 0x5E
        // 0x587A7BFC: pop edi
        __asm _emit 0x5F
        // 0x587A7BFD: pop ebx
        __asm _emit 0x5B
        // 0x587A7BFE: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A7C01: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A7C04: push ebx
        __asm _emit 0x53
        // 0x587A7C05: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A7C07: call 0x587a7310
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7C0C: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587A7C12: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587A7C15: movzx ecx, byte ptr [eax + 0x340]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A7C1C: push ecx
        __asm _emit 0x51
        // 0x587A7C1D: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x587A7C1F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A7C21: call 0x587a5a70
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0xDE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7C26: xor word ptr [edi + 4], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x587A7C2B: pop ebp
        __asm _emit 0x5D
        // 0x587A7C2C: pop esi
        __asm _emit 0x5E
        // 0x587A7C2D: pop edi
        __asm _emit 0x5F
        // 0x587A7C2E: pop ebx
        __asm _emit 0x5B
        // 0x587A7C2F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A7C32: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A7C35: push ebx
        __asm _emit 0x53
        // 0x587A7C36: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A7C38: call 0x587a6190
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xE5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7C3D: pop ebp
        __asm _emit 0x5D
        // 0x587A7C3E: pop esi
        __asm _emit 0x5E
        // 0x587A7C3F: pop edi
        __asm _emit 0x5F
        // 0x587A7C40: pop ebx
        __asm _emit 0x5B
        // 0x587A7C41: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A7C44: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A7C47: push ebx
        __asm _emit 0x53
        // 0x587A7C48: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587A7C4A: call 0x587a7110
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A7C4F: pop ebp
        __asm _emit 0x5D
        // 0x587A7C50: pop esi
        __asm _emit 0x5E
        // 0x587A7C51: pop edi
        __asm _emit 0x5F
        // 0x587A7C52: pop ebx
        __asm _emit 0x5B
        // 0x587A7C53: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
    }
}
