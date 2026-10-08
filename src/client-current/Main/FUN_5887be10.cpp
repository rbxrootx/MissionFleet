// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 194 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887be10.

// Ghidra body range 0x5887BE10..0x5887BED2; 194 mapped bytes.
extern "C" __declspec(naked) void FUN_5887be10_segment_00() {
    __asm {
        // 0x5887BE10: push esi
        __asm _emit 0x56
        // 0x5887BE11: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5887BE13: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE19: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5887BE1B: jle 0x5887bed0
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xAF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE21: push ebx
        __asm _emit 0x53
        // 0x5887BE22: push ebp
        __asm _emit 0x55
        // 0x5887BE23: dec eax
        __asm _emit 0x48
        // 0x5887BE24: lea ebp, [esi + 0x244]
        __asm _emit 0x8D
        __asm _emit 0xAE
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE2A: push edi
        __asm _emit 0x57
        // 0x5887BE2B: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE31: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x5887BE33: mov ebx, 5
        __asm _emit 0xBB
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE38: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x5887BE3A: call 0x58908650
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xC8
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BE3F: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5887BE42: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5887BE45: jne 0x5887be38
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5887BE47: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5887BE49: cmp dword ptr [esi + 0x80], eax
        __asm _emit 0x39
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE4F: jne 0x5887be5c
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x5887BE51: mov ecx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE57: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5887BE5A: jmp 0x5887be69
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x5887BE5C: mov edx, dword ptr [esi + 0x258]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE62: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE69: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE6F: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5887BE72: add edx, 0xa
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0A
        // 0x5887BE75: cmp edx, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE7B: jge 0x5887be8c
        __asm _emit 0x7D
        __asm _emit 0x0F
        // 0x5887BE7D: mov eax, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE83: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE8A: jmp 0x5887be95
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5887BE8C: mov ecx, dword ptr [esi + 0x25c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x5C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE92: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5887BE95: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5887BE98: mov edi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BE9E: call 0x58908170
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BEA3: imul eax, eax, 0xbc
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BEA9: cdq
        __asm _emit 0x99
        // 0x5887BEAA: add edi, -0xa
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0xF6
        // 0x5887BEAD: idiv edi
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x5887BEAF: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x5887BEB2: mov ecx, dword ptr [esi + 0x260]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BEB8: lea eax, [eax + edx + 0xf0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887BEBF: push eax
        __asm _emit 0x50
        // 0x5887BEC0: call 0x58903360
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887BEC5: pop edi
        __asm _emit 0x5F
        // 0x5887BEC6: pop ebp
        __asm _emit 0x5D
        // 0x5887BEC7: pop ebx
        __asm _emit 0x5B
        // 0x5887BEC8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5887BECA: pop esi
        __asm _emit 0x5E
        // 0x5887BECB: jmp 0x5887b240
        __asm _emit 0xE9
        __asm _emit 0x70
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887BED0: pop esi
        __asm _emit 0x5E
        // 0x5887BED1: ret
        __asm _emit 0xC3
    }
}
