// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 144 bytes in 1 exact ranges.
// Source symbol alias: FUN_588facd0.

// Ghidra body range 0x588FACD0..0x588FAD60; 144 mapped bytes.
extern "C" __declspec(naked) void FUN_588facd0_segment_00() {
    __asm {
        // 0x588FACD0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x588FACD3: push esi
        __asm _emit 0x56
        // 0x588FACD4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FACD6: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x588FACD9: push edi
        __asm _emit 0x57
        // 0x588FACDA: mov edi, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x588FACDD: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x588FACDF: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FACE1: jbe 0x588face8
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x588FACE3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0x1F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FACE8: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x588FACEB: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FACEF: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FACF3: mov dword ptr [esp + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FACF7: call 0x588faab0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FACFC: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x588FACFF: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x588FAD01: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588FAD04: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588FAD07: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588FAD09: jne 0x588fad14
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x588FAD0B: push edx
        __asm _emit 0x52
        // 0x588FAD0C: push eax
        __asm _emit 0x50
        // 0x588FAD0D: call 0x588f7d60
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xD0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FAD12: jmp 0x588fad38
        __asm _emit 0xEB
        __asm _emit 0x24
        // 0x588FAD14: movzx edx, byte ptr [ecx + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x51
        __asm _emit 0x6A
        // 0x588FAD18: movzx eax, byte ptr [ecx + 0x6b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x41
        __asm _emit 0x6B
        // 0x588FAD1C: push ebx
        __asm _emit 0x53
        // 0x588FAD1D: movzx ebx, byte ptr [edi + 0x6b]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x5F
        __asm _emit 0x6B
        // 0x588FAD21: push ebp
        __asm _emit 0x55
        // 0x588FAD22: movzx ebp, byte ptr [edi + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x6F
        __asm _emit 0x6A
        // 0x588FAD26: push edx
        __asm _emit 0x52
        // 0x588FAD27: push eax
        __asm _emit 0x50
        // 0x588FAD28: call 0x588f7d60
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xD0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FAD2D: push ebp
        __asm _emit 0x55
        // 0x588FAD2E: push ebx
        __asm _emit 0x53
        // 0x588FAD2F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FAD31: call 0x588f7d60
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xD0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FAD36: pop ebp
        __asm _emit 0x5D
        // 0x588FAD37: pop ebx
        __asm _emit 0x5B
        // 0x588FAD38: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x588FAD3B: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FAD3D: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588FAD3F: je 0x588fad5a
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588FAD41: inc dword ptr [esi + 0x1c]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x588FAD44: mov ecx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x588FAD47: cmp dword ptr [esi + 0x18], ecx
        __asm _emit 0x39
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x588FAD4A: ja 0x588fad4f
        __asm _emit 0x77
        __asm _emit 0x03
        // 0x588FAD4C: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x588FAD4F: dec eax
        __asm _emit 0x48
        // 0x588FAD50: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x588FAD53: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588FAD55: jne 0x588fad5a
        __asm _emit 0x75
        __asm _emit 0x03
        // 0x588FAD57: mov dword ptr [esi + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x588FAD5A: pop edi
        __asm _emit 0x5F
        // 0x588FAD5B: pop esi
        __asm _emit 0x5E
        // 0x588FAD5C: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x588FAD5F: ret
        __asm _emit 0xC3
    }
}
