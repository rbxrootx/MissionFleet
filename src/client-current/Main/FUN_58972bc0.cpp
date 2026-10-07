// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 81 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972bc0.

// Ghidra body range 0x58972BC0..0x58972C11; 81 mapped bytes.
extern "C" __declspec(naked) void FUN_58972bc0_segment_00() {
    __asm {
        // 0x58972BC0: push ebx
        __asm _emit 0x53
        // 0x58972BC1: push esi
        __asm _emit 0x56
        // 0x58972BC2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58972BC4: push edi
        __asm _emit 0x57
        // 0x58972BC5: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58972BC8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58972BCA: je 0x58972c09
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x58972BCC: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58972BD0: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58972BD2: je 0x58972bf5
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x58972BD4: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58972BD7: jae 0x58972c09
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x58972BD9: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58972BDC: call 0x58973780
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972BE1: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58972BE4: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58972BE6: imul ecx, ebx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xCB
        // 0x58972BE9: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x58972BEB: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58972BED: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58972BEF: pop edi
        __asm _emit 0x5F
        // 0x58972BF0: pop esi
        __asm _emit 0x5E
        // 0x58972BF1: pop ebx
        __asm _emit 0x5B
        // 0x58972BF2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58972BF5: mov edi, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58972BF8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58972BFA: call 0x58973780
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972BFF: add eax, dword ptr [edi]
        __asm _emit 0x03
        __asm _emit 0x07
        // 0x58972C01: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58972C03: pop edi
        __asm _emit 0x5F
        // 0x58972C04: pop esi
        __asm _emit 0x5E
        // 0x58972C05: pop ebx
        __asm _emit 0x5B
        // 0x58972C06: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58972C09: pop edi
        __asm _emit 0x5F
        // 0x58972C0A: pop esi
        __asm _emit 0x5E
        // 0x58972C0B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58972C0D: pop ebx
        __asm _emit 0x5B
        // 0x58972C0E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
