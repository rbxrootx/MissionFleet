// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Corrected Ghidra function-body extent: 0x5873BC90 .. +0x51 bytes.
// Source symbol alias: FUN_5873bc90.
extern "C" __declspec(naked) void FUN_5873bc90() {
    __asm {
        // 0x5873BC90: mov eax, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x7C
        // 0x5873BC93: mov ecx, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x74
        // 0x5873BC96: add eax, 0x139
        __asm _emit 0x05
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873BC9B: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5873BC9E: mov eax, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x08
        // 0x5873BCA1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873BCA3: mov edx, 0x5f5e100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0xE1
        __asm _emit 0xF5
        __asm _emit 0x05
        // 0x5873BCA8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873BCAA: je 0x5873bcc7
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5873BCAC: push esi
        __asm _emit 0x56
        // 0x5873BCAD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5873BCB0: mov esi, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x5873BCB3: mov esi, dword ptr [esi + 0x328]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873BCB9: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x5873BCBB: jle 0x5873bcbf
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x5873BCBD: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x5873BCBF: mov ecx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x08
        // 0x5873BCC2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5873BCC4: jne 0x5873bcb0
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5873BCC6: pop esi
        __asm _emit 0x5E
        // 0x5873BCC7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873BCC9: je 0x5873bce0
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x5873BCCB: jmp 0x5873bcd0
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5873BCCD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5873BCD0: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5873BCD3: mov dword ptr [ecx + 0x4ec], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873BCD9: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x5873BCDC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873BCDE: jne 0x5873bcd0
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x5873BCE0: ret
        __asm _emit 0xC3
    }
}
