// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AF330 .. +0x19 bytes.
// Source symbol alias: FUN_587af330.
extern "C" __declspec(naked) void FUN_587af330() {
    __asm {
        // 0x587AF330: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587AF334: push eax
        __asm _emit 0x50
        // 0x587AF335: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587AF33A: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF33F: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587AF341: call 0x587abd70
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xCA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF346: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
