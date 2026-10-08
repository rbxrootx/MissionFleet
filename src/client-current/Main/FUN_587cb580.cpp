// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 81 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cb580.

// Ghidra body range 0x587CB580..0x587CB5D1; 81 mapped bytes.
extern "C" __declspec(naked) void FUN_587cb580_segment_00() {
    __asm {
        // 0x587CB580: mov edx, dword ptr [ecx + 0x204]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB586: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587CB588: je 0x587cb5d0
        __asm _emit 0x74
        __asm _emit 0x46
        // 0x587CB58A: mov eax, dword ptr [ecx + 0x214]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB590: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587CB593: jne 0x587cb5b2
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x587CB595: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB59A: cmp dword ptr [edx + 0x214], eax
        __asm _emit 0x39
        __asm _emit 0x82
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB5A0: jne 0x587cb5d0
        __asm _emit 0x75
        __asm _emit 0x2E
        // 0x587CB5A2: cmp dword ptr [ecx + 0xb8], 0x28
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x28
        // 0x587CB5A9: jge 0x587cb5d0
        __asm _emit 0x7D
        __asm _emit 0x25
        // 0x587CB5AB: mov dword ptr [ecx + 0x214], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB5B1: ret
        __asm _emit 0xC3
        // 0x587CB5B2: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587CB5B5: jne 0x587cb5d0
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x587CB5B7: mov eax, dword ptr [ecx + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB5BD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CB5BF: jle 0x587cb5d0
        __asm _emit 0x7E
        __asm _emit 0x0F
        // 0x587CB5C1: cmp eax, 0x1e
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1E
        // 0x587CB5C4: jge 0x587cb5d0
        __asm _emit 0x7D
        __asm _emit 0x0A
        // 0x587CB5C6: mov dword ptr [ecx + 0x214], 2
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CB5D0: ret
        __asm _emit 0xC3
    }
}
