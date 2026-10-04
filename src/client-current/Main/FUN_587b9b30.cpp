// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9B30 .. +0x28 bytes.
// Source symbol alias: FUN_587b9b30.
extern "C" __declspec(naked) void FUN_587b9b30() {
    __asm {
        // 0x587B9B30: movzx eax, word ptr [esp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B9B35: movzx edx, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B9B3A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9B3C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9B3E: shl eax, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x10
        // 0x587B9B41: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9B43: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x587B9B45: push eax
        __asm _emit 0x50
        // 0x587B9B46: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B9B4A: push eax
        __asm _emit 0x50
        // 0x587B9B4B: push 0x80015000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9B50: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x71
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9B55: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
