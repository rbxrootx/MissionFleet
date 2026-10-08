// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 83 bytes in 1 exact ranges.
// Source symbol alias: FUN_58877310.

// Ghidra body range 0x58877310..0x58877363; 83 mapped bytes.
extern "C" __declspec(naked) void FUN_58877310_segment_00() {
    __asm {
        // 0x58877310: cmp dword ptr [ecx + 0xa4], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877317: je 0x58877362
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x58877319: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887731F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58877321: je 0x58877362
        __asm _emit 0x74
        __asm _emit 0x3F
        // 0x58877323: push ebx
        __asm _emit 0x53
        // 0x58877324: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58877326: push esi
        __asm _emit 0x56
        // 0x58877327: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x5887732A: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877330: mov bl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x18
        // 0x58877332: inc eax
        __asm _emit 0x40
        // 0x58877333: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x58877335: jne 0x58877330
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58877337: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x58877339: lea esi, [edx + 0x545]
        __asm _emit 0x8D
        __asm _emit 0xB2
        __asm _emit 0x45
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887733F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58877341: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x58877343: pop esi
        __asm _emit 0x5E
        // 0x58877344: pop ebx
        __asm _emit 0x5B
        // 0x58877345: jb 0x58877350
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x58877347: add edx, 0x47
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x47
        // 0x5887734A: mov dword ptr [ecx + 0xa8], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877350: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877356: mov ecx, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887735C: push edx
        __asm _emit 0x52
        // 0x5887735D: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x97
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58877362: ret
        __asm _emit 0xC3
    }
}
