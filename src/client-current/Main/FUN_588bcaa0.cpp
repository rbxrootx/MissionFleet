// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 88 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bcaa0.

// Ghidra body range 0x588BCAA0..0x588BCAF8; 88 mapped bytes.
extern "C" __declspec(naked) void FUN_588bcaa0_segment_00() {
    __asm {
        // 0x588BCAA0: push ebp
        __asm _emit 0x55
        // 0x588BCAA1: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BCAA3: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BCAA7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BCAA9: cmp cl, byte ptr [ebp + 0xad]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCAAF: jae 0x588bcae1
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x588BCAB1: movzx edx, byte ptr [ebp + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCAB8: push ebx
        __asm _emit 0x53
        // 0x588BCAB9: push esi
        __asm _emit 0x56
        // 0x588BCABA: push edi
        __asm _emit 0x57
        // 0x588BCABB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BCABD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BCABF: jle 0x588bcadc
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BCAC1: lea esi, [ebp + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCAC7: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BCACA: je 0x588bcad4
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BCACC: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BCACF: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BCAD1: je 0x588bcae5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BCAD3: inc edi
        __asm _emit 0x47
        // 0x588BCAD4: inc eax
        __asm _emit 0x40
        // 0x588BCAD5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BCAD8: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BCADA: jl 0x588bcac7
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BCADC: pop edi
        __asm _emit 0x5F
        // 0x588BCADD: pop esi
        __asm _emit 0x5E
        // 0x588BCADE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BCAE0: pop ebx
        __asm _emit 0x5B
        // 0x588BCAE1: pop ebp
        __asm _emit 0x5D
        // 0x588BCAE2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCAE5: mov ecx, dword ptr [ebp + 0x3d4]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCAEB: push eax
        __asm _emit 0x50
        // 0x588BCAEC: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0xB6
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCAF1: pop edi
        __asm _emit 0x5F
        // 0x588BCAF2: pop esi
        __asm _emit 0x5E
        // 0x588BCAF3: pop ebx
        __asm _emit 0x5B
        // 0x588BCAF4: pop ebp
        __asm _emit 0x5D
        // 0x588BCAF5: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
