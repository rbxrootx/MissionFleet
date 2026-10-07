// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 142 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff0f0.

// Ghidra body range 0x588FF0F0..0x588FF17E; 142 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff0f0_segment_00() {
    __asm {
        // 0x588FF0F0: push ebx
        __asm _emit 0x53
        // 0x588FF0F1: push ebp
        __asm _emit 0x55
        // 0x588FF0F2: push esi
        __asm _emit 0x56
        // 0x588FF0F3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF0F5: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF0F8: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF0FB: push edi
        __asm _emit 0x57
        // 0x588FF0FC: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF0FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FF101: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF103: jbe 0x588ff156
        __asm _emit 0x76
        __asm _emit 0x51
        // 0x588FF105: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FF109: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FF10D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588FF110: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF113: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF116: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF119: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF11B: jb 0x588ff122
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF11D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xDB
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF122: mov edx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x74
        // 0x588FF125: sub edx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF128: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x588FF12B: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x588FF12D: jb 0x588ff134
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF12F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x3E
        __asm _emit 0xDB
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF134: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF137: mov eax, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x588FF13A: mov ecx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x60
        // 0x588FF13D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588FF13F: jne 0x588ff148
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588FF141: mov edx, dword ptr [eax + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x64
        // 0x588FF144: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x588FF146: je 0x588ff15f
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588FF148: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF14B: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF14E: inc edi
        __asm _emit 0x47
        // 0x588FF14F: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF152: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FF154: jb 0x588ff110
        __asm _emit 0x72
        __asm _emit 0xBA
        // 0x588FF156: pop edi
        __asm _emit 0x5F
        // 0x588FF157: pop esi
        __asm _emit 0x5E
        // 0x588FF158: pop ebp
        __asm _emit 0x5D
        // 0x588FF159: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF15B: pop ebx
        __asm _emit 0x5B
        // 0x588FF15C: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FF15F: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF162: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF165: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF168: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF16A: jb 0x588ff171
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF16C: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0xDB
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF171: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF174: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588FF177: pop edi
        __asm _emit 0x5F
        // 0x588FF178: pop esi
        __asm _emit 0x5E
        // 0x588FF179: pop ebp
        __asm _emit 0x5D
        // 0x588FF17A: pop ebx
        __asm _emit 0x5B
        // 0x588FF17B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
