// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 72 bytes in 1 exact ranges.
// Source symbol alias: FUN_588772c0.

// Ghidra body range 0x588772C0..0x58877308; 72 mapped bytes.
extern "C" __declspec(naked) void FUN_588772c0_segment_00() {
    __asm {
        // 0x588772C0: mov edx, dword ptr [ecx + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588772C6: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588772C8: je 0x58877307
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588772CA: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588772D0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588772D2: je 0x58877307
        __asm _emit 0x74
        __asm _emit 0x33
        // 0x588772D4: push esi
        __asm _emit 0x56
        // 0x588772D5: lea esi, [eax - 0x47]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0xB9
        // 0x588772D8: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x588772DA: pop esi
        __asm _emit 0x5E
        // 0x588772DB: ja 0x588772f3
        __asm _emit 0x77
        __asm _emit 0x16
        // 0x588772DD: add eax, -0x47
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xB9
        // 0x588772E0: mov dword ptr [ecx + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588772E6: mov ecx, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588772EC: push eax
        __asm _emit 0x50
        // 0x588772ED: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x8E
        __asm _emit 0x97
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588772F2: ret
        __asm _emit 0xC3
        // 0x588772F3: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588772F5: mov dword ptr [ecx + 0xa8], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588772FB: mov ecx, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877301: push eax
        __asm _emit 0x50
        // 0x58877302: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x97
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58877307: ret
        __asm _emit 0xC3
    }
}
