// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 172 bytes in 1 exact ranges.
// Source symbol alias: FUN_58785200.

// Ghidra body range 0x58785200..0x587852AC; 172 mapped bytes.
extern "C" __declspec(naked) void FUN_58785200_segment_00() {
    __asm {
        // 0x58785200: push esi
        __asm _emit 0x56
        // 0x58785201: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58785203: push edi
        __asm _emit 0x57
        // 0x58785204: mov edi, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x58785207: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58785209: je 0x587852a9
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878520F: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58785212: movzx eax, word ptr [eax + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x80
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785219: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5878521C: cdq
        __asm _emit 0x99
        // 0x5878521D: idiv dword ptr [0x58a244c8]
        __asm _emit 0xF7
        __asm _emit 0x3D
        __asm _emit 0xC8
        __asm _emit 0x44
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58785223: movzx ecx, word ptr [edi + 0x9e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8F
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878522A: add ecx, 5
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x05
        // 0x5878522D: cdq
        __asm _emit 0x99
        // 0x5878522E: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x58785230: movsx edx, byte ptr [edi + 0x99]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x97
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785237: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58785239: mov dword ptr [esi + 0x80], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785243: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58785245: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878524A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5878524C: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5878524F: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x58785254: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58785256: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58785259: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x5878525B: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x5878525E: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58785260: mov edx, 0x2710
        __asm _emit 0xBA
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785265: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x58785267: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58785269: mov dword ptr [esi + 0x84], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878526F: cmp ax, word ptr [esi + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58785273: jae 0x587852a9
        __asm _emit 0x73
        __asm _emit 0x34
        // 0x58785275: push ebx
        __asm _emit 0x53
        // 0x58785276: mov ebx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x58785279: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785280: push edi
        __asm _emit 0x57
        // 0x58785281: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58785283: call 0x587847d0
        __asm _emit 0xE8
        __asm _emit 0x48
        __asm _emit 0xF5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58785288: mov dword ptr [ebx + edi*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0xBB
        // 0x5878528B: mov ebx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x5878528E: mov eax, dword ptr [ebx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBB
        // 0x58785291: cmp dword ptr [esi + 0x80], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58785297: ja 0x5878529f
        __asm _emit 0x77
        __asm _emit 0x06
        // 0x58785299: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878529F: movzx ecx, word ptr [esi + 0x7c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x587852A3: inc edi
        __asm _emit 0x47
        // 0x587852A4: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587852A6: jl 0x58785280
        __asm _emit 0x7C
        __asm _emit 0xD8
        // 0x587852A8: pop ebx
        __asm _emit 0x5B
        // 0x587852A9: pop edi
        __asm _emit 0x5F
        // 0x587852AA: pop esi
        __asm _emit 0x5E
        // 0x587852AB: ret
        __asm _emit 0xC3
    }
}
