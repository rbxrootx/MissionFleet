// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA200 .. +0x2C bytes.
// Source symbol alias: FUN_587ba200.
extern "C" __declspec(naked) void FUN_587ba200() {
    __asm {
        // 0x587BA200: push esi
        __asm _emit 0x56
        // 0x587BA201: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BA203: cmp dword ptr [esi + 0x208], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA20A: jne 0x587ba22a
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587BA20C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA20E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA210: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA212: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA214: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA216: push 0x80011105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA21B: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x6A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA220: mov dword ptr [esi + 0x208], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA22A: pop esi
        __asm _emit 0x5E
        // 0x587BA22B: ret
        __asm _emit 0xC3
    }
}
