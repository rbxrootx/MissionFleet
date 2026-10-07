// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 77 bytes in 1 exact ranges.
// Source symbol alias: FUN_5873bf40.

// Ghidra body range 0x5873BF40..0x5873BF8D; 77 mapped bytes.
extern "C" __declspec(naked) void FUN_5873bf40_segment_00() {
    __asm {
        // 0x5873BF40: push esi
        __asm _emit 0x56
        // 0x5873BF41: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873BF43: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5873BF45: push edi
        __asm _emit 0x57
        // 0x5873BF46: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873BF48: jne 0x5873bf55
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5873BF4A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x0D
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873BF4F: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5873BF51: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873BF53: je 0x5873bf59
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5873BF55: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873BF57: jmp 0x5873bf5b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873BF59: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5873BF5B: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873BF5F: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5873BF62: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xFF
        // 0x5873BF64: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xFF
        // 0x5873BF66: add edi, edi
        __asm _emit 0x03
        __asm _emit 0xFF
        // 0x5873BF68: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5873BF6A: cmp ecx, dword ptr [edx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x4A
        __asm _emit 0x10
        // 0x5873BF6D: ja 0x5873bf7e
        __asm _emit 0x77
        __asm _emit 0x0F
        // 0x5873BF6F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873BF71: je 0x5873bf77
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5873BF73: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5873BF75: jmp 0x5873bf79
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873BF77: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873BF79: cmp ecx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5873BF7C: jae 0x5873bf83
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x5873BF7E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x0C
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5873BF83: add dword ptr [esi + 4], edi
        __asm _emit 0x01
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x5873BF86: pop edi
        __asm _emit 0x5F
        // 0x5873BF87: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5873BF89: pop esi
        __asm _emit 0x5E
        // 0x5873BF8A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
