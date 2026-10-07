// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 63 bytes in 1 exact ranges.
// Source symbol alias: FUN_58736e20.

// Ghidra body range 0x58736E20..0x58736E5F; 63 mapped bytes.
extern "C" __declspec(naked) void FUN_58736e20_segment_00() {
    __asm {
        // 0x58736E20: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58736E25: push edi
        __asm _emit 0x57
        // 0x58736E26: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58736E28: mov ecx, dword ptr [eax + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58736E2E: lea edx, [edi + 0x34]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x34
        // 0x58736E31: push edx
        __asm _emit 0x52
        // 0x58736E32: push edi
        __asm _emit 0x57
        // 0x58736E33: call 0x58775c10
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0xED
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58736E38: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58736E3A: je 0x58736e5d
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x58736E3C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58736E3E: lea edx, [edi + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x57
        __asm _emit 0x38
        // 0x58736E41: push esi
        __asm _emit 0x56
        // 0x58736E42: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x58736E44: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58736E46: je 0x58736e58
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58736E48: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58736E4A: je 0x58736e5c
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58736E4C: inc ecx
        __asm _emit 0x41
        // 0x58736E4D: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x58736E50: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x58736E53: jl 0x58736e42
        __asm _emit 0x7C
        __asm _emit 0xED
        // 0x58736E55: pop esi
        __asm _emit 0x5E
        // 0x58736E56: pop edi
        __asm _emit 0x5F
        // 0x58736E57: ret
        __asm _emit 0xC3
        // 0x58736E58: mov dword ptr [edi + ecx*4 + 0x38], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x8F
        __asm _emit 0x38
        // 0x58736E5C: pop esi
        __asm _emit 0x5E
        // 0x58736E5D: pop edi
        __asm _emit 0x5F
        // 0x58736E5E: ret
        __asm _emit 0xC3
    }
}
