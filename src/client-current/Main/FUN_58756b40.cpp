// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 114 bytes in 1 exact ranges.
// Source symbol alias: FUN_58756b40.

// Ghidra body range 0x58756B40..0x58756BB2; 114 mapped bytes.
extern "C" __declspec(naked) void FUN_58756b40_segment_00() {
    __asm {
        // 0x58756B40: mov edx, dword ptr [0x58a246ac]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xAC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58756B46: push esi
        __asm _emit 0x56
        // 0x58756B47: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58756B4B: cmp dword ptr [edx + 0x160], esi
        __asm _emit 0x39
        __asm _emit 0xB2
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756B51: jle 0x58756b6d
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x58756B53: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58756B55: jl 0x58756b6d
        __asm _emit 0x7C
        __asm _emit 0x16
        // 0x58756B57: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756B5E: je 0x58756b6d
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58756B60: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58756B62: shl eax, 6
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x06
        // 0x58756B65: add eax, dword ptr [edx + 0x190]
        __asm _emit 0x03
        __asm _emit 0x82
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756B6B: jmp 0x58756b6f
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58756B6D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58756B6F: mov edx, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756B75: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x58756B78: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58756B7A: je 0x58756ba8
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x58756B7C: push edi
        __asm _emit 0x57
        // 0x58756B7D: mov edi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x18
        // 0x58756B80: mov dword ptr [edx + 0xc], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x0C
        // 0x58756B83: mov edi, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x1C
        // 0x58756B86: mov dword ptr [edx + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x10
        // 0x58756B89: mov edi, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x20
        // 0x58756B8C: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x58756B8F: mov dword ptr [edx + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x14
        // 0x58756B92: mov edi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x58756B95: add edx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x14
        // 0x58756B98: mov dword ptr [edx + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x04
        // 0x58756B9B: mov edi, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58756B9E: mov dword ptr [edx + 8], edi
        __asm _emit 0x89
        __asm _emit 0x7A
        __asm _emit 0x08
        // 0x58756BA1: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58756BA4: mov dword ptr [edx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58756BA7: pop edi
        __asm _emit 0x5F
        // 0x58756BA8: mov dword ptr [ecx + 0x8c], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58756BAE: pop esi
        __asm _emit 0x5E
        // 0x58756BAF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
