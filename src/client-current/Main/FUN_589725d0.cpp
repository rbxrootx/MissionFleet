// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 30 bytes in 1 exact ranges.
// Source symbol alias: FUN_589725d0.

// Ghidra body range 0x589725D0..0x589725EE; 30 mapped bytes.
extern "C" __declspec(naked) void FUN_589725d0_segment_00() {
    __asm {
        // 0x589725D0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589725D4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589725D6: jne 0x589725d9
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x589725D8: ret
        __asm _emit 0xC3
        // 0x589725D9: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x589725DC: jne 0x589725df
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x589725DE: ret
        __asm _emit 0xC3
        // 0x589725DF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x589725E1: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x589725E4: setne cl
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC1
        // 0x589725E7: dec ecx
        __asm _emit 0x49
        // 0x589725E8: and ecx, 2
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x02
        // 0x589725EB: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x589725ED: ret
        __asm _emit 0xC3
    }
}
