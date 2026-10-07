// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BAF40 .. +0x2C bytes.
// Source symbol alias: FUN_587baf40.
extern "C" __declspec(naked) void FUN_587baf40() {
    __asm {
        // 0x587BAF40: push esi
        __asm _emit 0x56
        // 0x587BAF41: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BAF43: cmp dword ptr [esi + 0x1f4], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAF4A: jne 0x587baf6a
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587BAF4C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAF4E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAF50: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAF52: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAF54: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAF56: push 0x80011105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BAF5B: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x5D
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BAF60: mov dword ptr [esi + 0x1f4], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BAF6A: pop esi
        __asm _emit 0x5E
        // 0x587BAF6B: ret
        __asm _emit 0xC3
    }
}
