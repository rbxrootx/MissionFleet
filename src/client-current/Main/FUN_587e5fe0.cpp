// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E5FE0 .. +0x21 bytes.
// Source symbol alias: FUN_587e5fe0.
extern "C" __declspec(naked) void FUN_587e5fe0() {
    __asm {
        // 0x587E5FE0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587E5FE4: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x587E5FE7: jne 0x587e5ffe
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x587E5FE9: mov eax, dword ptr [ecx + 0x10bc0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5FEF: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587E5FF4: mov dword ptr [ecx + 0x10bc4], 0x64
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5FFE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
