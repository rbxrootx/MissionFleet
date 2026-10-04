// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA450 .. +0x1A bytes.
// Source symbol alias: FUN_587ba450.
extern "C" __declspec(naked) void FUN_587ba450() {
    __asm {
        // 0x587BA450: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587BA454: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA456: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA458: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA45A: push eax
        __asm _emit 0x50
        // 0x587BA45B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA45D: push 0x80010a04
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA462: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA467: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
