// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 355 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889eac0.

// Ghidra body range 0x5889EAC0..0x5889EC23; 355 mapped bytes.
extern "C" __declspec(naked) void FUN_5889eac0_segment_00() {
    __asm {
        // 0x5889EAC0: push esi
        __asm _emit 0x56
        // 0x5889EAC1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889EAC5: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5889EAC8: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5889EACA: cmp eax, 0xe5
        __asm _emit 0x3D
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EACF: jne 0x5889ec05
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EAD5: movsx eax, word ptr [esi + 0xe]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x46
        __asm _emit 0x0E
        // 0x5889EAD9: and eax, 0xff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EADE: add eax, -0x10
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF0
        // 0x5889EAE1: cmp eax, 0x29
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x29
        // 0x5889EAE4: ja 0x5889ec07
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EAEA: jmp dword ptr [eax*4 + 0x5889ec24]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xEC
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5889EAF1: mov edx, 0x41
        __asm _emit 0xBA
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EAF6: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EAFB: mov edx, 0x42
        __asm _emit 0xBA
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB00: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB05: mov edx, 0x43
        __asm _emit 0xBA
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB0A: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB0F: mov edx, 0x44
        __asm _emit 0xBA
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB14: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0xEE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB19: mov edx, 0x45
        __asm _emit 0xBA
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB1E: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB23: mov edx, 0x46
        __asm _emit 0xBA
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB28: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB2D: mov edx, 0x47
        __asm _emit 0xBA
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB32: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB37: mov edx, 0x48
        __asm _emit 0xBA
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB3C: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB41: mov edx, 0x49
        __asm _emit 0xBA
        __asm _emit 0x49
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB46: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB4B: mov edx, 0x4a
        __asm _emit 0xBA
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB50: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0xB2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB55: mov edx, 0x4b
        __asm _emit 0xBA
        __asm _emit 0x4B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB5A: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB5F: mov edx, 0x4c
        __asm _emit 0xBA
        __asm _emit 0x4C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB64: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB69: mov edx, 0x4d
        __asm _emit 0xBA
        __asm _emit 0x4D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB6E: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB73: mov edx, 0x4e
        __asm _emit 0xBA
        __asm _emit 0x4E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB78: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB7D: mov edx, 0x4f
        __asm _emit 0xBA
        __asm _emit 0x4F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB82: jmp 0x5889ec07
        __asm _emit 0xE9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB87: mov edx, 0x50
        __asm _emit 0xBA
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB8C: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x79
        // 0x5889EB8E: mov edx, 0x51
        __asm _emit 0xBA
        __asm _emit 0x51
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB93: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x72
        // 0x5889EB95: mov edx, 0x52
        __asm _emit 0xBA
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EB9A: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x6B
        // 0x5889EB9C: mov edx, 0x53
        __asm _emit 0xBA
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBA1: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x64
        // 0x5889EBA3: mov edx, 0x54
        __asm _emit 0xBA
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBA8: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x5D
        // 0x5889EBAA: mov edx, 0x55
        __asm _emit 0xBA
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBAF: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x56
        // 0x5889EBB1: mov edx, 0x56
        __asm _emit 0xBA
        __asm _emit 0x56
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBB6: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x4F
        // 0x5889EBB8: mov edx, 0x57
        __asm _emit 0xBA
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBBD: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x48
        // 0x5889EBBF: mov edx, 0x58
        __asm _emit 0xBA
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBC4: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x41
        // 0x5889EBC6: mov edx, 0x59
        __asm _emit 0xBA
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBCB: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x3A
        // 0x5889EBCD: mov edx, 0x5a
        __asm _emit 0xBA
        __asm _emit 0x5A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBD2: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x33
        // 0x5889EBD4: mov edx, 0x20
        __asm _emit 0xBA
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBD9: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x2C
        // 0x5889EBDB: mov edx, 0xdc
        __asm _emit 0xBA
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBE0: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x25
        // 0x5889EBE2: mov edx, 0xba
        __asm _emit 0xBA
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBE7: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5889EBE9: mov edx, 0xde
        __asm _emit 0xBA
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBEE: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x17
        // 0x5889EBF0: mov edx, 0xbc
        __asm _emit 0xBA
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBF5: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x10
        // 0x5889EBF7: mov edx, 0xbe
        __asm _emit 0xBA
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EBFC: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5889EBFE: mov edx, 0xbf
        __asm _emit 0xBA
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EC03: jmp 0x5889ec07
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5889EC05: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5889EC07: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5889EC09: add ecx, 0x150
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EC0F: pop esi
        __asm _emit 0x5E
        // 0x5889EC10: cmp dword ptr [ecx], edx
        __asm _emit 0x39
        __asm _emit 0x11
        // 0x5889EC12: je 0x5889ec20
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5889EC14: inc eax
        __asm _emit 0x40
        // 0x5889EC15: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5889EC18: cmp eax, 0x1f
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x5889EC1B: jl 0x5889ec10
        __asm _emit 0x7C
        __asm _emit 0xF3
        // 0x5889EC1D: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5889EC20: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
