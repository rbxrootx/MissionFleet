// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B99F0 .. +0x1E bytes.
extern "C" __declspec(naked) void FUN_587b99f0() {
    __asm {
        // 0x587B99F0: movzx eax, byte ptr [esp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B99F5: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B99F9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99FB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99FD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B99FF: push eax
        __asm _emit 0x50
        // 0x587B9A00: push edx
        __asm _emit 0x52
        // 0x587B9A01: push 0x8001f009
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0xF0
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9A06: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x72
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B9A0B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
