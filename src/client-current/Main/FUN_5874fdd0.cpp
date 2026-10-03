// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874FDD0 .. +0x119 bytes.
extern "C" __declspec(naked) void FUN_5874fdd0() {
    __asm {
        // 0x5874FDD0: push esi
        __asm _emit 0x56
        // 0x5874FDD1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5874FDD3: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5874FDD6: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5874FDD9: jne 0x5874fde7
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5874FDDB: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5874FDDE: mov dword ptr [eax + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FDE5: jmp 0x5874fe3b
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x5874FDE7: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5874FDEA: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FDF0: jle 0x5874fe07
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5874FDF2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FDF4: jl 0x5874fe07
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x5874FDF6: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FDFC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874FDFE: je 0x5874fe07
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5874FE00: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5874FE03: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5874FE05: jmp 0x5874fe09
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874FE07: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874FE09: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5874FE0C: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5874FE0F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FE11: je 0x5874fe3b
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874FE13: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5874FE16: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5874FE19: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5874FE1C: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5874FE1F: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5874FE22: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874FE24: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5874FE27: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5874FE29: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5874FE2C: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5874FE2F: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874FE32: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5874FE35: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874FE38: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5874FE3B: mov eax, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FE41: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5874FE44: jne 0x5874fe52
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5874FE46: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5874FE49: mov dword ptr [ecx + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FE50: jmp 0x5874fea6
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x5874FE52: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x5874FE55: cmp dword ptr [ecx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FE5B: jle 0x5874fe72
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5874FE5D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FE5F: jl 0x5874fe72
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x5874FE61: mov ecx, dword ptr [ecx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FE67: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874FE69: je 0x5874fe72
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5874FE6B: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5874FE6E: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x5874FE70: jmp 0x5874fe74
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874FE72: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874FE74: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5874FE77: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5874FE7A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FE7C: je 0x5874fea6
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874FE7E: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x5874FE81: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5874FE84: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5874FE87: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5874FE8A: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x5874FE8D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5874FE8F: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5874FE92: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5874FE94: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5874FE97: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5874FE9A: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874FE9D: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5874FEA0: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874FEA3: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5874FEA6: cmp dword ptr [esi + 0xb4], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5874FEAD: je 0x5874fec3
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5874FEAF: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5874FEB2: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FEB9: mov edx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x58
        // 0x5874FEBC: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FEC3: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5874FEC6: mov dword ptr [esi + 0x9c], 4
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FED0: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5874FED5: push eax
        __asm _emit 0x50
        // 0x5874FED6: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0x7A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5874FEDB: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5874FEDE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5874FEE0: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5874FEE3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5874FEE5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5874FEE7: pop esi
        __asm _emit 0x5E
        // 0x5874FEE8: ret
        __asm _emit 0xC3
    }
}
