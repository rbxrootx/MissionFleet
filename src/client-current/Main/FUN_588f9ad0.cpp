// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 41 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f9ad0.

// Ghidra body range 0x588F9AD0..0x588F9AF9; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_588f9ad0_segment_00() {
    __asm {
        // 0x588F9AD0: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588F9AD4: lea eax, [ecx - 1]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0xFF
        // 0x588F9AD7: cmp eax, 0x17
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x17
        // 0x588F9ADA: ja 0x588f9af3
        __asm _emit 0x77
        __asm _emit 0x17
        // 0x588F9ADC: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F9AE0: lea edx, [eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0xFF
        // 0x588F9AE3: cmp edx, 0x63
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x63
        // 0x588F9AE6: ja 0x588f9af3
        __asm _emit 0x77
        __asm _emit 0x0B
        // 0x588F9AE8: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x588F9AEA: cmp ecx, 0xc
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x0C
        // 0x588F9AED: jg 0x588f9af6
        __asm _emit 0x7F
        __asm _emit 0x07
        // 0x588F9AEF: dec eax
        __asm _emit 0x48
        // 0x588F9AF0: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F9AF3: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x588F9AF6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
