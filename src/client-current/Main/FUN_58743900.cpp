// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 87 bytes in 1 exact ranges.
// Source symbol alias: FUN_58743900.

// Ghidra body range 0x58743900..0x58743957; 87 mapped bytes.
extern "C" __declspec(naked) void FUN_58743900_segment_00() {
    __asm {
        // 0x58743900: push ebx
        __asm _emit 0x53
        // 0x58743901: push edi
        __asm _emit 0x57
        // 0x58743902: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58743904: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58743906: cmp dword ptr [edi + 8], edx
        __asm _emit 0x39
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x58743909: jle 0x5874392c
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x5874390B: lea eax, [edi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x5874390E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58743910: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58743912: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58743914: jle 0x58743923
        __asm _emit 0x7E
        __asm _emit 0x0D
        // 0x58743916: add ecx, -1
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0xFF
        // 0x58743919: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x5874391B: jne 0x58743923
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5874391D: mov dword ptr [eax], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58743923: inc edx
        __asm _emit 0x42
        // 0x58743924: add eax, 0x38
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x38
        // 0x58743927: cmp edx, dword ptr [edi + 8]
        __asm _emit 0x3B
        __asm _emit 0x57
        __asm _emit 0x08
        // 0x5874392A: jl 0x58743910
        __asm _emit 0x7C
        __asm _emit 0xE4
        // 0x5874392C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5874392E: cmp dword ptr [edi + 8], ebx
        __asm _emit 0x39
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x58743931: jle 0x58743954
        __asm _emit 0x7E
        __asm _emit 0x21
        // 0x58743933: push esi
        __asm _emit 0x56
        // 0x58743934: lea esi, [edi + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x40
        // 0x58743937: cmp dword ptr [esi - 0x24], -1
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0xDC
        __asm _emit 0xFF
        // 0x5874393B: jne 0x5874394a
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x5874393D: mov eax, dword ptr [esi - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xD8
        // 0x58743940: add dword ptr [esi], eax
        __asm _emit 0x01
        __asm _emit 0x06
        // 0x58743942: push ebx
        __asm _emit 0x53
        // 0x58743943: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58743945: call 0x58743860
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874394A: inc ebx
        __asm _emit 0x43
        // 0x5874394B: add esi, 0x38
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x38
        // 0x5874394E: cmp ebx, dword ptr [edi + 8]
        __asm _emit 0x3B
        __asm _emit 0x5F
        __asm _emit 0x08
        // 0x58743951: jl 0x58743937
        __asm _emit 0x7C
        __asm _emit 0xE4
        // 0x58743953: pop esi
        __asm _emit 0x5E
        // 0x58743954: pop edi
        __asm _emit 0x5F
        // 0x58743955: pop ebx
        __asm _emit 0x5B
        // 0x58743956: ret
        __asm _emit 0xC3
    }
}
