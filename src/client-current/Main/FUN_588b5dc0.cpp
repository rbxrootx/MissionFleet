// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 97 bytes in 1 exact ranges.
// Source symbol alias: FUN_588b5dc0.

// Ghidra body range 0x588B5DC0..0x588B5E21; 97 mapped bytes.
extern "C" __declspec(naked) void FUN_588b5dc0_segment_00() {
    __asm {
        // 0x588B5DC0: mov eax, dword ptr [0x58a0b468]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588B5DC5: mov edx, dword ptr [ecx + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5DCB: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588B5DD0: sub eax, dword ptr [edx + 0x64]
        __asm _emit 0x2B
        __asm _emit 0x42
        __asm _emit 0x64
        // 0x588B5DD3: sub eax, 0xc350
        __asm _emit 0x2D
        __asm _emit 0x50
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588B5DD8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588B5DDA: jle 0x588b5e1e
        __asm _emit 0x7E
        __asm _emit 0x42
        // 0x588B5DDC: mov ecx, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x70
        // 0x588B5DDF: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x588B5DE2: push esi
        __asm _emit 0x56
        // 0x588B5DE3: push edi
        __asm _emit 0x57
        // 0x588B5DE4: movzx edi, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588B5DE9: lea esi, [edi + edx]
        __asm _emit 0x8D
        __asm _emit 0x34
        __asm _emit 0x17
        // 0x588B5DEC: cmp esi, 0x77359400
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x35
        __asm _emit 0x77
        // 0x588B5DF2: jle 0x588b5e03
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x588B5DF4: pop edi
        __asm _emit 0x5F
        // 0x588B5DF5: pop esi
        __asm _emit 0x5E
        // 0x588B5DF6: mov dword ptr [esp + 4], 0x77359400
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x35
        __asm _emit 0x77
        // 0x588B5DFE: jmp 0x58907360
        __asm _emit 0xE9
        __asm _emit 0x5D
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5E03: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x588B5E05: je 0x588b5e1c
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x588B5E07: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x588B5E09: jl 0x588b5e16
        __asm _emit 0x7C
        __asm _emit 0x0B
        // 0x588B5E0B: pop edi
        __asm _emit 0x5F
        // 0x588B5E0C: pop esi
        __asm _emit 0x5E
        // 0x588B5E0D: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588B5E11: jmp 0x58907360
        __asm _emit 0xE9
        __asm _emit 0x4A
        __asm _emit 0x15
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5E16: push edi
        __asm _emit 0x57
        // 0x588B5E17: call 0x589072a0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x588B5E1C: pop edi
        __asm _emit 0x5F
        // 0x588B5E1D: pop esi
        __asm _emit 0x5E
        // 0x588B5E1E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
