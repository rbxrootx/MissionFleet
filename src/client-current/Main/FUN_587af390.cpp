// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AF390 .. +0x1E bytes.
// Source symbol alias: FUN_587af390.
extern "C" __declspec(naked) void FUN_587af390() {
    __asm {
        // 0x587AF390: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587AF394: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587AF398: push eax
        __asm _emit 0x50
        // 0x587AF399: push edx
        __asm _emit 0x52
        // 0x587AF39A: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587AF39F: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF3A4: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587AF3A6: call 0x587ab9d0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xC6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF3AB: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
