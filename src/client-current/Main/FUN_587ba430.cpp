// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA430 .. +0x1A bytes.
// Source symbol alias: FUN_587ba430.
extern "C" __declspec(naked) void FUN_587ba430() {
    __asm {
        // 0x587BA430: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587BA434: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA436: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA438: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA43A: push eax
        __asm _emit 0x50
        // 0x587BA43B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA43D: push 0x80010a02
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA442: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x68
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA447: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
