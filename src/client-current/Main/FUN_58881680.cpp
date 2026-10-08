// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1433 bytes in 3 exact ranges.
// Source symbol alias: FUN_58881680.

// Ghidra body range 0x58881680..0x5888172D; 173 mapped bytes.
extern "C" __declspec(naked) void FUN_58881680_segment_00() {
    __asm {
        // 0x58881680: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58881684: push ebx
        __asm _emit 0x53
        // 0x58881685: push esi
        __asm _emit 0x56
        // 0x58881686: push edi
        __asm _emit 0x57
        // 0x58881687: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58881689: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5888168C: jne 0x58881ba5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x13
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881692: cmp dword ptr [esi + 0x94], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x58881699: je 0x58881c1b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x7C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888169F: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588816A2: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588816A4: push ebp
        __asm _emit 0x55
        // 0x588816A5: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588816A9: cmp dword ptr [eax + 0x74], ebx
        __asm _emit 0x39
        __asm _emit 0x58
        __asm _emit 0x74
        // 0x588816AC: jbe 0x588816e4
        __asm _emit 0x76
        __asm _emit 0x36
        // 0x588816AE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588816B0: mov edi, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x588816B3: mov ecx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x64
        // 0x588816B6: sub ecx, dword ptr [edi + 0x60]
        __asm _emit 0x2B
        __asm _emit 0x4F
        __asm _emit 0x60
        // 0x588816B9: add edi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x54
        // 0x588816BC: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588816BF: cmp ebx, ecx
        __asm _emit 0x3B
        __asm _emit 0xD9
        // 0x588816C1: jb 0x588816c8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588816C3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xB5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x588816C8: mov edx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x0C
        // 0x588816CB: cmp ebp, dword ptr [edx + ebx*4]
        __asm _emit 0x3B
        __asm _emit 0x2C
        __asm _emit 0x9A
        // 0x588816CE: je 0x588816db
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588816D0: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588816D3: inc ebx
        __asm _emit 0x43
        // 0x588816D4: cmp ebx, dword ptr [eax + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x58
        __asm _emit 0x74
        // 0x588816D7: jb 0x588816b0
        __asm _emit 0x72
        __asm _emit 0xD7
        // 0x588816D9: jmp 0x588816e4
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588816DB: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588816DE: push ebx
        __asm _emit 0x53
        // 0x588816DF: call 0x588c5c30
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588816E4: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588816E7: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588816E9: cmp dword ptr [ecx + 0x74], ebx
        __asm _emit 0x39
        __asm _emit 0x59
        __asm _emit 0x74
        // 0x588816EC: jbe 0x58881721
        __asm _emit 0x76
        __asm _emit 0x33
        // 0x588816EE: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588816F0: mov edi, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x588816F3: mov edx, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x64
        // 0x588816F6: sub edx, dword ptr [edi + 0x60]
        __asm _emit 0x2B
        __asm _emit 0x57
        __asm _emit 0x60
        // 0x588816F9: add edi, 0x54
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x54
        // 0x588816FC: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588816FF: cmp ebx, edx
        __asm _emit 0x3B
        __asm _emit 0xDA
        // 0x58881701: jb 0x58881708
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58881703: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0xB5
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x58881708: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5888170B: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5888170E: cmp ebp, dword ptr [eax + ebx*4]
        __asm _emit 0x3B
        __asm _emit 0x2C
        __asm _emit 0x98
        // 0x58881711: je 0x5888171b
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58881713: inc ebx
        __asm _emit 0x43
        // 0x58881714: cmp ebx, dword ptr [ecx + 0x74]
        __asm _emit 0x3B
        __asm _emit 0x59
        __asm _emit 0x74
        // 0x58881717: jb 0x588816f0
        __asm _emit 0x72
        __asm _emit 0xD7
        // 0x58881719: jmp 0x58881721
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5888171B: push ebx
        __asm _emit 0x53
        // 0x5888171C: call 0x588c5c30
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58881721: lea edi, [esi + 0x154]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881727: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58881729: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5888172B: jmp 0x58881730
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58881730..0x588818D9; 425 mapped bytes.
extern "C" __declspec(naked) void FUN_58881680_segment_01() {
    __asm {
        // 0x58881730: cmp ebp, dword ptr [eax]
        __asm _emit 0x3B
        __asm _emit 0x28
        // 0x58881732: je 0x58881747
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58881734: inc ebx
        __asm _emit 0x43
        // 0x58881735: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58881738: cmp ebx, 6
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x06
        // 0x5888173B: jl 0x58881730
        __asm _emit 0x7C
        __asm _emit 0xF3
        // 0x5888173D: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881742: jmp 0x58881824
        __asm _emit 0xE9
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881747: mov edx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888174D: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x58881751: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x58881755: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x58881757: cmp al, 5
        __asm _emit 0x3C
        __asm _emit 0x05
        // 0x58881759: je 0x58881768
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5888175B: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881761: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58881763: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58881766: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58881768: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x5888176A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881770: cmp ebx, ebp
        __asm _emit 0x3B
        __asm _emit 0xDD
        // 0x58881772: jne 0x588817c5
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x58881774: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58881776: mov dword ptr [ecx + 0x50], 4
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888177D: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5888177F: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881784: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58881788: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5888178A: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5888178D: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x03
        // 0x58881790: push ecx
        __asm _emit 0x51
        // 0x58881791: mov ecx, dword ptr [edi - 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xB8
        // 0x58881794: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0xC7
        __asm _emit 0x1B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58881799: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5888179B: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x5888179E: mov ecx, dword ptr [edi - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xD0
        // 0x588817A1: movzx edx, bx
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD3
        // 0x588817A4: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x588817A7: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588817AA: push edx
        __asm _emit 0x52
        // 0x588817AB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588817AD: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x588817B0: mov dword ptr [esi + 0x70], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588817B7: call 0x5887cfb0
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0xB7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588817BC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588817BE: call 0x58880df0
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588817C3: jmp 0x588817f4
        __asm _emit 0xEB
        __asm _emit 0x2F
        // 0x588817C5: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588817C7: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588817CE: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588817D0: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x588817D5: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x588817D7: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588817DA: mov ecx, dword ptr [edi - 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xB8
        // 0x588817DD: add edx, 2
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x02
        // 0x588817E0: push edx
        __asm _emit 0x52
        // 0x588817E1: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x1B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588817E6: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x588817E8: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588817EB: mov edx, dword ptr [edi - 0x30]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0xD0
        // 0x588817EE: add ecx, 3
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x03
        // 0x588817F1: mov dword ptr [edx + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x588817F4: mov eax, dword ptr [esi + ebx*4 + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588817FB: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881800: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58881804: mov eax, dword ptr [esi + ebx*4 + 0x184]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888180B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5888180D: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58881811: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881816: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x58881818: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888181B: cmp ebp, 6
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x06
        // 0x5888181E: jl 0x58881770
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x4C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58881824: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58881828: pop ebp
        __asm _emit 0x5D
        // 0x58881829: cmp eax, dword ptr [esi + 0x19c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888182F: jne 0x58881949
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881835: mov eax, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888183B: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888183F: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58881843: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58881846: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58881849: je 0x5888185d
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5888184B: mov ecx, dword ptr [esi + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881851: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881853: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58881856: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881858: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888185D: cmp word ptr [esi + 0x90], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881865: jne 0x58881920
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888186B: cmp dword ptr [esi + 0x94], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881871: je 0x58881920
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881877: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888187D: call 0x587ba0a0
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x88
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58881882: mov edi, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881888: mov ecx, dword ptr [edi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x40
        // 0x5888188B: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881890: add ax, word ptr [esi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x58881894: mov word ptr [edi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x58881898: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5888189A: je 0x588818a2
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5888189C: push edi
        __asm _emit 0x57
        // 0x5888189D: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588818A2: mov ecx, dword ptr [edi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x30
        // 0x588818A5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588818A7: je 0x588818af
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588818A9: push edi
        __asm _emit 0x57
        // 0x588818AA: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588818AF: push 0x5899f20c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0xF2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588818B4: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588818BA: mov ecx, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588818C0: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x588818C3: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588818C6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588818C8: je 0x58881903
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588818CA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588818CC: je 0x58881903
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588818CE: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x588818D0: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588818D5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x588818D7: jmp 0x588818e0
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588818E0..0x58881C23; 835 mapped bytes.
extern "C" __declspec(naked) void FUN_58881680_segment_02() {
    __asm {
        // 0x588818E0: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588818E6: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588818E8: je 0x588818fb
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588818EA: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x588818EC: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588818EE: je 0x588818fb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588818F0: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x588818F2: inc eax
        __asm _emit 0x40
        // 0x588818F3: inc edx
        __asm _emit 0x42
        // 0x588818F4: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x588818F7: jne 0x588818e0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x588818F9: jmp 0x588818ff
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x588818FB: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588818FD: jne 0x58881900
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x588818FF: dec eax
        __asm _emit 0x48
        // 0x58881900: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881903: mov eax, dword ptr [esi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881909: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888190E: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58881912: pop edi
        __asm _emit 0x5F
        // 0x58881913: mov dword ptr [esi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881919: pop esi
        __asm _emit 0x5E
        // 0x5888191A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888191C: pop ebx
        __asm _emit 0x5B
        // 0x5888191D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881920: cmp dword ptr [esi + 0x68], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x68
        __asm _emit 0x00
        // 0x58881924: je 0x58881c1b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xF1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888192A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888192C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888192E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58881930: push 0xfaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881935: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xA1
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x5888193A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5888193C: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x33
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58881941: pop edi
        __asm _emit 0x5F
        // 0x58881942: pop esi
        __asm _emit 0x5E
        // 0x58881943: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881945: pop ebx
        __asm _emit 0x5B
        // 0x58881946: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881949: cmp eax, dword ptr [esi + 0x1a0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888194F: jne 0x58881962
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x58881951: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58881953: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58881956: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58881958: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5888195A: pop edi
        __asm _emit 0x5F
        // 0x5888195B: pop esi
        __asm _emit 0x5E
        // 0x5888195C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888195E: pop ebx
        __asm _emit 0x5B
        // 0x5888195F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881962: cmp eax, dword ptr [esi + 0x1a8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881968: jne 0x58881979
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5888196A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888196C: call 0x5887a770
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x8D
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58881971: pop edi
        __asm _emit 0x5F
        // 0x58881972: pop esi
        __asm _emit 0x5E
        // 0x58881973: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881975: pop ebx
        __asm _emit 0x5B
        // 0x58881976: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881979: cmp eax, dword ptr [esi + 0x1ac]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888197F: jne 0x58881990
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x58881981: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58881983: call 0x5887a810
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x8E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58881988: pop edi
        __asm _emit 0x5F
        // 0x58881989: pop esi
        __asm _emit 0x5E
        // 0x5888198A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5888198C: pop ebx
        __asm _emit 0x5B
        // 0x5888198D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881990: cmp eax, dword ptr [esi + 0x1bc]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881996: jne 0x588819a7
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x58881998: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5888199A: call 0x5887ad20
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x93
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5888199F: pop edi
        __asm _emit 0x5F
        // 0x588819A0: pop esi
        __asm _emit 0x5E
        // 0x588819A1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588819A3: pop ebx
        __asm _emit 0x5B
        // 0x588819A4: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588819A7: cmp eax, dword ptr [esi + 0x1c0]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588819AD: jne 0x588819be
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588819AF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588819B1: call 0x5887adc0
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x94
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588819B6: pop edi
        __asm _emit 0x5F
        // 0x588819B7: pop esi
        __asm _emit 0x5E
        // 0x588819B8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588819BA: pop ebx
        __asm _emit 0x5B
        // 0x588819BB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588819BE: cmp eax, dword ptr [esi + 0x258]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588819C4: jne 0x588819d5
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588819C6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588819C8: call 0x5887be10
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0xA4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588819CD: pop edi
        __asm _emit 0x5F
        // 0x588819CE: pop esi
        __asm _emit 0x5E
        // 0x588819CF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588819D1: pop ebx
        __asm _emit 0x5B
        // 0x588819D2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588819D5: cmp eax, dword ptr [esi + 0x25c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588819DB: jne 0x588819ec
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588819DD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588819DF: call 0x5887bd30
        __asm _emit 0xE8
        __asm _emit 0x4C
        __asm _emit 0xA3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588819E4: pop edi
        __asm _emit 0x5F
        // 0x588819E5: pop esi
        __asm _emit 0x5E
        // 0x588819E6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588819E8: pop ebx
        __asm _emit 0x5B
        // 0x588819E9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588819EC: cmp eax, dword ptr [esi + 0x238]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588819F2: jne 0x58881b3b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588819F8: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588819FB: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588819FE: jne 0x58881a48
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x58881A00: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58881A03: movzx eax, word ptr [ecx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x02
        // 0x58881A07: mov edx, 0xdd
        __asm _emit 0xBA
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A0C: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58881A0F: je 0x58881a29
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58881A11: mov ecx, 0xde
        __asm _emit 0xB9
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A16: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58881A19: je 0x58881a29
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58881A1B: mov edx, 0xdf
        __asm _emit 0xBA
        __asm _emit 0xDF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A20: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58881A23: jne 0x58881b60
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A29: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58881A2B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58881A2D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58881A2F: push 0x57b
        __asm _emit 0x68
        __asm _emit 0x7B
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A34: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0xB7
        __asm _emit 0xA0
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58881A39: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58881A3B: call 0x5876a570
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0x8B
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x58881A40: pop edi
        __asm _emit 0x5F
        // 0x58881A41: pop esi
        __asm _emit 0x5E
        // 0x58881A42: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881A44: pop ebx
        __asm _emit 0x5B
        // 0x58881A45: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881A48: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58881A4A: jne 0x58881a86
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x58881A4C: cmp dword ptr [esi + 0x94], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A52: je 0x58881c1b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A58: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58881A5B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58881A61: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A66: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58881A68: push eax
        __asm _emit 0x50
        // 0x58881A69: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58881A6C: push eax
        __asm _emit 0x50
        // 0x58881A6D: call 0x587ba0c0
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x86
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58881A72: mov eax, 0x7d
        __asm _emit 0xB8
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A77: pop edi
        __asm _emit 0x5F
        // 0x58881A78: mov word ptr [esi + 0x92], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A7F: pop esi
        __asm _emit 0x5E
        // 0x58881A80: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881A82: pop ebx
        __asm _emit 0x5B
        // 0x58881A83: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881A86: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58881A89: jne 0x58881af8
        __asm _emit 0x75
        __asm _emit 0x6D
        // 0x58881A8B: mov eax, dword ptr [esi + 0x254]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A91: mov eax, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881A97: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58881A99: je 0x58881aa0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58881A9B: cmp dword ptr [eax + 8], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58881A9E: je 0x58881ab4
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x58881AA0: push 0x1134
        __asm _emit 0x68
        __asm _emit 0x34
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881AA5: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58881AA7: call 0x5887a3f0
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58881AAC: pop edi
        __asm _emit 0x5F
        // 0x58881AAD: pop esi
        __asm _emit 0x5E
        // 0x58881AAE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881AB0: pop ebx
        __asm _emit 0x5B
        // 0x58881AB1: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881AB4: cmp dword ptr [esi + 0x94], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881ABA: je 0x58881c1b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x5B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881AC0: mov ecx, dword ptr [esi + 0x244]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881AC6: mov edi, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58881AC9: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881ACE: call 0x58759e90
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58881AD3: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58881AD9: push eax
        __asm _emit 0x50
        // 0x58881ADA: push edi
        __asm _emit 0x57
        // 0x58881ADB: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58881ADE: push edi
        __asm _emit 0x57
        // 0x58881ADF: call 0x587ba0c0
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x85
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58881AE4: mov ecx, 0x7d
        __asm _emit 0xB9
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881AE9: pop edi
        __asm _emit 0x5F
        // 0x58881AEA: mov word ptr [esi + 0x92], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881AF1: pop esi
        __asm _emit 0x5E
        // 0x58881AF2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881AF4: pop ebx
        __asm _emit 0x5B
        // 0x58881AF5: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881AF8: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58881AFB: jne 0x58881c1b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B01: cmp dword ptr [esi + 0x94], ecx
        __asm _emit 0x39
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B07: je 0x58881c1b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B0D: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58881B10: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58881B16: push 0xff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B1B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58881B1D: push eax
        __asm _emit 0x50
        // 0x58881B1E: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58881B21: push eax
        __asm _emit 0x50
        // 0x58881B22: call 0x587ba0c0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x85
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58881B27: mov edx, 0x7d
        __asm _emit 0xBA
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B2C: pop edi
        __asm _emit 0x5F
        // 0x58881B2D: mov word ptr [esi + 0x92], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B34: pop esi
        __asm _emit 0x5E
        // 0x58881B35: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881B37: pop ebx
        __asm _emit 0x5B
        // 0x58881B38: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881B3B: cmp eax, dword ptr [esi + 0x23c]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B41: jne 0x58881b75
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x58881B43: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58881B49: call 0x588f3fa0
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0x24
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x58881B4E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58881B50: je 0x58881c1b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B56: cmp dword ptr [esi + 0x6c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x6C
        __asm _emit 0x00
        // 0x58881B5A: jne 0x58881c1b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B60: mov ecx, dword ptr [esi + 0x298]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B66: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58881B68: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58881B6B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58881B6D: pop edi
        __asm _emit 0x5F
        // 0x58881B6E: pop esi
        __asm _emit 0x5E
        // 0x58881B6F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881B71: pop ebx
        __asm _emit 0x5B
        // 0x58881B72: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881B75: cmp eax, dword ptr [esi + 0x240]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B7B: jne 0x58881c1b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B81: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x58881B84: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58881B86: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58881B88: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58881B8A: add eax, 0x444
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881B8F: push eax
        __asm _emit 0x50
        // 0x58881B90: push 0x58996c38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x6C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58881B95: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58881B97: call dword ptr [0x5898c3b4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58881B9D: pop edi
        __asm _emit 0x5F
        // 0x58881B9E: pop esi
        __asm _emit 0x5E
        // 0x58881B9F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881BA1: pop ebx
        __asm _emit 0x5B
        // 0x58881BA2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881BA5: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58881BA8: jne 0x58881be5
        __asm _emit 0x75
        __asm _emit 0x3B
        // 0x58881BAA: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58881BAE: mov edx, 5
        __asm _emit 0xBA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881BB3: lea eax, [esi + 0x16c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881BB9: lea esi, [edx - 4]
        __asm _emit 0x8D
        __asm _emit 0x72
        __asm _emit 0xFC
        // 0x58881BBC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58881BC0: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58881BC2: cmp edi, dword ptr [eax - 0x18]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0xE8
        // 0x58881BC5: jne 0x58881bcd
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58881BC7: or word ptr [ecx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x71
        __asm _emit 0x24
        // 0x58881BCB: jmp 0x58881bd6
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x58881BCD: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881BD2: and word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x58881BD6: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58881BD9: sub edx, esi
        __asm _emit 0x2B
        __asm _emit 0xD6
        // 0x58881BDB: jne 0x58881bc0
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x58881BDD: pop edi
        __asm _emit 0x5F
        // 0x58881BDE: pop esi
        __asm _emit 0x5E
        // 0x58881BDF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881BE1: pop ebx
        __asm _emit 0x5B
        // 0x58881BE2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881BE5: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58881BE8: jne 0x58881c1b
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58881BEA: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58881BEE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881BF0: lea ecx, [esi + 0x154]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881BF6: cmp edx, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x11
        // 0x58881BF8: je 0x58881c0b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58881BFA: inc eax
        __asm _emit 0x40
        // 0x58881BFB: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x58881BFE: cmp eax, 5
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x05
        // 0x58881C01: jl 0x58881bf6
        __asm _emit 0x7C
        __asm _emit 0xF3
        // 0x58881C03: pop edi
        __asm _emit 0x5F
        // 0x58881C04: pop esi
        __asm _emit 0x5E
        // 0x58881C05: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881C07: pop ebx
        __asm _emit 0x5B
        // 0x58881C08: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58881C0B: mov eax, dword ptr [esi + eax*4 + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881C12: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58881C17: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58881C1B: pop edi
        __asm _emit 0x5F
        // 0x58881C1C: pop esi
        __asm _emit 0x5E
        // 0x58881C1D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58881C1F: pop ebx
        __asm _emit 0x5B
        // 0x58881C20: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
