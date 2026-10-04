// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58743B80 .. +0x19 bytes.
// Source symbol alias: FUN_58743b80.
extern "C" __declspec(naked) void FUN_58743b80() {
    __asm {
        // 0x58743B80: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58743B84: push esi
        __asm _emit 0x56
        // 0x58743B85: push eax
        __asm _emit 0x50
        // 0x58743B86: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58743B88: call 0x58735360
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x17
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743B8D: mov dword ptr [esi], 0x5898cec4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC4
        __asm _emit 0xCE
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58743B93: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58743B95: pop esi
        __asm _emit 0x5E
        // 0x58743B96: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
