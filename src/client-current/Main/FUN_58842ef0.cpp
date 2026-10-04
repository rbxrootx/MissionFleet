// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra indexed 0x65 bytes; mapped function includes the 3-byte epilogue
// through 0x58842F57, before INT3 alignment padding.
// Source symbol alias: FUN_58842ef0.
extern "C" __declspec(naked) void FUN_58842ef0() {
    __asm {
        // 0x58842EF0: push ebx
        __asm _emit 0x53
        // 0x58842EF1: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58842EF3: cmp word ptr [ebx + 0xf8], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842EFB: jle 0x58842f56
        __asm _emit 0x7E
        __asm _emit 0x59
        // 0x58842EFD: mov ecx, dword ptr [ebx + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842F03: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58842F05: je 0x58842f56
        __asm _emit 0x74
        __asm _emit 0x4F
        // 0x58842F07: push esi
        __asm _emit 0x56
        // 0x58842F08: push edi
        __asm _emit 0x57
        // 0x58842F09: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58842F0B: jmp 0x58842f10
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58842F0D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58842F10: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58842F12: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58842F14: mov esi, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x58842F17: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58842F19: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58842F1B: inc edi
        __asm _emit 0x47
        // 0x58842F1C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58842F1E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58842F20: je 0x58842f2d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58842F22: movsx eax, word ptr [ebx + 0xf8]
        __asm _emit 0x0F
        __asm _emit 0xBF
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842F29: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58842F2B: jne 0x58842f10
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x58842F2D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58842F2F: pop edi
        __asm _emit 0x5F
        // 0x58842F30: mov dword ptr [ebx + 0x140], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842F3A: mov dword ptr [ebx + 0x13c], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842F44: mov dword ptr [ebx + 0x138], 0
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842F4E: mov word ptr [ebx + 0xf8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58842F55: pop esi
        __asm _emit 0x5E
        // 0x58842F56: pop ebx
        __asm _emit 0x5B
        // 0x58842F57: ret
        __asm _emit 0xC3
    }
}
