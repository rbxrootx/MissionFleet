// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 123 bytes in 1 exact ranges.
// Source symbol alias: FUN_588ff180.

// Ghidra body range 0x588FF180..0x588FF1FB; 123 mapped bytes.
extern "C" __declspec(naked) void FUN_588ff180_segment_00() {
    __asm {
        // 0x588FF180: push ebx
        __asm _emit 0x53
        // 0x588FF181: push ebp
        __asm _emit 0x55
        // 0x588FF182: push esi
        __asm _emit 0x56
        // 0x588FF183: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FF185: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF188: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF18B: push edi
        __asm _emit 0x57
        // 0x588FF18C: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF18F: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588FF191: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FF193: jbe 0x588ff1d3
        __asm _emit 0x76
        __asm _emit 0x3E
        // 0x588FF195: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588FF199: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588FF19D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588FF1A0: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF1A3: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF1A6: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF1A9: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF1AB: jb 0x588ff1b2
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF1AD: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xDA
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF1B2: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF1B5: mov ecx, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xBA
        // 0x588FF1B8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FF1BA: mov edx, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x28
        // 0x588FF1BD: push ebx
        __asm _emit 0x53
        // 0x588FF1BE: push ebp
        __asm _emit 0x55
        // 0x588FF1BF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FF1C1: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588FF1C3: je 0x588ff1dc
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588FF1C5: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x588FF1C8: sub eax, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x588FF1CB: inc edi
        __asm _emit 0x47
        // 0x588FF1CC: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588FF1CF: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x588FF1D1: jb 0x588ff1a0
        __asm _emit 0x72
        __asm _emit 0xCD
        // 0x588FF1D3: pop edi
        __asm _emit 0x5F
        // 0x588FF1D4: pop esi
        __asm _emit 0x5E
        // 0x588FF1D5: pop ebp
        __asm _emit 0x5D
        // 0x588FF1D6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FF1D8: pop ebx
        __asm _emit 0x5B
        // 0x588FF1D9: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FF1DC: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588FF1DF: sub ecx, dword ptr [esi + 0x70]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588FF1E2: sar ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x588FF1E5: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x588FF1E7: jb 0x588ff1ee
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x588FF1E9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0xDA
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FF1EE: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588FF1F1: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x588FF1F4: pop edi
        __asm _emit 0x5F
        // 0x588FF1F5: pop esi
        __asm _emit 0x5E
        // 0x588FF1F6: pop ebp
        __asm _emit 0x5D
        // 0x588FF1F7: pop ebx
        __asm _emit 0x5B
        // 0x588FF1F8: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
