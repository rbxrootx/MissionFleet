// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 198 bytes in 1 exact ranges.
// Source symbol alias: FUN_58753980.

// Ghidra body range 0x58753980..0x58753A46; 198 mapped bytes.
extern "C" __declspec(naked) void FUN_58753980_segment_00() {
    __asm {
        // 0x58753980: push ebx
        __asm _emit 0x53
        // 0x58753981: push ebp
        __asm _emit 0x55
        // 0x58753982: push esi
        __asm _emit 0x56
        // 0x58753983: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58753985: push edi
        __asm _emit 0x57
        // 0x58753986: mov edi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x58753989: cmp edi, dword ptr [ebp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x14
        // 0x5875398C: jbe 0x58753993
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5875398E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753993: mov esi, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x58753996: mov ebx, dword ptr [ebp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5D
        __asm _emit 0x14
        // 0x58753999: cmp dword ptr [ebp + 0x10], ebx
        __asm _emit 0x39
        __asm _emit 0x5D
        __asm _emit 0x10
        // 0x5875399C: jbe 0x587539a3
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x5875399E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587539A3: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x587539A6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587539A8: je 0x587539ae
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x587539AA: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x587539AC: je 0x587539b3
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x587539AE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587539B3: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587539B5: je 0x58753a3d
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587539BB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587539BD: jne 0x58753a10
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x587539BF: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587539C4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587539C6: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587539C9: jb 0x587539d0
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587539CB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587539D0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587539D4: cmp dword ptr [edi], eax
        __asm _emit 0x39
        __asm _emit 0x07
        // 0x587539D6: jne 0x587539f6
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587539D8: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587539DA: jne 0x58753a14
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x587539DC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587539E1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587539E3: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587539E6: jb 0x587539ed
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587539E8: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587539ED: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587539F1: cmp dword ptr [edi + 4], ecx
        __asm _emit 0x39
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x587539F4: je 0x58753a1c
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x587539F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587539F8: jne 0x58753a18
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x587539FA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587539FF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753A01: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x58753A04: jb 0x58753a0b
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753A06: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753A0B: add edi, 0x48
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x48
        // 0x58753A0E: jmp 0x58753996
        __asm _emit 0xEB
        __asm _emit 0x86
        // 0x58753A10: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753A12: jmp 0x587539c6
        __asm _emit 0xEB
        __asm _emit 0xB2
        // 0x58753A14: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753A16: jmp 0x587539e3
        __asm _emit 0xEB
        __asm _emit 0xCB
        // 0x58753A18: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58753A1A: jmp 0x58753a01
        __asm _emit 0xEB
        __asm _emit 0xE5
        // 0x58753A1C: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58753A1E: jne 0x58753a39
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58753A20: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753A25: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58753A28: jb 0x58753a2f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58753A2A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x92
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58753A2F: lea eax, [edi + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x2D
        // 0x58753A32: pop edi
        __asm _emit 0x5F
        // 0x58753A33: pop esi
        __asm _emit 0x5E
        // 0x58753A34: pop ebp
        __asm _emit 0x5D
        // 0x58753A35: pop ebx
        __asm _emit 0x5B
        // 0x58753A36: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58753A39: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x58753A3B: jmp 0x58753a25
        __asm _emit 0xEB
        __asm _emit 0xE8
        // 0x58753A3D: pop edi
        __asm _emit 0x5F
        // 0x58753A3E: pop esi
        __asm _emit 0x5E
        // 0x58753A3F: pop ebp
        __asm _emit 0x5D
        // 0x58753A40: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58753A42: pop ebx
        __asm _emit 0x5B
        // 0x58753A43: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
