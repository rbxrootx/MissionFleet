// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1714 bytes in 3 exact ranges.
// Source symbol alias: FUN_5883acd0.

// Ghidra body range 0x5883ACD0..0x5883AF0A; 570 mapped bytes.
extern "C" __declspec(naked) void FUN_5883acd0_segment_00() {
    __asm {
        // 0x5883ACD0: push ecx
        __asm _emit 0x51
        // 0x5883ACD1: push esi
        __asm _emit 0x56
        // 0x5883ACD2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5883ACD4: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5883ACD8: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ACDD: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5883ACE0: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ACE5: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5883ACE8: je 0x5883acff
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5883ACEA: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5883ACEE: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5883ACF1: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ACF6: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5883ACF9: jne 0x5883b38c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8D
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ACFF: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5883AD03: push ebx
        __asm _emit 0x53
        // 0x5883AD04: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AD09: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5883AD0C: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AD11: push ebp
        __asm _emit 0x55
        // 0x5883AD12: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5883AD15: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5883AD19: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AD1E: or word ptr [esi + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x5883AD22: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5883AD27: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AD2D: push edi
        __asm _emit 0x57
        // 0x5883AD2E: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883AD33: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xA8
        __asm _emit 0x6F
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883AD38: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AD3E: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883AD40: cmp dword ptr [0x58a0b4a0], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883AD46: jne 0x5883af74
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AD4C: cmp dword ptr [eax + 0x164], 0x72
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x72
        // 0x5883AD53: jle 0x5883ad67
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883AD55: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AD5B: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AD5D: je 0x5883ad67
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5883AD5F: mov eax, dword ptr [eax + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AD65: jmp 0x5883ad69
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883AD67: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883AD69: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AD6F: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883AD72: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AD74: je 0x5883ad9e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5883AD76: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5883AD79: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5883AD7C: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5883AD7F: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5883AD82: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5883AD85: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AD87: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5883AD8A: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5883AD8C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5883AD8F: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5883AD92: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5883AD95: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5883AD98: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5883AD9B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5883AD9E: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ADA4: cmp dword ptr [eax + 0x164], 0x71
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x71
        // 0x5883ADAB: jle 0x5883adbf
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883ADAD: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ADB3: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883ADB5: je 0x5883adbf
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5883ADB7: mov eax, dword ptr [eax + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ADBD: jmp 0x5883adc1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883ADBF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883ADC1: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ADC7: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883ADCA: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883ADCC: je 0x5883adf6
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5883ADCE: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5883ADD1: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5883ADD4: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5883ADD7: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5883ADDA: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5883ADDD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883ADDF: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5883ADE2: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5883ADE4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5883ADE7: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5883ADEA: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5883ADED: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5883ADF0: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5883ADF3: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5883ADF6: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883ADFC: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x5883ADFF: mov eax, dword ptr [esi + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE05: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883AE09: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE0F: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE14: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5883AE18: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE1E: mov byte ptr [esi + 0x2e4], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE25: cmp dword ptr [eax + 0x164], 0x5a
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x5A
        // 0x5883AE2C: jle 0x5883ae40
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883AE2E: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE34: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AE36: je 0x5883ae40
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5883AE38: mov eax, dword ptr [eax + 0x168]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE3E: jmp 0x5883ae42
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883AE40: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883AE42: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE48: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883AE4B: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AE4D: je 0x5883ae77
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5883AE4F: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5883AE52: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5883AE55: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5883AE58: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5883AE5B: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5883AE5E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AE60: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5883AE63: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5883AE65: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5883AE68: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5883AE6B: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5883AE6E: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5883AE71: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5883AE74: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5883AE77: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE7D: cmp dword ptr [eax + 0x164], 0x59
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x59
        // 0x5883AE84: jle 0x5883ae98
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883AE86: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE8C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AE8E: je 0x5883ae98
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5883AE90: mov eax, dword ptr [eax + 0x164]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AE96: jmp 0x5883ae9a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883AE98: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883AE9A: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AEA0: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883AEA3: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AEA5: je 0x5883aecf
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5883AEA7: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5883AEAA: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5883AEAD: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5883AEB0: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5883AEB3: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5883AEB6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AEB8: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5883AEBB: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5883AEBD: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5883AEC0: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5883AEC3: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5883AEC6: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5883AEC9: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5883AECC: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5883AECF: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AED5: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883AEDA: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x7E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883AEDF: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AEE5: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AEEA: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x7E
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883AEEF: lea ebx, [esi + 0x1a4]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AEF5: lea ebp, [esi + 0x17c]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AEFB: mov dword ptr [esp + 0x10], 5
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AF03: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AF08: jmp 0x5883af10
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x5883AF10..0x5883AF39; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_5883acd0_segment_01() {
    __asm {
        // 0x5883AF10: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5883AF13: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AF18: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5883AF1C: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5883AF1F: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5883AF22: jne 0x5883af10
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x5883AF24: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5883AF26: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x5883AF29: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AF2B: je 0x5883af65
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x5883AF2D: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883AF32: mov edi, 0x80
        __asm _emit 0xBF
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AF37: jmp 0x5883af40
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x5883AF40..0x5883B38F; 1103 mapped bytes.
extern "C" __declspec(naked) void FUN_5883acd0_segment_02() {
    __asm {
        // 0x5883AF40: lea ecx, [edi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8F
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5883AF46: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5883AF48: je 0x5883af5b
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5883AF4A: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x5883AF4C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5883AF4E: je 0x5883af5b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5883AF50: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5883AF52: inc eax
        __asm _emit 0x40
        // 0x5883AF53: inc edx
        __asm _emit 0x42
        // 0x5883AF54: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5883AF57: jne 0x5883af40
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5883AF59: jmp 0x5883af5f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5883AF5B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883AF5D: jne 0x5883af60
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5883AF5F: dec eax
        __asm _emit 0x48
        // 0x5883AF60: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AF63: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5883AF65: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x5883AF68: sub dword ptr [esp + 0x10], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        // 0x5883AF6D: jne 0x5883af03
        __asm _emit 0x75
        __asm _emit 0x94
        // 0x5883AF6F: jmp 0x5883b046
        __asm _emit 0xE9
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AF74: cmp dword ptr [eax + 0x164], 0x70
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x70
        // 0x5883AF7B: jle 0x5883af8f
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883AF7D: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AF83: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AF85: je 0x5883af8f
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5883AF87: mov eax, dword ptr [eax + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AF8D: jmp 0x5883af91
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883AF8F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883AF91: mov ecx, dword ptr [esi + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AF97: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883AF9A: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AF9C: je 0x5883afc6
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5883AF9E: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5883AFA1: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5883AFA4: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5883AFA7: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5883AFAA: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5883AFAD: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883AFAF: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5883AFB2: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5883AFB4: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5883AFB7: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5883AFBA: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5883AFBD: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5883AFC0: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5883AFC3: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5883AFC6: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AFCC: cmp dword ptr [eax + 0x164], 0x6f
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x6F
        // 0x5883AFD3: jle 0x5883afe7
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x5883AFD5: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AFDB: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AFDD: je 0x5883afe7
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5883AFDF: mov eax, dword ptr [eax + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AFE5: jmp 0x5883afe9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5883AFE7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883AFE9: mov ecx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883AFEF: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883AFF2: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5883AFF4: je 0x5883b01e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5883AFF6: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5883AFF9: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5883AFFC: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x5883AFFF: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x5883B002: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5883B005: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883B007: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5883B00A: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5883B00C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5883B00F: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5883B012: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5883B015: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5883B018: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5883B01B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5883B01E: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B024: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x5883B027: mov eax, dword ptr [esi + 0x140]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B02D: or word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x5883B031: mov eax, dword ptr [esi + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B037: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B03C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5883B040: mov byte ptr [esi + 0x2e4], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xE4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B046: cmp word ptr [0x58a0b4a8], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x03
        // 0x5883B04E: jne 0x5883b097
        __asm _emit 0x75
        __asm _emit 0x47
        // 0x5883B050: mov ecx, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B056: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B05B: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883B05E: mov edx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B064: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5883B067: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B06D: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x5883B070: mov edx, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B076: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5883B079: cmp dword ptr [0x58a0b4a0], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883B07F: jne 0x5883b08c
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5883B081: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B087: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5883B08A: jmp 0x5883b0d4
        __asm _emit 0xEB
        __asm _emit 0x48
        // 0x5883B08C: mov edx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B092: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5883B095: jmp 0x5883b0d4
        __asm _emit 0xEB
        __asm _emit 0x3D
        // 0x5883B097: mov eax, dword ptr [esi + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B09D: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5883B0A0: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B0A6: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x5883B0A9: mov edx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B0AF: mov dword ptr [edx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x50
        // 0x5883B0B2: mov eax, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B0B8: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5883B0BB: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B0C1: mov dword ptr [ecx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x50
        // 0x5883B0C4: mov ecx, dword ptr [esi + 0x240]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B0CA: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883B0CF: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x6C
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883B0D4: mov edx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883B0DA: mov eax, dword ptr [edx + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B0E0: movsx ecx, word ptr [eax + 0xf0]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x88
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B0E7: push ecx
        __asm _emit 0x51
        // 0x5883B0E8: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B0EE: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B0F3: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B0F9: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883B0FD: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0xD6
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B102: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B108: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xD6
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B10D: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B113: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xD6
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B118: lea eax, [esi + 0x1e8]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B11E: mov edx, 5
        __asm _emit 0xBA
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B123: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B128: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5883B12A: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x5883B12D: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x5883B130: mov dword ptr [ebx + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7B
        __asm _emit 0x50
        // 0x5883B133: jne 0x5883b128
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5883B135: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x5883B138: jne 0x5883b123
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x5883B13A: mov edx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B140: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5883B142: cmp dword ptr [edx + 0x64], edi
        __asm _emit 0x39
        __asm _emit 0x7A
        __asm _emit 0x64
        // 0x5883B145: jle 0x5883b242
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xF7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B14B: mov ebp, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883B151: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883B156: mov ecx, dword ptr [eax + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B15C: push ebx
        __asm _emit 0x53
        // 0x5883B15D: call 0x58848420
        __asm _emit 0xE8
        __asm _emit 0xBE
        __asm _emit 0xD2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B162: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5883B164: cmp word ptr [edi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B16C: jne 0x5883b17d
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5883B16E: mov ecx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x70
        // 0x5883B171: mov edx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x5883B174: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5883B179: push edi
        __asm _emit 0x57
        // 0x5883B17A: push edx
        __asm _emit 0x52
        // 0x5883B17B: jmp 0x5883b18a
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x5883B17D: mov eax, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x70
        // 0x5883B180: mov ecx, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x6C
        // 0x5883B183: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883B188: push edi
        __asm _emit 0x57
        // 0x5883B189: push ecx
        __asm _emit 0x51
        // 0x5883B18A: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B190: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0xD7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B195: movsx eax, word ptr [edi + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x87
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B19C: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5883B19F: ja 0x5883b1fd
        __asm _emit 0x77
        __asm _emit 0x5C
        // 0x5883B1A1: jmp dword ptr [eax*4 + 0x5883b390]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0xB3
        __asm _emit 0x83
        __asm _emit 0x58
        // 0x5883B1A8: push 0x777777
        __asm _emit 0x68
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x77
        __asm _emit 0x00
        // 0x5883B1AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B1AF: push 0x5899e1b0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0xE1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883B1B4: jmp 0x5883b1ec
        __asm _emit 0xEB
        __asm _emit 0x36
        // 0x5883B1B6: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883B1BB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B1BD: push 0x5899e270
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883B1C2: jmp 0x5883b1ec
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x5883B1C4: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883B1C9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B1CB: push 0x5899e24c
        __asm _emit 0x68
        __asm _emit 0x4C
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883B1D0: jmp 0x5883b1ec
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x5883B1D2: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883B1D7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B1D9: push 0x5899e228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883B1DE: jmp 0x5883b1ec
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x5883B1E0: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883B1E5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B1E7: push 0x5899e200
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0xE2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5883B1EC: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5883B1EE: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B1F4: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5883B1F7: push eax
        __asm _emit 0x50
        // 0x5883B1F8: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xD6
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B1FD: cmp word ptr [edi + 0x9e], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBF
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B205: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B20B: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883B210: jne 0x5883b220
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x5883B212: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5883B214: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883B219: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xD6
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B21E: jmp 0x5883b232
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5883B220: mov edx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x74
        // 0x5883B223: mov eax, dword ptr [edx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x6C
        // 0x5883B226: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B228: push eax
        __asm _emit 0x50
        // 0x5883B229: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xD6
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B22E: inc dword ptr [esp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883B232: mov ecx, dword ptr [esi + 0x1e0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B238: inc ebx
        __asm _emit 0x43
        // 0x5883B239: cmp ebx, dword ptr [ecx + 0x64]
        __asm _emit 0x3B
        __asm _emit 0x59
        __asm _emit 0x64
        // 0x5883B23C: jl 0x5883b151
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x0F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883B242: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5883B246: mov ecx, dword ptr [esi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B24C: push edx
        __asm _emit 0x52
        // 0x5883B24D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x0E
        __asm _emit 0xC1
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B252: mov eax, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B258: sub eax, dword ptr [esi + 0x228]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B25E: test eax, 0xfffffffc
        __asm _emit 0xA9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883B263: je 0x5883b332
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B269: mov ebp, dword ptr [esi + 0x228]
        __asm _emit 0x8B
        __asm _emit 0xAE
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B26F: cmp ebp, dword ptr [esi + 0x22c]
        __asm _emit 0x3B
        __asm _emit 0xAE
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B275: jbe 0x5883b27c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883B277: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B27C: mov edi, dword ptr [esi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B282: mov ebx, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B288: cmp dword ptr [esi + 0x228], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B28E: jbe 0x5883b295
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5883B290: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B295: mov eax, dword ptr [esi + 0x21c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B29B: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883B29D: je 0x5883b2a3
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5883B29F: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5883B2A1: je 0x5883b2a8
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5883B2A3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B2A8: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5883B2AA: je 0x5883b332
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B2B0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883B2B2: jne 0x5883b32a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B2B8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B2BD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883B2BF: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5883B2C2: jb 0x5883b2c9
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883B2C4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B2C9: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5883B2CC: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x5883B2D1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883B2D3: push ecx
        __asm _emit 0x51
        // 0x5883B2D4: mov ecx, dword ptr [esi + 0x210]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B2DA: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xD5
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B2DF: mov ecx, dword ptr [esi + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B2E5: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883B2EA: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5883B2EC: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883B2F1: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xDA
        __asm _emit 0xD5
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B2F6: mov ecx, dword ptr [esi + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B2FC: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5883B301: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5883B303: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5883B308: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xD5
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B30D: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5883B30F: jne 0x5883b32e
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5883B311: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B316: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5883B318: cmp ebp, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x68
        __asm _emit 0x10
        // 0x5883B31B: jb 0x5883b322
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x5883B31D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x19
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5883B322: add ebp, 4
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x04
        // 0x5883B325: jmp 0x5883b282
        __asm _emit 0xE9
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883B32A: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5883B32C: jmp 0x5883b2bf
        __asm _emit 0xEB
        __asm _emit 0x91
        // 0x5883B32E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5883B330: jmp 0x5883b318
        __asm _emit 0xEB
        __asm _emit 0xE6
        // 0x5883B332: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883B334: call 0x58839730
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5883B339: mov edx, dword ptr [esi + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B33F: sub edx, dword ptr [esi + 0x228]
        __asm _emit 0x2B
        __asm _emit 0x96
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B345: mov ecx, dword ptr [esi + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B34B: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5883B34E: push edx
        __asm _emit 0x52
        // 0x5883B34F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5883B354: mov dword ptr [esi + 0x2ec], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B35E: mov byte ptr [esi + 0x2e5], 1
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0xE5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5883B365: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883B36B: push 0x58a0b4a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883B370: call 0x587b9270
        __asm _emit 0xE8
        __asm _emit 0xFB
        __asm _emit 0xDE
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5883B375: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5883B37C: pop edi
        __asm _emit 0x5F
        // 0x5883B37D: pop ebp
        __asm _emit 0x5D
        // 0x5883B37E: pop ebx
        __asm _emit 0x5B
        // 0x5883B37F: jbe 0x5883b38c
        __asm _emit 0x76
        __asm _emit 0x0B
        // 0x5883B381: mov esi, dword ptr [esi + 0x2f8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883B387: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5883B38C: pop esi
        __asm _emit 0x5E
        // 0x5883B38D: pop ecx
        __asm _emit 0x59
        // 0x5883B38E: ret
        __asm _emit 0xC3
    }
}
