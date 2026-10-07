// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA170 .. +0x2C bytes.
// Source symbol alias: FUN_587ba170.
extern "C" __declspec(naked) void FUN_587ba170() {
    __asm {
        // 0x587BA170: push esi
        __asm _emit 0x56
        // 0x587BA171: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BA173: cmp dword ptr [esi + 0x204], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA17A: jne 0x587ba19a
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587BA17C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA17E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA180: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA182: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA184: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA186: push 0x80011105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA18B: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x6A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA190: mov dword ptr [esi + 0x204], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA19A: pop esi
        __asm _emit 0x5E
        // 0x587BA19B: ret
        __asm _emit 0xC3
    }
}
