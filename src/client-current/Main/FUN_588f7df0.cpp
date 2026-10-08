// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 12 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f7df0.

// Ghidra body range 0x588F7DF0..0x588F7DFC; 12 mapped bytes.
extern "C" __declspec(naked) void FUN_588f7df0_segment_00() {
    __asm {
        // 0x588F7DF0: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7DF6: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x588F7DFB: ret
        __asm _emit 0xC3
    }
}
