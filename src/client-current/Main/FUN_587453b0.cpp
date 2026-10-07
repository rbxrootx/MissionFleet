// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 46 bytes in 1 exact ranges.
// Source symbol alias: FUN_587453b0.

// Ghidra body range 0x587453B0..0x587453DE; 46 mapped bytes.
extern "C" __declspec(naked) void FUN_587453b0_segment_00() {
    __asm {
        // 0x587453B0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587453B4: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x587453B7: lea eax, [ecx + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x41
        __asm _emit 0x4C
        // 0x587453BA: mov edx, 2
        __asm _emit 0xBA
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587453BF: push edi
        __asm _emit 0x57
        // 0x587453C0: cmp word ptr [eax - 0x34], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0xCC
        __asm _emit 0x01
        // 0x587453C5: jne 0x587453d2
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x587453C7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587453C9: mov word ptr [eax], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x587453CC: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x587453CF: mov dword ptr [eax - 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0xF8
        // 0x587453D2: add eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x38
        // 0x587453D5: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x587453D8: jne 0x587453c0
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x587453DA: pop edi
        __asm _emit 0x5F
        // 0x587453DB: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
