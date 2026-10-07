// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BB290 .. +0x2C bytes.
// Source symbol alias: FUN_587bb290.
extern "C" __declspec(naked) void FUN_587bb290() {
    __asm {
        // 0x587BB290: push esi
        __asm _emit 0x56
        // 0x587BB291: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BB293: cmp dword ptr [esi + 0x214], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB29A: jne 0x587bb2ba
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587BB29C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB29E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB2A0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB2A2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB2A4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB2A6: push 0x80011105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BB2AB: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x59
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BB2B0: mov dword ptr [esi + 0x214], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB2BA: pop esi
        __asm _emit 0x5E
        // 0x587BB2BB: ret
        __asm _emit 0xC3
    }
}
