// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 97 bytes in 1 exact ranges.
// Source symbol alias: FUN_588b5e30.

// Ghidra body range 0x588B5E30..0x588B5E91; 97 mapped bytes.
extern "C" __declspec(naked) void FUN_588b5e30_segment_00() {
    __asm {
        // 0x588B5E30: mov eax, dword ptr [0x58a0b46c]
        __asm _emit 0xA1
        __asm _emit 0x6C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588B5E35: mov edx, dword ptr [ecx + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5E3B: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588B5E40: sub eax, dword ptr [edx + 0x64]
        __asm _emit 0x2B
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x588B5E43: sub eax, 0xc350
        __asm _emit 0x2D
        __asm _emit 0x50
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5E48: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B5E4A: jle 0x588b5e8e
        __asm _emit 0x7E
        __asm _emit 0x42
        // 0x588B5E4C: mov ecx, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x74
        // 0x588B5E4F: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x588B5E52: push esi
        __asm _emit 0x56
        // 0x588B5E53: push edi
        __asm _emit 0x57
        // 0x588B5E54: movzx edi, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588B5E59: lea esi, [edi + edx]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x17
        // 0x588B5E5C: cmp esi, 0x77359400
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x35
        __asm _emit 0x77
        // 0x588B5E62: jle 0x588b5e73
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588B5E64: pop edi
        __asm _emit 0x5F
        // 0x588B5E65: pop esi
        __asm _emit 0x5E
        // 0x588B5E66: mov dword ptr [esp + 4], 0x77359400
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x35
        __asm _emit 0x77
        // 0x588B5E6E: jmp 0x58907360
        __asm _emit 0xE9
        __asm _emit 0xED
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5E73: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588B5E75: je 0x588b5e8c
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588B5E77: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588B5E79: jl 0x588b5e86
        __asm _emit 0x7C
        __asm _emit 0x0B
        // 0x588B5E7B: pop edi
        __asm _emit 0x5F
        // 0x588B5E7C: pop esi
        __asm _emit 0x5E
        // 0x588B5E7D: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588B5E81: jmp 0x58907360
        __asm _emit 0xE9
        __asm _emit 0xDA
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5E86: push edi
        __asm _emit 0x57
        // 0x588B5E87: call 0x589072a0
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5E8C: pop edi
        __asm _emit 0x5F
        // 0x588B5E8D: pop esi
        __asm _emit 0x5E
        // 0x588B5E8E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
