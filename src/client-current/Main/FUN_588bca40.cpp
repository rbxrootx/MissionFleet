// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 88 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bca40.

// Ghidra body range 0x588BCA40..0x588BCA98; 88 mapped bytes.
extern "C" __declspec(naked) void FUN_588bca40_segment_00() {
    __asm {
        // 0x588BCA40: push ebp
        __asm _emit 0x55
        // 0x588BCA41: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BCA43: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BCA47: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BCA49: cmp cl, byte ptr [ebp + 0xad]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xAD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCA4F: jae 0x588bca81
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x588BCA51: movzx edx, byte ptr [ebp + 0xac]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCA58: push ebx
        __asm _emit 0x53
        // 0x588BCA59: push esi
        __asm _emit 0x56
        // 0x588BCA5A: push edi
        __asm _emit 0x57
        // 0x588BCA5B: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BCA5D: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BCA5F: jle 0x588bca7c
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BCA61: lea esi, [ebp + 0xb0]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCA67: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BCA6A: je 0x588bca74
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BCA6C: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BCA6F: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BCA71: je 0x588bca85
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BCA73: inc edi
        __asm _emit 0x47
        // 0x588BCA74: inc eax
        __asm _emit 0x40
        // 0x588BCA75: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BCA78: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BCA7A: jl 0x588bca67
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BCA7C: pop edi
        __asm _emit 0x5F
        // 0x588BCA7D: pop esi
        __asm _emit 0x5E
        // 0x588BCA7E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BCA80: pop ebx
        __asm _emit 0x5B
        // 0x588BCA81: pop ebp
        __asm _emit 0x5D
        // 0x588BCA82: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCA85: mov ecx, dword ptr [ebp + 0x3d8]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0xD8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BCA8B: push eax
        __asm _emit 0x50
        // 0x588BCA8C: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0xB6
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BCA91: pop edi
        __asm _emit 0x5F
        // 0x588BCA92: pop esi
        __asm _emit 0x5E
        // 0x588BCA93: pop ebx
        __asm _emit 0x5B
        // 0x588BCA94: pop ebp
        __asm _emit 0x5D
        // 0x588BCA95: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
