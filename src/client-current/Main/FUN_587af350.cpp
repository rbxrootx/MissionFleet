// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AF350 .. +0x1E bytes.
// Source symbol alias: FUN_587af350.
extern "C" __declspec(naked) void FUN_587af350() {
    __asm {
        // 0x587AF350: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587AF354: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587AF358: push eax
        __asm _emit 0x50
        // 0x587AF359: push edx
        __asm _emit 0x52
        // 0x587AF35A: push 0xf4241
        __asm _emit 0x68
        __asm _emit 0x41
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x587AF35F: call 0x587aee40
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF364: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587AF366: call 0x587ad0a0
        __asm _emit 0xE8
        __asm _emit 0x35
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587AF36B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
