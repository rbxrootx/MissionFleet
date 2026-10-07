// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 88 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bc9e0.

// Ghidra body range 0x588BC9E0..0x588BCA38; 88 mapped bytes.
extern "C" __declspec(naked) void FUN_588bc9e0_segment_00() {
    __asm {
        // 0x588BC9E0: push ebp
        __asm _emit 0x55
        // 0x588BC9E1: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BC9E3: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BC9E7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BC9E9: cmp cl, byte ptr [ebp + 0xad]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC9EF: jae 0x588bca21
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x588BC9F1: movzx edx, byte ptr [ebp + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BC9F8: push ebx
        __asm _emit 0x53
        // 0x588BC9F9: push esi
        __asm _emit 0x56
        // 0x588BC9FA: push edi
        __asm _emit 0x57
        // 0x588BC9FB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BC9FD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BC9FF: jle 0x588bca1c
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BCA01: lea esi, [ebp + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCA07: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BCA0A: je 0x588bca14
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BCA0C: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BCA0F: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BCA11: je 0x588bca25
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BCA13: inc edi
        __asm _emit 0x47
        // 0x588BCA14: inc eax
        __asm _emit 0x40
        // 0x588BCA15: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BCA18: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BCA1A: jl 0x588bca07
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BCA1C: pop edi
        __asm _emit 0x5F
        // 0x588BCA1D: pop esi
        __asm _emit 0x5E
        // 0x588BCA1E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BCA20: pop ebx
        __asm _emit 0x5B
        // 0x588BCA21: pop ebp
        __asm _emit 0x5D
        // 0x588BCA22: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCA25: mov ecx, dword ptr [ebp + 0x3d8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCA2B: push eax
        __asm _emit 0x50
        // 0x588BCA2C: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xB6
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCA31: pop edi
        __asm _emit 0x5F
        // 0x588BCA32: pop esi
        __asm _emit 0x5E
        // 0x588BCA33: pop ebx
        __asm _emit 0x5B
        // 0x588BCA34: pop ebp
        __asm _emit 0x5D
        // 0x588BCA35: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
