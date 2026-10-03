// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58815C80 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_58815c80() {
    __asm {
        // 0x58815C80: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815C86: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815C8B: cmp word ptr [eax + 0x88], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815C92: jbe 0x58815c9d
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58815C94: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58815C96: mov word ptr [eax + 0x88], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815C9D: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CA3: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CA8: cmp word ptr [eax + 0x8a], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CAF: jbe 0x58815cba
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58815CB1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58815CB3: mov word ptr [eax + 0x8a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CBA: mov eax, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CC0: mov edx, 0xff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CC5: cmp word ptr [eax + 0x8e], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x90
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CCC: jbe 0x58815cd7
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58815CCE: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58815CD0: mov word ptr [eax + 0x8e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CD7: mov ecx, dword ptr [ecx + 0x198]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CDD: mov eax, 0xff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CE2: cmp word ptr [ecx + 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CE9: jbe 0x58815cf4
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58815CEB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58815CED: mov word ptr [ecx + 0x8c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58815CF4: ret
        __asm _emit 0xC3
    }
}
