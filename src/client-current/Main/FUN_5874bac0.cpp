// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 203 bytes in 3 exact ranges.
// Source symbol alias: FUN_5874bac0.

// Ghidra body range 0x5874BAC0..0x5874BB3A; 122 mapped bytes.
extern "C" __declspec(naked) void FUN_5874bac0_segment_00() {
    __asm {
        // 0x5874BAC0: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874BAC4: push ebx
        __asm _emit 0x53
        // 0x5874BAC5: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5874BAC7: push ebp
        __asm _emit 0x55
        // 0x5874BAC8: push esi
        __asm _emit 0x56
        // 0x5874BAC9: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874BACD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874BACF: mov dword ptr [ebx + 0xa0], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BAD5: mov dword ptr [ebx + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BADB: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5874BADF: push edi
        __asm _emit 0x57
        // 0x5874BAE0: lea ebp, [ebx + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BAE6: mov ecx, 0x35
        __asm _emit 0xB9
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BAEB: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x5874BAED: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5874BAEF: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5874BAF3: mov esi, 3
        __asm _emit 0xBE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BAF8: mov dword ptr [ebx + 0xa0], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BAFE: mov dword ptr [ebx + 0xa4], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BB04: mov dword ptr [ebx + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BB0A: lea ecx, [ebx + 0xcc]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BB10: lea edx, [esi - 2]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0xFE
        // 0x5874BB13: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5874BB15: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BB1A: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5874BB1E: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5874BB21: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x5874BB23: jne 0x5874bb13
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x5874BB25: lea ecx, [ebx + 0x1e0]
        __asm _emit 0x8D
        __asm _emit 0x8B
        __asm _emit 0xE0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BB2B: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BB30: test byte ptr [ebx + 0x193], dl
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BB36: je 0x5874bb50
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5874BB38: jmp 0x5874bb40
        __asm _emit 0xEB
        __asm _emit 0x06
    }
}

// Ghidra body range 0x5874BB40..0x5874BB4F; 15 mapped bytes.
extern "C" __declspec(naked) void FUN_5874bac0_segment_01() {
    __asm {
        // 0x5874BB40: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5874BB42: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5874BB46: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5874BB49: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x5874BB4B: jne 0x5874bb40
        __asm _emit 0x75
        __asm _emit 0xF3
        // 0x5874BB4D: jmp 0x5874bb62
        __asm _emit 0xEB
        __asm _emit 0x13
    }
}

// Ghidra body range 0x5874BB50..0x5874BB92; 66 mapped bytes.
extern "C" __declspec(naked) void FUN_5874bac0_segment_02() {
    __asm {
        // 0x5874BB50: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5874BB52: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BB57: and word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x78
        __asm _emit 0x24
        // 0x5874BB5B: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x5874BB5E: sub esi, edx
        __asm _emit 0x2B
        __asm _emit 0xF2
        // 0x5874BB60: jne 0x5874bb50
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x5874BB62: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5874BB64: mov edx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x30
        // 0x5874BB67: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5874BB69: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5874BB6B: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5874BB6D: call 0x5874a840
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0xEC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874BB72: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5874BB74: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x5874BB77: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5874BB79: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5874BB7B: mov ecx, dword ptr [ebx + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874BB81: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874BB83: je 0x5874bb8b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5874BB85: push ebp
        __asm _emit 0x55
        // 0x5874BB86: call 0x58877ab0
        __asm _emit 0xE8
        __asm _emit 0x25
        __asm _emit 0xBF
        __asm _emit 0x12
        __asm _emit 0x00
        // 0x5874BB8B: pop edi
        __asm _emit 0x5F
        // 0x5874BB8C: pop esi
        __asm _emit 0x5E
        // 0x5874BB8D: pop ebp
        __asm _emit 0x5D
        // 0x5874BB8E: pop ebx
        __asm _emit 0x5B
        // 0x5874BB8F: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
