// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D16C .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_5885d16c() {
    __asm {
        // 0x5885D16C: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D16E: push ebp
        __asm _emit 0x55
        // 0x5885D16F: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D171: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5885D174: and dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x5885D178: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885D17B: push esi
        __asm _emit 0x56
        // 0x5885D17C: push edi
        __asm _emit 0x57
        // 0x5885D17D: push eax
        __asm _emit 0x50
        // 0x5885D17E: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885D181: mov byte ptr [ebp - 1], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5885D185: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5885D187: lea eax, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFF
        // 0x5885D18A: mov edx, esp
        __asm _emit 0x8B
        __asm _emit 0xD4
        // 0x5885D18C: push eax
        __asm _emit 0x50
        // 0x5885D18D: push dword ptr [edi + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x2C
        // 0x5885D190: mov esi, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x60
        // 0x5885D193: lea eax, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5885D196: push dword ptr [edi + 0x28]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x28
        // 0x5885D199: push eax
        __asm _emit 0x50
        // 0x5885D19A: push edx
        __asm _emit 0x52
        // 0x5885D19B: call 0x5885b8d2
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D1A0: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885D1A3: push esi
        __asm _emit 0x56
        // 0x5885D1A4: call 0x5885b8f0
        __asm _emit 0xE8
        __asm _emit 0x47
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D1A9: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x5885D1AC: cmp byte ptr [ebp - 1], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5885D1B0: je 0x5885d1ce
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5885D1B2: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5885D1B5: je 0x5885d1ce
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5885D1B7: cmp byte ptr [edi + 0x26], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x5885D1BB: je 0x5885d1c1
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885D1BD: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885D1BF: jmp 0x5885d1d0
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5885D1C1: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885D1C4: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885D1C6: push eax
        __asm _emit 0x50
        // 0x5885D1C7: call 0x5885d96a
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D1CC: jmp 0x5885d1d0
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885D1CE: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D1D0: pop edi
        __asm _emit 0x5F
        // 0x5885D1D1: pop esi
        __asm _emit 0x5E
        // 0x5885D1D2: leave
        __asm _emit 0xC9
        // 0x5885D1D3: ret
        __asm _emit 0xC3
    }
}
