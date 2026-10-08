// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 228 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff200.

// Ghidra body range 0x588FF200..0x588FF2E4; 228 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff200_segment_00() {
    __asm {
        // 0x588FF200: push ebx
        __asm _emit 0x53
        // 0x588FF201: push ebp
        __asm _emit 0x55
        // 0x588FF202: push esi
        __asm _emit 0x56
        // 0x588FF203: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF205: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF208: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF20B: push edi
        __asm _emit 0x57
        // 0x588FF20C: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF20F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FF211: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF213: jbe 0x588ff2bd
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF219: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FF21D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588FF220: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF223: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF226: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF229: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF22B: jb 0x588ff232
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF22D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0xDA
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF232: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF235: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588FF238: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588FF23B: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x588FF23E: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x588FF240: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x588FF242: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588FF244: jl 0x588ff2ab
        __asm _emit 0x7C
        __asm _emit 0x65
        // 0x588FF246: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x588FF249: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x588FF24B: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588FF24D: jge 0x588ff2ab
        __asm _emit 0x7D
        __asm _emit 0x5C
        // 0x588FF24F: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588FF252: mov ebp, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x18
        // 0x588FF255: mov edx, dword ptr [ebx + 4]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0x04
        // 0x588FF258: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x588FF25A: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588FF25C: jl 0x588ff2ab
        __asm _emit 0x7C
        __asm _emit 0x4D
        // 0x588FF25E: mov eax, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x20
        // 0x588FF261: add eax, ecx
        __asm _emit 0x03
        __asm _emit 0xC1
        // 0x588FF263: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588FF265: jge 0x588ff2ab
        __asm _emit 0x7D
        __asm _emit 0x44
        // 0x588FF267: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF26A: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF26D: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF270: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF272: jb 0x588ff279
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF274: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xD9
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF279: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF27C: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588FF27F: cmp byte ptr [eax + 0x98], 0
        __asm _emit 0x80
        __asm _emit 0xB8
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF286: jne 0x588ff2ab
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588FF288: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF28B: sub ecx, edx
        __asm _emit 0x2B
        __asm _emit 0xCA
        // 0x588FF28D: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF290: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF292: jb 0x588ff299
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF294: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xD9
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF299: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF29C: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588FF29F: movzx ecx, byte ptr [eax + 0x6a]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x6A
        // 0x588FF2A3: cmp ecx, dword ptr [esi + 0x88]
        __asm _emit 0x3B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FF2A9: je 0x588ff2c6
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588FF2AB: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588FF2AE: sub edx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF2B1: inc edi
        __asm _emit 0x47
        // 0x588FF2B2: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FF2B5: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FF2B7: jb 0x588ff220
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x63
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FF2BD: pop edi
        __asm _emit 0x5F
        // 0x588FF2BE: pop esi
        __asm _emit 0x5E
        // 0x588FF2BF: pop ebp
        __asm _emit 0x5D
        // 0x588FF2C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF2C2: pop ebx
        __asm _emit 0x5B
        // 0x588FF2C3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588FF2C6: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF2C9: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588FF2CB: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF2CE: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FF2D0: jb 0x588ff2d7
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF2D2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xD9
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF2D7: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF2DA: mov eax, dword ptr [ecx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB9
        // 0x588FF2DD: pop edi
        __asm _emit 0x5F
        // 0x588FF2DE: pop esi
        __asm _emit 0x5E
        // 0x588FF2DF: pop ebp
        __asm _emit 0x5D
        // 0x588FF2E0: pop ebx
        __asm _emit 0x5B
        // 0x588FF2E1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
