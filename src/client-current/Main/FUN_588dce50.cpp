// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DCE50 .. +0x3B bytes.
// Source symbol alias: FUN_588dce50.
extern "C" __declspec(naked) void FUN_588dce50() {
    __asm {
        // 0x588DCE50: mov edx, dword ptr [ecx + 0x126c]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x6C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCE56: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DCE5A: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DCE60: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x588DCE62: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DCE68: mov dword ptr [ecx + 0x126c], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x6C
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DCE6E: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCE74: cmp dword ptr [edx + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x588DCE77: jne 0x588dce88
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x588DCE79: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DCE7F: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588DCE83: jmp 0x587e7920
        __asm _emit 0xE9
        __asm _emit 0x98
        __asm _emit 0xAA
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588DCE88: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
