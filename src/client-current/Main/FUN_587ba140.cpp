// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA140 .. +0x2C bytes.
// Source symbol alias: FUN_587ba140.
extern "C" __declspec(naked) void FUN_587ba140() {
    __asm {
        // 0x587BA140: push esi
        __asm _emit 0x56
        // 0x587BA141: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BA143: cmp dword ptr [esi + 0x1fc], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA14A: jne 0x587ba16a
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587BA14C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA14E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA150: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA152: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA154: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA156: push 0x80011105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA15B: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x6B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA160: mov dword ptr [esi + 0x1fc], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA16A: pop esi
        __asm _emit 0x5E
        // 0x587BA16B: ret
        __asm _emit 0xC3
    }
}
