// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BB2C0 .. +0x2C bytes.
// Source symbol alias: FUN_587bb2c0.
extern "C" __declspec(naked) void FUN_587bb2c0() {
    __asm {
        // 0x587BB2C0: push esi
        __asm _emit 0x56
        // 0x587BB2C1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BB2C3: cmp dword ptr [esi + 0x218], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB2CA: jne 0x587bb2ea
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587BB2CC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB2CE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB2D0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB2D2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB2D4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB2D6: push 0x80011105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BB2DB: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0x59
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BB2E0: mov dword ptr [esi + 0x218], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB2EA: pop esi
        __asm _emit 0x5E
        // 0x587BB2EB: ret
        __asm _emit 0xC3
    }
}
