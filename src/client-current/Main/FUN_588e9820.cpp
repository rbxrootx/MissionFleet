// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E9820 .. +0x2B bytes.
// Source symbol alias: FUN_588e9820.
extern "C" __declspec(naked) void FUN_588e9820() {
    __asm {
        // 0x588E9820: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E9824: push esi
        __asm _emit 0x56
        // 0x588E9825: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588E9827: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E982D: push eax
        __asm _emit 0x50
        // 0x588E982E: call 0x58778be0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0xF3
        __asm _emit 0xE8
        __asm _emit 0xFF
        // 0x588E9833: cmp dword ptr [esp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588E9838: mov dword ptr [esi + 0xcc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E983E: je 0x588e9847
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x588E9840: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588E9842: call 0x588e8570
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xED
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E9847: pop esi
        __asm _emit 0x5E
        // 0x588E9848: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
