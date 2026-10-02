// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588762A7 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_588762a7() {
    __asm {
        // 0x588762A7: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588762A9: push ebp
        __asm _emit 0x55
        // 0x588762AA: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588762AC: push esi
        __asm _emit 0x56
        // 0x588762AD: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588762B0: push edi
        __asm _emit 0x57
        // 0x588762B1: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588762B3: je 0x588762f1
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x588762B5: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588762B8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588762BA: je 0x588762f1
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x588762BC: mov edi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x38
        // 0x588762BE: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x588762C0: jne 0x588762c6
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x588762C2: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588762C4: jmp 0x588762f3
        __asm _emit 0xEB
        __asm _emit 0x2D
        // 0x588762C6: push esi
        __asm _emit 0x56
        // 0x588762C7: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x588762C9: call 0x58875f5d
        __asm _emit 0xE8
        __asm _emit 0x8F
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588762CE: pop ecx
        __asm _emit 0x59
        // 0x588762CF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x588762D1: je 0x588762c2
        __asm _emit 0x74
        __asm _emit 0xEF
        // 0x588762D3: push edi
        __asm _emit 0x57
        // 0x588762D4: call 0x588761a5
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588762D9: cmp dword ptr [edi + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588762DD: pop ecx
        __asm _emit 0x59
        // 0x588762DE: jne 0x588762c2
        __asm _emit 0x75
        __asm _emit 0xE2
        // 0x588762E0: cmp edi, 0x58907460
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x60
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588762E6: je 0x588762c2
        __asm _emit 0x74
        __asm _emit 0xDA
        // 0x588762E8: push edi
        __asm _emit 0x57
        // 0x588762E9: call 0x58875fda
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588762EE: pop ecx
        __asm _emit 0x59
        // 0x588762EF: jmp 0x588762c2
        __asm _emit 0xEB
        __asm _emit 0xD1
        // 0x588762F1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588762F3: pop edi
        __asm _emit 0x5F
        // 0x588762F4: pop esi
        __asm _emit 0x5E
        // 0x588762F5: pop ebp
        __asm _emit 0x5D
        // 0x588762F6: ret
        __asm _emit 0xC3
    }
}
