// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 495 bytes in 1 exact ranges.
// Source symbol alias: FUN_58876820.

// Ghidra body range 0x58876820..0x58876A0F; 495 mapped bytes.
extern "C" __declspec(naked) void FUN_58876820_segment_00() {
    __asm {
        // 0x58876820: push ebp
        __asm _emit 0x55
        // 0x58876821: push esi
        __asm _emit 0x56
        // 0x58876822: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58876824: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58876828: push edi
        __asm _emit 0x57
        // 0x58876829: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5887682B: je 0x58876a06
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876831: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x58876834: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58876838: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887683A: je 0x58876861
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5887683C: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5887683F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58876841: je 0x58876859
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x58876843: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58876845: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58876847: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5887684A: push ebp
        __asm _emit 0x55
        // 0x5887684B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5887684D: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x58876850: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58876853: je 0x58876861
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58876855: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58876857: jne 0x58876843
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x58876859: pop edi
        __asm _emit 0x5F
        // 0x5887685A: pop esi
        __asm _emit 0x5E
        // 0x5887685B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887685D: pop ebp
        __asm _emit 0x5D
        // 0x5887685E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58876861: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x58876865: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887686A: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5887686D: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876872: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x58876875: jne 0x58876a06
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887687B: cmp dword ptr [ebp + 4], 0x100
        __asm _emit 0x81
        __asm _emit 0x7D
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876882: jne 0x58876a06
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x7E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876888: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5887688B: add eax, -9
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF7
        // 0x5887688E: cmp eax, 0x71
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x71
        // 0x58876891: ja 0x58876a06
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x6F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876897: movzx edx, byte ptr [eax + 0x58876a3c]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x3C
        __asm _emit 0x6A
        __asm _emit 0x87
        __asm _emit 0x58
        // 0x5887689E: jmp dword ptr [edx*4 + 0x58876a10]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x10
        __asm _emit 0x6A
        __asm _emit 0x87
        __asm _emit 0x58
        // 0x588768A5: lea edi, [esi + 0x5c]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x5C
        // 0x588768A8: cmp word ptr [esi + 0xcc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588768B0: je 0x588768bb
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588768B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588768B4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588768B6: call 0x58875830
        __asm _emit 0xE8
        __asm _emit 0x75
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588768BB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588768BD: mov word ptr [esi + 0xce], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588768C4: jmp 0x5887695d
        __asm _emit 0xE9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588768C9: lea edi, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x588768CC: cmp word ptr [esi + 0xcc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588768D4: je 0x588768df
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588768D6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588768D8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588768DA: call 0x58875830
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588768DF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588768E1: mov word ptr [esi + 0xce], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588768E8: jmp 0x5887695d
        __asm _emit 0xEB
        __asm _emit 0x73
        // 0x588768EA: movzx eax, word ptr [esi + 0xcc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588768F1: lea edi, [esi + 0x6c]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x588768F4: cmp ax, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588768F8: je 0x58876a06
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588768FE: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58876901: je 0x5887695d
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x58876903: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58876905: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58876907: call 0x58875830
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xEF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887690C: jmp 0x5887695d
        __asm _emit 0xEB
        __asm _emit 0x4F
        // 0x5887690E: lea edi, [esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58876911: jmp 0x58876941
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x58876913: lea edi, [esi + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x58876916: jmp 0x588768a8
        __asm _emit 0xEB
        __asm _emit 0x90
        // 0x58876918: lea edi, [esi + 0x84]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887691E: jmp 0x588768cc
        __asm _emit 0xEB
        __asm _emit 0xAC
        // 0x58876920: lea edi, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876926: jmp 0x58876941
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x58876928: lea edi, [esi + 0x94]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887692E: jmp 0x588768a8
        __asm _emit 0xE9
        __asm _emit 0x75
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876933: lea edi, [esi + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876939: jmp 0x588768cc
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x5887693B: lea edi, [esi + 0xa4]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876941: cmp word ptr [esi + 0xcc], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876949: je 0x58876954
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5887694B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5887694D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887694F: call 0x58875830
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xEE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876954: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58876956: mov word ptr [esi + 0xce], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887695D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5887695F: je 0x58876a06
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876965: cmp dword ptr [esi + 0xc8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887696C: jne 0x58876999
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x5887696E: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x58876971: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58876973: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xAC
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58876978: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5887697B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5887697D: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x6E
        __asm _emit 0xAC
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x58876982: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58876985: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887698A: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xC3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887698F: mov dword ptr [esi + 0xc8], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58876999: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887699F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588769A1: je 0x588769bc
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588769A3: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588769A5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588769A7: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0xAC
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588769AC: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588769B2: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588769B5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588769B7: call 0x587315f0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xAC
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588769BC: mov dword ptr [esi + 0xc4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588769C2: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x588769C4: or word ptr [edi + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588769C9: mov ecx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588769CF: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588769D2: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588769D7: mov edx, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588769DD: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x588769DF: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588769E4: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0xC3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588769E9: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588769EF: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588769F2: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588769F7: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x24
        __asm _emit 0xC3
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588769FC: cmp dword ptr [ebp + 8], 0x1b
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x1B
        // 0x58876A00: je 0x58876859
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x53
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876A06: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x58876A09: pop edi
        __asm _emit 0x5F
        // 0x58876A0A: pop esi
        __asm _emit 0x5E
        // 0x58876A0B: pop ebp
        __asm _emit 0x5D
        // 0x58876A0C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
