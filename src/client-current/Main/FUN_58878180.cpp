// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 169 bytes in 2 exact ranges.
// Source symbol alias: FUN_58878180.

// Ghidra body range 0x58878180..0x5887820D; 141 mapped bytes.
extern "C" __declspec(naked) void FUN_58878180_segment_00() {
    __asm {
        // 0x58878180: push edi
        __asm _emit 0x57
        // 0x58878181: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58878183: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58878187: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x58878189: je 0x58878226
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887818F: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x58878193: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58878198: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x5887819B: mov eax, 0x100
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588781A0: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588781A3: je 0x588781b6
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588781A5: mov cx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x24
        // 0x588781A9: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588781AC: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588781B1: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588781B4: jne 0x58878203
        __asm _emit 0x75
        __asm _emit 0x4D
        // 0x588781B6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588781B8: call 0x587b60a0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xDE
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x588781BD: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588781C0: cmp ecx, dword ptr [edi + 0x6c]
        __asm _emit 0x3B
        __asm _emit 0x4F
        __asm _emit 0x6C
        // 0x588781C3: jne 0x58878203
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x588781C5: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x588781C9: mov eax, 0x1f00
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588781CE: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588781D1: mov ecx, 0x200
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588781D6: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588781D9: jne 0x588781e9
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x588781DB: or word ptr [edi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4F
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588781E0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588781E2: call 0x58877bc0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588781E7: jmp 0x58878203
        __asm _emit 0xEB
        __asm _emit 0x1A
        // 0x588781E9: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x588781ED: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x588781F0: mov ecx, 0x500
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588781F5: cmp dx, cx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xD1
        // 0x588781F8: jne 0x58878203
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588781FA: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588781FF: and word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x57
        __asm _emit 0x24
        // 0x58878203: mov ecx, dword ptr [edi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x3C
        // 0x58878206: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58878208: je 0x58878226
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5887820A: push esi
        __asm _emit 0x56
        // 0x5887820B: jmp 0x58878210
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x58878210..0x5887822C; 28 mapped bytes.
extern "C" __declspec(naked) void FUN_58878180_segment_01() {
    __asm {
        // 0x58878210: mov esi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x38
        // 0x58878213: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58878215: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58878218: cmp esi, dword ptr [edi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x77
        __asm _emit 0x3C
        // 0x5887821B: je 0x58878228
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5887821D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5887821F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58878221: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58878223: jne 0x58878210
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x58878225: pop esi
        __asm _emit 0x5E
        // 0x58878226: pop edi
        __asm _emit 0x5F
        // 0x58878227: ret
        __asm _emit 0xC3
        // 0x58878228: pop esi
        __asm _emit 0x5E
        // 0x58878229: pop edi
        __asm _emit 0x5F
        // 0x5887822A: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}

// This alignment instruction is skipped by the branch at 0x5887820B and is
// omitted from both fresh Ghidra body exports; retain its original bytes.
extern "C" __declspec(naked) void FUN_58878180_skipped_alignment() {
    __asm {
        // 0x5887820D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
    }
}
