// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5878A1F0 .. +0x5B bytes.
// Source symbol alias: FUN_5878a1f0.
extern "C" __declspec(naked) void FUN_5878a1f0() {
    __asm {
        // 0x5878A1F0: push esi
        __asm _emit 0x56
        // 0x5878A1F1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878A1F3: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5878A1F6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878A1F8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878A1FA: je 0x5878a247
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5878A1FC: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5878A200: push edi
        __asm _emit 0x57
        // 0x5878A201: movzx edi, word ptr [ecx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB9
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A208: cmp edi, edx
        __asm _emit 0x3B
        __asm _emit 0xFA
        // 0x5878A20A: je 0x5878a218
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5878A20C: mov ecx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x78
        // 0x5878A20F: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5878A211: jne 0x5878a201
        __asm _emit 0x75
        __asm _emit 0xEE
        // 0x5878A213: pop edi
        __asm _emit 0x5F
        // 0x5878A214: pop esi
        __asm _emit 0x5E
        // 0x5878A215: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5878A218: mov edx, dword ptr [ecx + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x74
        // 0x5878A21B: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x5878A21E: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5878A220: je 0x5878a227
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5878A222: mov dword ptr [edx + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x78
        // 0x5878A225: jmp 0x5878a22a
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5878A227: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5878A22A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878A22C: je 0x5878a233
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5878A22E: mov dword ptr [eax + 0x74], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x74
        // 0x5878A231: jmp 0x5878a236
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5878A233: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x5878A236: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5878A238: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5878A23A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5878A23C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5878A23E: dec dword ptr [esi + 8]
        __asm _emit 0xFF
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5878A241: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878A246: pop edi
        __asm _emit 0x5F
        // 0x5878A247: pop esi
        __asm _emit 0x5E
        // 0x5878A248: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
