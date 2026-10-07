// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 87 bytes in 1 exact ranges.
// Source symbol alias: FUN_58752290.

// Ghidra body range 0x58752290..0x587522E7; 87 mapped bytes.
extern "C" __declspec(naked) void FUN_58752290_segment_00() {
    __asm {
        // 0x58752290: push ebx
        __asm _emit 0x53
        // 0x58752291: push ebp
        __asm _emit 0x55
        // 0x58752292: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58752294: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58752296: cmp dword ptr [ebx + 0xa0], ebp
        __asm _emit 0x39
        __asm _emit 0xAB
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875229C: jle 0x587522e4
        __asm _emit 0x7E
        __asm _emit 0x46
        // 0x5875229E: mov ecx, dword ptr [ebx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587522A4: cmp ecx, ebp
        __asm _emit 0x3B
        __asm _emit 0xCD
        // 0x587522A6: je 0x587522e4
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x587522A8: push esi
        __asm _emit 0x56
        // 0x587522A9: push edi
        __asm _emit 0x57
        // 0x587522AA: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587522AC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587522B0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587522B2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587522B4: mov esi, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x587522B7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587522B9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587522BB: inc edi
        __asm _emit 0x47
        // 0x587522BC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587522BE: cmp esi, ebp
        __asm _emit 0x3B
        __asm _emit 0xF5
        // 0x587522C0: je 0x587522ca
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587522C2: cmp edi, dword ptr [ebx + 0xa0]
        __asm _emit 0x3B
        __asm _emit 0xBB
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587522C8: jne 0x587522b0
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x587522CA: pop edi
        __asm _emit 0x5F
        // 0x587522CB: mov dword ptr [ebx + 0x98], ebp
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587522D1: mov dword ptr [ebx + 0x94], ebp
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587522D7: mov dword ptr [ebx + 0x90], ebp
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587522DD: mov dword ptr [ebx + 0xa0], ebp
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587522E3: pop esi
        __asm _emit 0x5E
        // 0x587522E4: pop ebp
        __asm _emit 0x5D
        // 0x587522E5: pop ebx
        __asm _emit 0x5B
        // 0x587522E6: ret
        __asm _emit 0xC3
    }
}
