// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 237 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fdc00.

// Ghidra body range 0x588FDC00..0x588FDCED; 237 mapped bytes.
extern "C" __declspec(naked) void FUN_588fdc00_segment_00() {
    __asm {
        // 0x588FDC00: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FDC02: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FDC07: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDC0D: push eax
        __asm _emit 0x50
        // 0x588FDC0E: push ecx
        __asm _emit 0x51
        // 0x588FDC0F: push ebx
        __asm _emit 0x53
        // 0x588FDC10: push ebp
        __asm _emit 0x55
        // 0x588FDC11: push esi
        __asm _emit 0x56
        // 0x588FDC12: push edi
        __asm _emit 0x57
        // 0x588FDC13: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FDC18: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FDC1A: push eax
        __asm _emit 0x50
        // 0x588FDC1B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FDC1F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDC25: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588FDC27: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FDC2B: mov dword ptr [edi], 0x589a233c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x3C
        __asm _emit 0x23
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FDC31: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588FDC33: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588FDC37: lea esi, [edi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDC3D: lea ebp, [ebx + 0xa]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x0A
        // 0x588FDC40: mov ecx, dword ptr [esi - 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xD8
        // 0x588FDC43: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FDC45: je 0x588fdc52
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588FDC47: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FDC49: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FDC4B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FDC4D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FDC4F: mov dword ptr [esi - 0x28], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0xD8
        // 0x588FDC52: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588FDC54: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FDC56: je 0x588fdc62
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588FDC58: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FDC5A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FDC5C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FDC5E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FDC60: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x588FDC62: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588FDC65: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588FDC68: jne 0x588fdc40
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x588FDC6A: mov ecx, dword ptr [edi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDC70: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FDC72: je 0x588fdc82
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FDC74: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FDC76: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FDC78: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FDC7A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FDC7C: mov dword ptr [edi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDC82: mov ecx, dword ptr [edi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDC88: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FDC8A: je 0x588fdc9a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FDC8C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FDC8E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FDC90: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FDC92: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FDC94: mov dword ptr [edi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDC9A: mov ecx, dword ptr [edi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDCA0: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FDCA2: je 0x588fdcb2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FDCA4: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FDCA6: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FDCA8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FDCAA: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FDCAC: mov dword ptr [edi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDCB2: mov ecx, dword ptr [edi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDCB8: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FDCBA: je 0x588fdcca
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588FDCBC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FDCBE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FDCC0: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FDCC2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FDCC4: mov dword ptr [edi + 0xc0], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDCCA: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588FDCCC: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FDCD4: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0x37
        __asm _emit 0x4F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDCD9: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FDCDD: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FDCE4: pop ecx
        __asm _emit 0x59
        // 0x588FDCE5: pop edi
        __asm _emit 0x5F
        // 0x588FDCE6: pop esi
        __asm _emit 0x5E
        // 0x588FDCE7: pop ebp
        __asm _emit 0x5D
        // 0x588FDCE8: pop ebx
        __asm _emit 0x5B
        // 0x588FDCE9: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FDCEC: ret
        __asm _emit 0xC3
    }
}
