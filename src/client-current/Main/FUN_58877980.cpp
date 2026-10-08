// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 304 bytes in 1 exact ranges.
// Source symbol alias: FUN_58877980.

// Ghidra body range 0x58877980..0x58877AB0; 304 mapped bytes.
extern "C" __declspec(naked) void FUN_58877980_segment_00() {
    __asm {
        // 0x58877980: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58877982: push 0x58987ae8
        __asm _emit 0x68
        __asm _emit 0xE8
        __asm _emit 0x7A
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58877987: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887798D: push eax
        __asm _emit 0x50
        // 0x5887798E: push ecx
        __asm _emit 0x51
        // 0x5887798F: push ebx
        __asm _emit 0x53
        // 0x58877990: push ebp
        __asm _emit 0x55
        // 0x58877991: push esi
        __asm _emit 0x56
        // 0x58877992: push edi
        __asm _emit 0x57
        // 0x58877993: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58877998: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5887799A: push eax
        __asm _emit 0x50
        // 0x5887799B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5887799F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588779A5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588779A7: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588779AB: mov dword ptr [esi], 0x5899efe8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x588779B1: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588779B7: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588779B9: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588779BD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588779BF: je 0x588779cf
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588779C1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588779C3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588779C5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588779C7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588779C9: mov dword ptr [esi + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588779CF: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588779D5: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588779D7: je 0x588779e7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588779D9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588779DB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588779DD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588779DF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588779E1: mov dword ptr [esi + 0x88], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588779E7: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588779ED: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588779EF: je 0x588779ff
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588779F1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588779F3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588779F5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588779F7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588779F9: mov dword ptr [esi + 0x8c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588779FF: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877A05: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58877A07: je 0x58877a17
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58877A09: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58877A0B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58877A0D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58877A0F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58877A11: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877A17: lea edi, [esi + 0x90]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877A1D: mov ebp, 7
        __asm _emit 0xBD
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877A22: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58877A24: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58877A26: je 0x58877a32
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58877A28: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58877A2A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58877A2C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58877A2E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58877A30: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x58877A32: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58877A35: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x58877A38: jne 0x58877a22
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58877A3A: lea edi, [ebp + 2]
        __asm _emit 0x8D
        __asm _emit 0x7D
        __asm _emit 0x02
        // 0x58877A3D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58877A40: mov ecx, dword ptr [esi + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877A46: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58877A48: je 0x58877a58
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58877A4A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58877A4C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58877A4E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58877A50: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58877A52: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877A58: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58877A5B: jne 0x58877a40
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x58877A5D: mov ecx, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877A63: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58877A65: je 0x58877a75
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58877A67: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58877A69: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58877A6B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58877A6D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58877A6F: mov dword ptr [esi + 0x190], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877A75: mov ecx, dword ptr [esi + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877A7B: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58877A7D: je 0x58877a8d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58877A7F: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58877A81: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58877A83: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58877A85: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58877A87: mov dword ptr [esi + 0x194], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877A8D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58877A8F: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58877A97: call 0x587b5f50
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0xE4
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58877A9C: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58877AA0: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58877AA7: pop ecx
        __asm _emit 0x59
        // 0x58877AA8: pop edi
        __asm _emit 0x5F
        // 0x58877AA9: pop esi
        __asm _emit 0x5E
        // 0x58877AAA: pop ebp
        __asm _emit 0x5D
        // 0x58877AAB: pop ebx
        __asm _emit 0x5B
        // 0x58877AAC: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58877AAF: ret
        __asm _emit 0xC3
    }
}
