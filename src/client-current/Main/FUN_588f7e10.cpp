// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 19 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f7e10.

// Ghidra body range 0x588F7E10..0x588F7E23; 19 mapped bytes.
extern "C" __declspec(naked) void FUN_588f7e10_segment_00() {
    __asm {
        // 0x588F7E10: mov eax, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7E16: mov cl, byte ptr [eax + 0x24]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F7E19: and cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x588F7E1C: cmp cl, 0xf
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x0F
        // 0x588F7E1F: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x588F7E22: ret
        __asm _emit 0xC3
    }
}
