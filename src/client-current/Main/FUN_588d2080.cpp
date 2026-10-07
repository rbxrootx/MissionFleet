// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 285 bytes in 2 exact ranges.
// Source symbol alias: FUN_588d2080.
// CRoomTypeTrade vtable slot 7 prepares state at this+0x50/+0x54 and copies
// the result for MESSAGESTRING_ROOMTYPE_TRADE into the first buffer. The
// helper and field contracts are unresolved; this is exact instruction-level
// source, not recovered high-level C++ (see the subsystem notes).

// Ghidra body range 0x588D2080..0x588D2169; 233 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2080_segment_00() {
    __asm {
        // 0x588D2080: push ebx
        __asm _emit 0x53
        // 0x588D2081: push esi
        __asm _emit 0x56
        // 0x588D2082: push edi
        __asm _emit 0x57
        // 0x588D2083: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D2085: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D2088: push 0xc4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D208D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D208F: push eax
        __asm _emit 0x50
        // 0x588D2090: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xAB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2095: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588D2098: push 0x50
        __asm _emit 0x6A
        __asm _emit 0x50
        // 0x588D209A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D209C: push ecx
        __asm _emit 0x51
        // 0x588D209D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xA6
        __asm _emit 0xAB
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D20A2: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588D20A5: mov ebx, 1
        __asm _emit 0xBB
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D20AA: mov dword ptr [edx + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x18
        // 0x588D20AD: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588D20B0: mov dword ptr [eax + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x14
        // 0x588D20B3: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588D20B6: mov dword ptr [ecx + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x0C
        // 0x588D20B9: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588D20BC: mov dword ptr [edx + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x04
        // 0x588D20BF: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588D20C2: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D20C7: mov dword ptr [ecx + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x30
        // 0x588D20CA: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588D20CD: mov dword ptr [edx + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x34
        // 0x588D20D0: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x588D20D3: mov dword ptr [ecx + 0x38], 0x80
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x38
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D20DA: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588D20DD: mov dword ptr [edx + 0x3c], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x3C
        // 0x588D20E0: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588D20E3: mov ecx, 0x7d
        __asm _emit 0xB9
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D20E8: mov dword ptr [eax + 0x40], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x40
        // 0x588D20EB: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588D20EE: mov dword ptr [edx + 0x44], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x44
        // 0x588D20F1: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588D20F4: mov dword ptr [eax + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x48
        // 0x588D20F7: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588D20FA: mov dword ptr [edx + 0x4c], ebx
        __asm _emit 0x89
        __asm _emit 0x5A
        __asm _emit 0x4C
        // 0x588D20FD: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D2100: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x588D2102: mov word ptr [eax + 0x84], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2109: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D210C: mov word ptr [eax + 0x36], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x36
        // 0x588D2110: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D2113: movzx edx, byte ptr [eax + 0x32]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x50
        __asm _emit 0x32
        // 0x588D2117: and dl, 0xf2
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0xF2
        // 0x588D211A: or dl, 2
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x02
        // 0x588D211D: mov byte ptr [eax + 0x32], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x32
        // 0x588D2120: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D2123: movzx edx, byte ptr [eax + 0x31]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x50
        __asm _emit 0x31
        // 0x588D2127: and dl, 0xb0
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0xB0
        // 0x588D212A: or dl, 0x30
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x30
        // 0x588D212D: mov byte ptr [eax + 0x31], dl
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x31
        // 0x588D2130: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D2133: mov byte ptr [eax + 0x47], cl
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x47
        // 0x588D2136: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x588D2139: mov byte ptr [ecx + 0x46], bl
        __asm _emit 0x88
        __asm _emit 0x59
        __asm _emit 0x46
        // 0x588D213C: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D213F: and dword ptr [eax + 0x3c], 0xfffffffd
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x3C
        __asm _emit 0xFD
        // 0x588D2143: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D2146: and dword ptr [eax + 0x3c], 0xfffffffe
        __asm _emit 0x83
        __asm _emit 0x60
        __asm _emit 0x3C
        __asm _emit 0xFE
        // 0x588D214A: mov eax, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x588D214D: or dword ptr [eax + 0x3c], 4
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x3C
        __asm _emit 0x04
        // 0x588D2151: push 0x5899a5c4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0xA5
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588D2156: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588D215C: mov esi, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x50
        // 0x588D215F: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x588D2162: mov edi, 0x30
        __asm _emit 0xBF
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2167: jmp 0x588d2170
        __asm _emit 0xEB
        __asm _emit 0x07
    }
}

// Ghidra body range 0x588D2170..0x588D21A4; 52 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2080_segment_01() {
    __asm {
        // 0x588D2170: lea edx, [edi + 0x7fffffce]
        __asm _emit 0x8D
        __asm _emit 0x97
        __asm _emit 0xCE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x588D2176: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588D2178: je 0x588d2195
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x588D217A: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x588D217C: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x588D217E: je 0x588d2195
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588D2180: mov byte ptr [esi], cl
        __asm _emit 0x88
        __asm _emit 0x0E
        // 0x588D2182: add esi, ebx
        __asm _emit 0x03
        __asm _emit 0xF3
        // 0x588D2184: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x588D2186: sub edi, ebx
        __asm _emit 0x2B
        __asm _emit 0xFB
        // 0x588D2188: jne 0x588d2170
        __asm _emit 0x75
        __asm _emit 0xE6
        // 0x588D218A: sub esi, ebx
        __asm _emit 0x2B
        __asm _emit 0xF3
        // 0x588D218C: pop edi
        __asm _emit 0x5F
        // 0x588D218D: mov byte ptr [esi], 0
        __asm _emit 0xC6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588D2190: pop esi
        __asm _emit 0x5E
        // 0x588D2191: pop ebx
        __asm _emit 0x5B
        // 0x588D2192: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D2195: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588D2197: jne 0x588d219b
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x588D2199: sub esi, ebx
        __asm _emit 0x2B
        __asm _emit 0xF3
        // 0x588D219B: pop edi
        __asm _emit 0x5F
        // 0x588D219C: mov byte ptr [esi], 0
        __asm _emit 0xC6
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588D219F: pop esi
        __asm _emit 0x5E
        // 0x588D21A0: pop ebx
        __asm _emit 0x5B
        // 0x588D21A1: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
