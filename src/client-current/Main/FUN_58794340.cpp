// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58794340 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_58794340() {
    __asm {
        // 0x58794340: push esi
        __asm _emit 0x56
        // 0x58794341: push edi
        __asm _emit 0x57
        // 0x58794342: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58794344: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58794346: cmp dword ptr [esi + 0x80], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x5879434D: jne 0x58794367
        __asm _emit 0x75
        __asm _emit 0x18
        // 0x5879434F: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x58794352: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794358: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5879435A: je 0x58794367
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5879435C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5879435E: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58794361: push edi
        __asm _emit 0x57
        // 0x58794362: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58794364: push esi
        __asm _emit 0x56
        // 0x58794365: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58794367: cmp dword ptr [esi + 0x7c], 1
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x7C
        __asm _emit 0x01
        // 0x5879436B: jne 0x5879438e
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x5879436D: mov eax, dword ptr [esi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794373: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x58794376: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58794378: je 0x5879438e
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5879437A: cmp dword ptr [esi + 0x60], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x5879437D: jne 0x5879438e
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5879437F: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58794382: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794388: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5879438B: mov dword ptr [eax + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x50
        // 0x5879438E: pop edi
        __asm _emit 0x5F
        // 0x5879438F: pop esi
        __asm _emit 0x5E
        // 0x58794390: ret
        __asm _emit 0xC3
    }
}
