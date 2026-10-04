// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58793DA0 .. +0x54 bytes.
// Source symbol alias: FUN_58793da0.
extern "C" __declspec(naked) void FUN_58793da0() {
    __asm {
        // 0x58793DA0: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58793DA5: push esi
        __asm _emit 0x56
        // 0x58793DA6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58793DA8: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58793DAB: mov dword ptr [esi + 0x5c], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793DB2: je 0x58793dbd
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58793DB4: mov dword ptr [esi + 0x58], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793DBB: jmp 0x58793dc4
        __asm _emit 0xEB
        __asm _emit 0x07
        // 0x58793DBD: mov dword ptr [esi + 0x58], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58793DC4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58793DC6: je 0x58793df0
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58793DC8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58793DCA: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58793DCD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58793DCF: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58793DD5: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58793DD8: mov ecx, 0x12c
        __asm _emit 0xB9
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793DDD: sub ecx, dword ptr [esi + 8]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x58793DE0: push edx
        __asm _emit 0x52
        // 0x58793DE1: push ecx
        __asm _emit 0x51
        // 0x58793DE2: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x58793DE5: sub eax, 0x190
        __asm _emit 0x2D
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58793DEA: push eax
        __asm _emit 0x50
        // 0x58793DEB: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58793DF0: pop esi
        __asm _emit 0x5E
        // 0x58793DF1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
