// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 275 bytes in 1 exact ranges.
// Source symbol alias: FUN_588cbaf0.

// Ghidra body range 0x588CBAF0..0x588CBC03; 275 mapped bytes.
extern "C" __declspec(naked) void FUN_588cbaf0_segment_00() {
    __asm {
        // 0x588CBAF0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CBAF4: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588CBAF8: push esi
        __asm _emit 0x56
        // 0x588CBAF9: push eax
        __asm _emit 0x50
        // 0x588CBAFA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CBAFE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CBB00: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CBB04: push ecx
        __asm _emit 0x51
        // 0x588CBB05: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CBB09: push edx
        __asm _emit 0x52
        // 0x588CBB0A: push eax
        __asm _emit 0x50
        // 0x588CBB0B: push ecx
        __asm _emit 0x51
        // 0x588CBB0C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CBB0E: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBB13: mov dword ptr [esi], 0x589a0c98
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x98
        __asm _emit 0x0C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CBB19: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CBB1E: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBB25: jle 0x588cbb3a
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588CBB27: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBB2E: je 0x588cbb3a
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588CBB30: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBB36: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588CBB38: jmp 0x588cbb3c
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CBB3A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CBB3C: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588CBB3F: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CBB42: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CBB44: je 0x588cbb6e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CBB46: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CBB49: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CBB4C: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CBB4F: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CBB52: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CBB55: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CBB57: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CBB5A: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CBB5C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CBB5F: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CBB62: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CBB65: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CBB68: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CBB6B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CBB6E: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CBB73: cmp dword ptr [eax + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588CBB7A: jle 0x588cbb90
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588CBB7C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBB83: je 0x588cbb90
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588CBB85: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBB8B: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588CBB8E: jmp 0x588cbb92
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CBB90: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CBB92: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588CBB95: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CBB98: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CBB9A: je 0x588cbbc4
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CBB9C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CBB9F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CBBA2: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CBBA5: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CBBA8: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CBBAB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CBBAD: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CBBB0: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CBBB2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CBBB5: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CBBB8: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CBBBB: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CBBBE: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CBBC1: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CBBC4: mov eax, dword ptr [0x58a24764]
        __asm _emit 0xA1
        __asm _emit 0x64
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CBBC9: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBBD0: jle 0x588cbbf2
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x588CBBD2: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBBD9: je 0x588cbbf2
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588CBBDB: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBBE1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588CBBE3: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x588CBBE6: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588CBBE9: mov dword ptr [edx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x74
        // 0x588CBBEC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588CBBEE: pop esi
        __asm _emit 0x5E
        // 0x588CBBEF: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588CBBF2: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x588CBBF5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CBBF7: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588CBBFA: mov dword ptr [edx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x74
        // 0x588CBBFD: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588CBBFF: pop esi
        __asm _emit 0x5E
        // 0x588CBC00: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
