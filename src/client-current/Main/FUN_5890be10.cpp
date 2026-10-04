// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890BE10 .. +0x8C bytes.
// Source symbol alias: FUN_5890be10.
extern "C" __declspec(naked) void FUN_5890be10() {
    __asm {
        // 0x5890BE10: push esi
        __asm _emit 0x56
        // 0x5890BE11: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890BE13: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5890BE17: test al, 4
        __asm _emit 0xA8
        __asm _emit 0x04
        // 0x5890BE19: je 0x5890be96
        __asm _emit 0x74
        __asm _emit 0x7B
        // 0x5890BE1B: cmp dword ptr [esi + 0x88], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BE22: push edi
        __asm _emit 0x57
        // 0x5890BE23: je 0x5890be77
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x5890BE25: push ebx
        __asm _emit 0x53
        // 0x5890BE26: call dword ptr [0x5898c42c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x2C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890BE2C: mov ebx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BE32: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890BE34: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BE36: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5890BE38: call 0x58908140
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xC3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BE3D: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5890BE3F: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x5890BE41: lea edx, [ebx + ebx]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x1B
        // 0x5890BE44: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5890BE46: jbe 0x5890be76
        __asm _emit 0x76
        __asm _emit 0x2E
        // 0x5890BE48: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5890BE4A: sub eax, dword ptr [esi + 0x94]
        __asm _emit 0x2B
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BE50: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5890BE52: jbe 0x5890be76
        __asm _emit 0x76
        __asm _emit 0x22
        // 0x5890BE54: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5890BE57: push ecx
        __asm _emit 0x51
        // 0x5890BE58: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890BE5A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BE5C: call 0x58902e10
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x6F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BE61: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x5890BE64: sub dword ptr [esi + 0x20], edx
        __asm _emit 0x29
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x5890BE67: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890BE69: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890BE6B: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xC3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890BE70: mov dword ptr [esi + 0x94], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BE76: pop ebx
        __asm _emit 0x5B
        // 0x5890BE77: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5890BE7A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5890BE7C: je 0x5890be95
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5890BE7E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5890BE80: mov edi, dword ptr [ecx + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x38
        // 0x5890BE83: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5890BE85: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5890BE88: cmp edi, dword ptr [esi + 0x3c]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x5890BE8B: je 0x5890be98
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5890BE8D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890BE8F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5890BE91: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5890BE93: jne 0x5890be80
        __asm _emit 0x75
        __asm _emit 0xEB
        // 0x5890BE95: pop edi
        __asm _emit 0x5F
        // 0x5890BE96: pop esi
        __asm _emit 0x5E
        // 0x5890BE97: ret
        __asm _emit 0xC3
        // 0x5890BE98: pop edi
        __asm _emit 0x5F
        // 0x5890BE99: pop esi
        __asm _emit 0x5E
        // 0x5890BE9A: jmp edx
        __asm _emit 0xFF
        __asm _emit 0xE2
    }
}
