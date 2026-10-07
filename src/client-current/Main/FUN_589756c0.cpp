// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 56 bytes in 1 exact ranges.
// Source symbol alias: FUN_589756c0.

// Ghidra body range 0x589756C0..0x589756F8; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_589756c0_segment_00() {
    __asm {
        // 0x589756C0: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589756C4: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x589756C6: jg 0x589756d6
        __asm _emit 0x7F
        __asm _emit 0x0E
        // 0x589756C8: mov eax, 0x1388
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589756CD: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589756D2: cdq
        __asm _emit 0x99
        // 0x589756D3: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x589756D5: ret
        __asm _emit 0xC3
        // 0x589756D6: cmp ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x64
        // 0x589756D9: jle 0x589756ea
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x589756DB: mov ecx, 0x64
        __asm _emit 0xB9
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589756E0: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589756E5: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x589756E7: shl eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE0
        // 0x589756E9: ret
        __asm _emit 0xC3
        // 0x589756EA: cmp ecx, 0x32
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x32
        // 0x589756ED: jge 0x589756e0
        __asm _emit 0x7D
        __asm _emit 0xF1
        // 0x589756EF: mov eax, 0x1388
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589756F4: cdq
        __asm _emit 0x99
        // 0x589756F5: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x589756F7: ret
        __asm _emit 0xC3
    }
}
