// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA1D0 .. +0x2C bytes.
// Source symbol alias: FUN_587ba1d0.
extern "C" __declspec(naked) void FUN_587ba1d0() {
    __asm {
        // 0x587BA1D0: push esi
        __asm _emit 0x56
        // 0x587BA1D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BA1D3: cmp dword ptr [esi + 0x200], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA1DA: jne 0x587ba1fa
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587BA1DC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA1DE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA1E0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA1E2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA1E4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA1E6: push 0x80011105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA1EB: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x6A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA1F0: mov dword ptr [esi + 0x200], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA1FA: pop esi
        __asm _emit 0x5E
        // 0x587BA1FB: ret
        __asm _emit 0xC3
    }
}
