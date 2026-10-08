// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 66 bytes in 1 exact ranges.
// Source symbol alias: FUN_58877ad0.

// Ghidra body range 0x58877AD0..0x58877B12; 66 mapped bytes.
extern "C" __declspec(naked) void FUN_58877ad0_segment_00() {
    __asm {
        // 0x58877AD0: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58877AD4: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877AD9: cmp ecx, 9
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x09
        // 0x58877ADC: ja 0x58877b0f
        __asm _emit 0x77
        __asm _emit 0x31
        // 0x58877ADE: jmp dword ptr [ecx*4 + 0x58877b14]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x7B
        __asm _emit 0x87
        __asm _emit 0x58
        // 0x58877AE5: mov eax, 4
        __asm _emit 0xB8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877AEA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58877AED: mov eax, 3
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877AF2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58877AF5: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877AFA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58877AFD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58877AFF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58877B02: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877B07: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58877B0A: mov eax, 6
        __asm _emit 0xB8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877B0F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}

// Preserve the two mapped bytes between the function body and its switch table.
extern "C" __declspec(naked) void FUN_58877ad0_pre_switch_table_alignment() {
    __asm {
        // 0x58877B12: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
    }
}
