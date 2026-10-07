// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BB230 .. +0x2C bytes.
// Source symbol alias: FUN_587bb230.
extern "C" __declspec(naked) void FUN_587bb230() {
    __asm {
        // 0x587BB230: push esi
        __asm _emit 0x56
        // 0x587BB231: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BB233: cmp dword ptr [esi + 0x20c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB23A: jne 0x587bb25a
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587BB23C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB23E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB240: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB242: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB244: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BB246: push 0x80011105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BB24B: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x5A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BB250: mov dword ptr [esi + 0x20c], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BB25A: pop esi
        __asm _emit 0x5E
        // 0x587BB25B: ret
        __asm _emit 0xC3
    }
}
