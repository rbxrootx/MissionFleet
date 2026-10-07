// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 97 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff080.

// Ghidra body range 0x588FF080..0x588FF0E1; 97 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff080_segment_00() {
    __asm {
        // 0x588FF080: push esi
        __asm _emit 0x56
        // 0x588FF081: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF083: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF086: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF089: push edi
        __asm _emit 0x57
        // 0x588FF08A: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF08D: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FF08F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF091: jbe 0x588ff0c1
        __asm _emit 0x76
        __asm _emit 0x2E
        // 0x588FF093: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF096: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF099: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF09C: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF09E: jb 0x588ff0a5
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF0A0: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xDB
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF0A5: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF0A8: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588FF0AB: cmp byte ptr [eax + 0x98], 1
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588FF0B2: je 0x588ff0c6
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588FF0B4: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF0B7: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x588FF0B9: inc edi
        __asm _emit 0x47
        // 0x588FF0BA: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF0BD: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF0BF: jb 0x588ff093
        __asm _emit 0x72
        __asm _emit 0xD2
        // 0x588FF0C1: pop edi
        __asm _emit 0x5F
        // 0x588FF0C2: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF0C4: pop esi
        __asm _emit 0x5E
        // 0x588FF0C5: ret
        __asm _emit 0xC3
        // 0x588FF0C6: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588FF0C9: sub edx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF0CC: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FF0CF: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FF0D1: jb 0x588ff0d8
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF0D3: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xDB
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF0D8: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF0DB: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x588FF0DE: pop edi
        __asm _emit 0x5F
        // 0x588FF0DF: pop esi
        __asm _emit 0x5E
        // 0x588FF0E0: ret
        __asm _emit 0xC3
    }
}
