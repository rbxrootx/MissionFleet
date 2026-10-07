// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 119 bytes in 1 exact ranges.
// Source symbol alias: FUN_588bb4a0.

// Ghidra body range 0x588BB4A0..0x588BB517; 119 mapped bytes.
extern "C" __declspec(naked) void FUN_588bb4a0_segment_00() {
    __asm {
        // 0x588BB4A0: push ebp
        __asm _emit 0x55
        // 0x588BB4A1: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x588BB4A3: mov cl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588BB4A7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB4A9: cmp cl, byte ptr [ebp + 0x13a5]
        __asm _emit 0x3A
        __asm _emit 0x8D
        __asm _emit 0xA5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB4AF: jae 0x588bb4e1
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x588BB4B1: movzx edx, byte ptr [ebp + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x95
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB4B8: push ebx
        __asm _emit 0x53
        // 0x588BB4B9: push esi
        __asm _emit 0x56
        // 0x588BB4BA: push edi
        __asm _emit 0x57
        // 0x588BB4BB: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588BB4BD: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588BB4BF: jle 0x588bb4dc
        __asm _emit 0x7E
        __asm _emit 0x1B
        // 0x588BB4C1: lea esi, [ebp + 0xfa4]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0xA4
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB4C7: cmp dword ptr [esi], 0
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x00
        // 0x588BB4CA: je 0x588bb4d4
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x588BB4CC: movzx ebx, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD9
        // 0x588BB4CF: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x588BB4D1: je 0x588bb4e5
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588BB4D3: inc edi
        __asm _emit 0x47
        // 0x588BB4D4: inc eax
        __asm _emit 0x40
        // 0x588BB4D5: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588BB4D8: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588BB4DA: jl 0x588bb4c7
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x588BB4DC: pop edi
        __asm _emit 0x5F
        // 0x588BB4DD: pop esi
        __asm _emit 0x5E
        // 0x588BB4DE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588BB4E0: pop ebx
        __asm _emit 0x5B
        // 0x588BB4E1: pop ebp
        __asm _emit 0x5D
        // 0x588BB4E2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588BB4E5: mov eax, dword ptr [ebp + eax*4 + 0xda4]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0xA4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB4EC: movzx ecx, word ptr [eax + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x48
        __asm _emit 0x5E
        // 0x588BB4F0: mov eax, dword ptr [eax + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB4F6: and ecx, 0xf
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x588BB4F9: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x588BB4FB: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x588BB4FE: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x588BB500: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588BB502: lea eax, [eax + edx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xD0
        // 0x588BB505: imul eax, eax, 0xe0
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588BB50B: pop edi
        __asm _emit 0x5F
        // 0x588BB50C: pop esi
        __asm _emit 0x5E
        // 0x588BB50D: pop ebx
        __asm _emit 0x5B
        // 0x588BB50E: add eax, 0x589cfca8
        __asm _emit 0x05
        __asm _emit 0xA8
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588BB513: pop ebp
        __asm _emit 0x5D
        // 0x588BB514: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
