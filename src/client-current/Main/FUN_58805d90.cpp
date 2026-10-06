// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805D90 .. +0x2F bytes.
// Source symbol alias: FUN_58805d90.
extern "C" __declspec(naked) void FUN_58805d90() {
    __asm {
        // 0x58805D90: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805D96: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x58805D99: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805D9E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58805DA0: je 0x58805dbe
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58805DA2: cmp dword ptr [ecx + 0x6074], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x74
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805DA9: jne 0x58805db4
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58805DAB: cmp dword ptr [ecx + 0x608c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x8C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805DB2: je 0x58805dbc
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58805DB4: mov ecx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x78
        // 0x58805DB7: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58805DB9: jne 0x58805da2
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x58805DBB: ret
        __asm _emit 0xC3
        // 0x58805DBC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58805DBE: ret
        __asm _emit 0xC3
    }
}
