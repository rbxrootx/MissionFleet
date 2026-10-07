// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 29 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ba050.

// Ghidra body range 0x587BA050..0x587BA06D; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba050_segment_00() {
    __asm {
        // 0x587BA050: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587BA054: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587BA058: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA05A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA05C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA05E: push eax
        __asm _emit 0x50
        // 0x587BA05F: push edx
        __asm _emit 0x52
        // 0x587BA060: push 0x80013125
        __asm _emit 0x68
        __asm _emit 0x25
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA065: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x06
        __asm _emit 0x6C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA06A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
