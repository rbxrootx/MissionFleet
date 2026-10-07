// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 116 bytes in 1 exact ranges.
// Source symbol alias: FUN_58748020.

// Ghidra body range 0x58748020..0x58748094; 116 mapped bytes.
extern "C" __declspec(naked) void FUN_58748020_segment_00() {
    __asm {
        // 0x58748020: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58748024: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58748028: push esi
        __asm _emit 0x56
        // 0x58748029: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874802D: push edi
        __asm _emit 0x57
        // 0x5874802E: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x58748031: jb 0x58748047
        __asm _emit 0x72
        __asm _emit 0x14
        // 0x58748033: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58748035: cmp eax, dword ptr [ecx]
        __asm _emit 0x3B
        __asm _emit 0x01
        // 0x58748037: jne 0x5874804b
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x58748039: sub esi, 4
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x04
        // 0x5874803C: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5874803F: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x58748042: cmp esi, 4
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x04
        // 0x58748045: jae 0x58748033
        __asm _emit 0x73
        __asm _emit 0xEC
        // 0x58748047: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58748049: je 0x5874808f
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x5874804B: movzx eax, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x02
        // 0x5874804E: movzx edi, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x39
        // 0x58748051: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58748053: jne 0x58748086
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58748055: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x58748058: jbe 0x5874808f
        __asm _emit 0x76
        __asm _emit 0x35
        // 0x5874805A: movzx eax, byte ptr [edx + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x42
        __asm _emit 0x01
        // 0x5874805E: movzx edi, byte ptr [ecx + 1]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x79
        __asm _emit 0x01
        // 0x58748062: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58748064: jne 0x58748086
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x58748066: cmp esi, 2
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x02
        // 0x58748069: jbe 0x5874808f
        __asm _emit 0x76
        __asm _emit 0x24
        // 0x5874806B: movzx eax, byte ptr [edx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x42
        __asm _emit 0x02
        // 0x5874806F: movzx edi, byte ptr [ecx + 2]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x79
        __asm _emit 0x02
        // 0x58748073: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58748075: jne 0x58748086
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x58748077: cmp esi, 3
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x03
        // 0x5874807A: jbe 0x5874808f
        __asm _emit 0x76
        __asm _emit 0x13
        // 0x5874807C: movzx eax, byte ptr [edx + 3]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x42
        __asm _emit 0x03
        // 0x58748080: movzx ecx, byte ptr [ecx + 3]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x49
        __asm _emit 0x03
        // 0x58748084: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x58748086: sar eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x1F
        // 0x58748089: pop edi
        __asm _emit 0x5F
        // 0x5874808A: or eax, 1
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0x01
        // 0x5874808D: pop esi
        __asm _emit 0x5E
        // 0x5874808E: ret
        __asm _emit 0xC3
        // 0x5874808F: pop edi
        __asm _emit 0x5F
        // 0x58748090: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58748092: pop esi
        __asm _emit 0x5E
        // 0x58748093: ret
        __asm _emit 0xC3
    }
}
