// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D1810 .. +0x1F bytes.
// Source symbol alias: FUN_587d1810.
extern "C" __declspec(naked) void FUN_587d1810() {
    __asm {
        // 0x587D1810: cmp dword ptr [ecx + 0xfc], 0xc8
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D181A: jne 0x587d1824
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x587D181C: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x587D181E: call 0x587d0f90
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1823: ret
        __asm _emit 0xC3
        // 0x587D1824: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1829: call 0x587d0f90
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D182E: ret
        __asm _emit 0xC3
    }
}
