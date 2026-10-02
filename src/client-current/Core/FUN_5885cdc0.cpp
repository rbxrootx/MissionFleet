// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885CDC0 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5885cdc0() {
    __asm {
        // 0x5885CDC0: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885CDC2: push ebp
        __asm _emit 0x55
        // 0x5885CDC3: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885CDC5: sub esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x2C
        // 0x5885CDC8: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5885CDCB: push ebx
        __asm _emit 0x53
        // 0x5885CDCC: push esi
        __asm _emit 0x56
        // 0x5885CDCD: push edi
        __asm _emit 0x57
        // 0x5885CDCE: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885CDD1: call 0x58850c9f
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x3E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CDD6: push dword ptr [ebp + 0x30]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x5885CDD9: lea eax, [ebp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885CDDC: push dword ptr [ebp + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x5885CDDF: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885CDE2: mov ecx, esp
        __asm _emit 0x8B
        __asm _emit 0xCC
        // 0x5885CDE4: push eax
        __asm _emit 0x50
        // 0x5885CDE5: call 0x5885da94
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885CDEA: lea eax, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xD4
        // 0x5885CDED: push eax
        __asm _emit 0x50
        // 0x5885CDEE: call 0x5885cacc
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CDF3: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x5885CDF6: lea ecx, [ebp - 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0xD4
        // 0x5885CDF9: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5885CDFB: mov ebx, edx
        __asm _emit 0x8B
        __asm _emit 0xDA
        // 0x5885CDFD: call 0x58850ce7
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x3E
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885CE02: mov esi, dword ptr [ebp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5885CE05: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5885CE07: je 0x5885ce13
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885CE09: mov ecx, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x1C
        // 0x5885CE0C: or ecx, dword ptr [ebp + 0x20]
        __asm _emit 0x0B
        __asm _emit 0x4D
        __asm _emit 0x20
        // 0x5885CE0F: jne 0x5885ce13
        __asm _emit 0x75
        __asm _emit 0x02
        // 0x5885CE11: mov byte ptr [esi], cl
        __asm _emit 0x88
        __asm _emit 0x0E
        // 0x5885CE13: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5885CE15: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5885CE17: pop edi
        __asm _emit 0x5F
        // 0x5885CE18: pop esi
        __asm _emit 0x5E
        // 0x5885CE19: pop ebx
        __asm _emit 0x5B
        // 0x5885CE1A: leave
        __asm _emit 0xC9
        // 0x5885CE1B: ret
        __asm _emit 0xC3
    }
}
