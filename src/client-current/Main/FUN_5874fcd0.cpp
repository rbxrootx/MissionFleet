// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874FCD0 .. +0xFD bytes.
extern "C" __declspec(naked) void FUN_5874fcd0() {
    __asm {
        // 0x5874FCD0: mov eax, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x5874FCD3: push edi
        __asm _emit 0x57
        // 0x5874FCD4: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5874FCD7: jne 0x5874fce5
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5874FCD9: mov eax, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5874FCDC: mov dword ptr [eax + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FCE3: jmp 0x5874fd39
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x5874FCE5: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x5874FCE8: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FCEE: jle 0x5874fd05
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5874FCF0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FCF2: jl 0x5874fd05
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x5874FCF4: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FCFA: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5874FCFC: je 0x5874fd05
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5874FCFE: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5874FD01: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5874FD03: jmp 0x5874fd07
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874FD05: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874FD07: mov edx, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x5874FD0A: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x5874FD0D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FD0F: je 0x5874fd39
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874FD11: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x5874FD14: mov dword ptr [edx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x5874FD17: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x5874FD1A: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5874FD1D: mov dword ptr [edx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x5874FD20: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x5874FD22: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x5874FD25: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x5874FD27: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5874FD2A: mov dword ptr [edx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x5874FD2D: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5874FD30: mov dword ptr [edx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x5874FD33: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874FD36: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5874FD39: mov eax, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FD3F: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5874FD42: jne 0x5874fd50
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x5874FD44: mov edx, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x58
        // 0x5874FD47: mov dword ptr [edx + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FD4E: jmp 0x5874fda4
        __asm _emit 0xEB
        __asm _emit 0x54
        // 0x5874FD50: mov edx, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x50
        // 0x5874FD53: cmp dword ptr [edx + 0x160], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FD59: jle 0x5874fd70
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5874FD5B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FD5D: jl 0x5874fd70
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x5874FD5F: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FD65: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5874FD67: je 0x5874fd70
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5874FD69: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x5874FD6C: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5874FD6E: jmp 0x5874fd72
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874FD70: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874FD72: mov edx, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x58
        // 0x5874FD75: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x5874FD78: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874FD7A: je 0x5874fda4
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874FD7C: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x5874FD7F: mov dword ptr [edx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x5874FD82: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x5874FD85: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5874FD88: mov dword ptr [edx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x5874FD8B: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x5874FD8D: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x5874FD90: mov dword ptr [edx], edi
        __asm _emit 0x89
        __asm _emit 0x3A
        // 0x5874FD92: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5874FD95: mov dword ptr [edx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x5874FD98: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5874FD9B: mov dword ptr [edx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x5874FD9E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x5874FDA1: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x5874FDA4: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FDA9: pop edi
        __asm _emit 0x5F
        // 0x5874FDAA: cmp dword ptr [ecx + 0xb4], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FDB0: je 0x5874fdc6
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5874FDB2: mov edx, dword ptr [ecx + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x5874FDB5: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FDBC: mov edx, dword ptr [ecx + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x58
        // 0x5874FDBF: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FDC6: mov dword ptr [ecx + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FDCC: ret
        __asm _emit 0xC3
    }
}
