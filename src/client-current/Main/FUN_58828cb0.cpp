// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 232 bytes in 1 exact ranges.
// Source symbol alias: FUN_58828cb0.

// Ghidra body range 0x58828CB0..0x58828D98; 232 mapped bytes.
extern "C" __declspec(naked) void FUN_58828cb0_segment_00() {
    __asm {
        // 0x58828CB0: push ebx
        __asm _emit 0x53
        // 0x58828CB1: push ebp
        __asm _emit 0x55
        // 0x58828CB2: push esi
        __asm _emit 0x56
        // 0x58828CB3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58828CB5: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828CBB: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828CC1: push edi
        __asm _emit 0x57
        // 0x58828CC2: push eax
        __asm _emit 0x50
        // 0x58828CC3: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xF4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828CC8: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828CCE: push ecx
        __asm _emit 0x51
        // 0x58828CCF: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828CD5: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0xF4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828CDA: mov edx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828CE0: mov ecx, dword ptr [esi + 0x120]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828CE6: push edx
        __asm _emit 0x52
        // 0x58828CE7: call 0x58908190
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0xF4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828CEC: mov edi, 1
        __asm _emit 0xBF
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828CF1: lea ebx, [esi + 0x100]
        __asm _emit 0x8D
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828CF7: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58828CF9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828D00: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828D06: cmp edi, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828D0C: jg 0x58828d8d
        __asm _emit 0x7F
        __asm _emit 0x7F
        // 0x58828D0E: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828D14: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58828D16: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58828D19: jge 0x58828d75
        __asm _emit 0x7D
        __asm _emit 0x5A
        // 0x58828D1B: dec eax
        __asm _emit 0x48
        // 0x58828D1C: push eax
        __asm _emit 0x50
        // 0x58828D1D: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xF4
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828D22: movzx ecx, byte ptr [eax + 0x22]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x22
        // 0x58828D26: mov edx, dword ptr [ebx - 0x24]
        __asm _emit 0x8B
        __asm _emit 0x53
        __asm _emit 0xDC
        // 0x58828D29: mov dword ptr [edx + 0x50], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x50
        // 0x58828D2C: mov eax, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828D32: lea ecx, [edi + eax - 1]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x07
        __asm _emit 0xFF
        // 0x58828D36: push ecx
        __asm _emit 0x51
        // 0x58828D37: mov ecx, dword ptr [esi + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828D3D: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xF3
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58828D42: mov ecx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x0B
        // 0x58828D44: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x58828D47: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x58828D49: je 0x58828d80
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x58828D4B: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x58828D4E: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58828D51: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x58828D54: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x58828D57: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x58828D5A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58828D5C: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x58828D5F: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58828D61: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58828D64: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58828D67: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58828D6A: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58828D6D: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58828D70: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58828D73: jmp 0x58828d80
        __asm _emit 0xEB
        __asm _emit 0x0B
        // 0x58828D75: mov ecx, dword ptr [ebx - 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0xDC
        // 0x58828D78: mov dword ptr [ecx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x69
        __asm _emit 0x50
        // 0x58828D7B: mov edx, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x13
        // 0x58828D7D: mov dword ptr [edx + 0x50], ebp
        __asm _emit 0x89
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x58828D80: inc edi
        __asm _emit 0x47
        // 0x58828D81: add ebx, 4
        __asm _emit 0x83
        __asm _emit 0xC3
        __asm _emit 0x04
        // 0x58828D84: cmp edi, 8
        __asm _emit 0x83
        __asm _emit 0xFF
        __asm _emit 0x08
        // 0x58828D87: jl 0x58828d00
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x73
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58828D8D: pop edi
        __asm _emit 0x5F
        // 0x58828D8E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58828D90: pop esi
        __asm _emit 0x5E
        // 0x58828D91: pop ebp
        __asm _emit 0x5D
        // 0x58828D92: pop ebx
        __asm _emit 0x5B
        // 0x58828D93: jmp 0x58828be0
        __asm _emit 0xE9
        __asm _emit 0x48
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
