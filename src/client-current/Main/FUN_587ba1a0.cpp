// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA1A0 .. +0x2C bytes.
// Source symbol alias: FUN_587ba1a0.
extern "C" __declspec(naked) void FUN_587ba1a0() {
    __asm {
        // 0x587BA1A0: push esi
        __asm _emit 0x56
        // 0x587BA1A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BA1A3: cmp dword ptr [esi + 0x1f8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA1AA: jne 0x587ba1ca
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587BA1AC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA1AE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA1B0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA1B2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA1B4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA1B6: push 0x80011105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA1BB: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x6A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA1C0: mov dword ptr [esi + 0x1f8], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA1CA: pop esi
        __asm _emit 0x5E
        // 0x587BA1CB: ret
        __asm _emit 0xC3
    }
}
