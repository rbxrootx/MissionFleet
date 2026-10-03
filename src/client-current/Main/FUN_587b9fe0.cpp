// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9FE0 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_587b9fe0() {
    __asm {
        // 0x587B9FE0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B9FE4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9FE6: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587B9FE8: push eax
        __asm _emit 0x50
        // 0x587B9FE9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9FEB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9FED: push 0x80013127
        __asm _emit 0x68
        __asm _emit 0x27
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9FF2: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x6C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9FF7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
