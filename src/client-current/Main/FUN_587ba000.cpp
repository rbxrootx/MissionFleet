// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 29 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ba000.

// Ghidra body range 0x587BA000..0x587BA01D; 29 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba000_segment_00() {
    __asm {
        // 0x587BA000: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587BA004: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587BA008: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA00A: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587BA00C: push eax
        __asm _emit 0x50
        // 0x587BA00D: push edx
        __asm _emit 0x52
        // 0x587BA00E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA010: push 0x80013128
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA015: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x6C
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA01A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
