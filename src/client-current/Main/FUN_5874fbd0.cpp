// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874FBD0 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_5874fbd0() {
    __asm {
        // 0x5874FBD0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874FBD4: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x5874FBD6: push esi
        __asm _emit 0x56
        // 0x5874FBD7: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5874FBDB: push edi
        __asm _emit 0x57
        // 0x5874FBDC: mov dword ptr [eax + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5874FBDF: lea edi, [eax + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x64
        // 0x5874FBE2: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FBE7: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5874FBE9: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874FBED: lea edi, [eax + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xB8
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FBF3: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FBF8: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5874FBFA: mov ecx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FC00: mov ecx, dword ptr [eax + ecx*4 + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x88
        __asm _emit 0x64
        // 0x5874FC04: cmp dword ptr [edx + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x8A
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FC0A: jle 0x5874fc21
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5874FC0C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874FC0E: jl 0x5874fc21
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x5874FC10: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FC16: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5874FC18: je 0x5874fc21
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5874FC1A: shl ecx, 6
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x06
        // 0x5874FC1D: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5874FC1F: jmp 0x5874fc23
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874FC21: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874FC23: mov edx, dword ptr [eax + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x54
        // 0x5874FC26: mov dword ptr [edx + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x54
        // 0x5874FC29: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874FC2B: je 0x5874fc55
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874FC2D: mov esi, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x18
        // 0x5874FC30: mov dword ptr [edx + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x0C
        // 0x5874FC33: mov esi, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x1C
        // 0x5874FC36: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x5874FC39: mov dword ptr [edx + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x10
        // 0x5874FC3C: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x5874FC3E: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x5874FC41: mov dword ptr [edx], esi
        __asm _emit 0x89
        __asm _emit 0x32
        // 0x5874FC43: mov esi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x5874FC46: mov dword ptr [edx + 4], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x5874FC49: mov esi, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x08
        // 0x5874FC4C: mov dword ptr [edx + 8], esi
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x08
        // 0x5874FC4F: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5874FC52: mov dword ptr [edx + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4A
        __asm _emit 0x0C
        // 0x5874FC55: mov edx, dword ptr [eax + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FC5B: mov ecx, dword ptr [eax + edx*4 + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FC62: mov edx, dword ptr [eax + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x50
        // 0x5874FC65: cmp dword ptr [edx + 0x160], ecx
        __asm _emit 0x39
        __asm _emit 0x8A
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FC6B: pop edi
        __asm _emit 0x5F
        // 0x5874FC6C: pop esi
        __asm _emit 0x5E
        // 0x5874FC6D: jle 0x5874fc84
        __asm _emit 0x7E
        __asm _emit 0x15
        // 0x5874FC6F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874FC71: jl 0x5874fc84
        __asm _emit 0x7C
        __asm _emit 0x11
        // 0x5874FC73: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874FC79: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5874FC7B: je 0x5874fc84
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x5874FC7D: shl ecx, 6
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x06
        // 0x5874FC80: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x5874FC82: jmp 0x5874fc86
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874FC84: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5874FC86: mov eax, dword ptr [eax + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x58
        // 0x5874FC89: mov dword ptr [eax + 0x54], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x54
        // 0x5874FC8C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5874FC8E: je 0x5874fcb8
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5874FC90: mov edx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5874FC93: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5874FC96: mov edx, dword ptr [ecx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x5874FC99: add ecx, 0x20
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x20
        // 0x5874FC9C: mov dword ptr [eax + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x5874FC9F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5874FCA1: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x5874FCA4: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x5874FCA6: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x5874FCA9: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5874FCAC: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5874FCAF: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874FCB2: mov ecx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x0C
        // 0x5874FCB5: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5874FCB8: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
