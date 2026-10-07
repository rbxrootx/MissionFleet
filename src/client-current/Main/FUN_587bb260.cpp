// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BB260 .. +0x2C bytes.
// Source symbol alias: FUN_587bb260.
extern "C" __declspec(naked) void FUN_587bb260() {
    __asm {
        // 0x587BB260: push esi
        __asm _emit 0x56
        // 0x587BB261: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BB263: cmp dword ptr [esi + 0x210], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB26A: jne 0x587bb28a
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587BB26C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB26E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB270: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB272: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB274: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB276: push 0x80011105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BB27B: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x59
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BB280: mov dword ptr [esi + 0x210], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB28A: pop esi
        __asm _emit 0x5E
        // 0x587BB28B: ret
        __asm _emit 0xC3
    }
}
