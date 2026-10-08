// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 138 bytes in 1 exact ranges.
// Source symbol alias: FUN_588c5c30.

// Ghidra body range 0x588C5C30..0x588C5CBA; 138 mapped bytes.
extern "C" __declspec(naked) void FUN_588c5c30_segment_00() {
    __asm {
        // 0x588C5C30: push esi
        __asm _emit 0x56
        // 0x588C5C31: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588C5C33: push edi
        __asm _emit 0x57
        // 0x588C5C34: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588C5C38: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x588C5C3B: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588C5C3E: sub eax, dword ptr [esi + 0x60]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588C5C41: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588C5C44: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588C5C46: jb 0x588c5c4d
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588C5C48: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0x70
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C5C4D: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588C5C50: cmp dword ptr [ecx + edi*4], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xB9
        __asm _emit 0x00
        // 0x588C5C54: je 0x588c5c74
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x588C5C56: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x588C5C59: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x588C5C5B: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588C5C5E: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588C5C60: jb 0x588c5c67
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588C5C62: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x70
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C5C67: mov eax, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588C5C6A: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x588C5C6D: mov dword ptr [ecx + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C5C74: mov edx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x64
        // 0x588C5C77: sub edx, dword ptr [esi + 0x60]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x588C5C7A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588C5C7C: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588C5C7F: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588C5C81: jbe 0x588c5cb5
        __asm _emit 0x76
        __asm _emit 0x32
        // 0x588C5C83: cmp dword ptr [esi + 0x7c], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x588C5C86: je 0x588c5ca7
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x588C5C88: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588C5C8B: sub eax, dword ptr [esi + 0x60]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588C5C8E: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588C5C91: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588C5C93: jb 0x588c5c9a
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588C5C95: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x6F
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x588C5C9A: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588C5C9D: mov edx, dword ptr [ecx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0xB9
        // 0x588C5CA0: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588C5CA7: mov eax, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x588C5CAA: sub eax, dword ptr [esi + 0x60]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x588C5CAD: inc edi
        __asm _emit 0x47
        // 0x588C5CAE: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588C5CB1: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588C5CB3: jb 0x588c5c83
        __asm _emit 0x72
        __asm _emit 0xCE
        // 0x588C5CB5: pop edi
        __asm _emit 0x5F
        // 0x588C5CB6: pop esi
        __asm _emit 0x5E
        // 0x588C5CB7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
