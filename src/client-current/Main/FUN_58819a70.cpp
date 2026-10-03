// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58819A70 .. +0x145 bytes.
extern "C" __declspec(naked) void FUN_58819a70() {
    __asm {
        // 0x58819A70: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58819A75: push esi
        __asm _emit 0x56
        // 0x58819A76: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58819A78: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58819A7B: je 0x58819af5
        __asm _emit 0x74
        __asm _emit 0x78
        // 0x58819A7D: cmp dword ptr [eax + 0x164], 8
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x08
        // 0x58819A84: jle 0x58819a95
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x58819A86: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819A8C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819A8E: je 0x58819a95
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58819A90: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x58819A93: jmp 0x58819a97
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819A95: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819A97: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58819A9A: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58819A9D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819A9F: je 0x58819ac9
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58819AA1: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58819AA4: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58819AA7: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58819AAA: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58819AAD: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58819AB0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58819AB2: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58819AB5: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58819AB7: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58819ABA: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58819ABD: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58819AC0: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58819AC3: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58819AC6: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58819AC9: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58819ACC: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58819AD1: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x92
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58819AD6: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58819AD9: cmp dword ptr [eax + 0x164], 7
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x58819AE0: jle 0x58819b6f
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819AE6: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819AEC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819AEE: je 0x58819b6f
        __asm _emit 0x74
        __asm _emit 0x7F
        // 0x58819AF0: mov eax, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x1C
        // 0x58819AF3: jmp 0x58819b71
        __asm _emit 0xEB
        __asm _emit 0x7C
        // 0x58819AF5: cmp dword ptr [eax + 0x164], 0x2c
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2C
        // 0x58819AFC: jle 0x58819b10
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58819AFE: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819B04: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819B06: je 0x58819b10
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58819B08: mov eax, dword ptr [eax + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819B0E: jmp 0x58819b12
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819B10: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819B12: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58819B15: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58819B18: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819B1A: je 0x58819b44
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58819B1C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58819B1F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58819B22: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58819B25: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58819B28: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58819B2B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58819B2D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58819B30: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58819B32: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58819B35: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58819B38: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58819B3B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58819B3E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58819B41: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58819B44: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58819B47: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58819B4C: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x91
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58819B51: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x58819B54: cmp dword ptr [eax + 0x164], 0x2b
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x2B
        // 0x58819B5B: jle 0x58819b6f
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58819B5D: mov eax, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819B63: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819B65: je 0x58819b6f
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58819B67: mov eax, dword ptr [eax + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819B6D: jmp 0x58819b71
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58819B6F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58819B71: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58819B74: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58819B77: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58819B79: je 0x58819ba4
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x58819B7B: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58819B7E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58819B81: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58819B84: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58819B87: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58819B8A: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58819B8D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58819B90: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58819B92: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58819B95: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58819B98: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58819B9B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58819B9E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58819BA1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58819BA4: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58819BA7: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58819BAC: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0x91
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58819BB1: pop esi
        __asm _emit 0x5E
        // 0x58819BB2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
