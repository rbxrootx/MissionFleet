// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D1D4 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_5885d1d4() {
    __asm {
        // 0x5885D1D4: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D1D6: push ebp
        __asm _emit 0x55
        // 0x5885D1D7: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D1D9: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x5885D1DC: and dword ptr [ebp - 8], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xF8
        __asm _emit 0x00
        // 0x5885D1E0: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885D1E3: push esi
        __asm _emit 0x56
        // 0x5885D1E4: push edi
        __asm _emit 0x57
        // 0x5885D1E5: push eax
        __asm _emit 0x50
        // 0x5885D1E6: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885D1E9: mov byte ptr [ebp - 1], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5885D1ED: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5885D1EF: lea eax, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFF
        // 0x5885D1F2: mov edx, esp
        __asm _emit 0x8B
        __asm _emit 0xD4
        // 0x5885D1F4: push eax
        __asm _emit 0x50
        // 0x5885D1F5: push dword ptr [edi + 0x34]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x34
        // 0x5885D1F8: mov esi, dword ptr [edi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x68
        // 0x5885D1FB: lea eax, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5885D1FE: push dword ptr [edi + 0x30]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x30
        // 0x5885D201: push eax
        __asm _emit 0x50
        // 0x5885D202: push edx
        __asm _emit 0x52
        // 0x5885D203: call 0x5885b8d2
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D208: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885D20B: push esi
        __asm _emit 0x56
        // 0x5885D20C: call 0x5885ba04
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D211: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x5885D214: cmp byte ptr [ebp - 1], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5885D218: je 0x5885d236
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5885D21A: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5885D21D: je 0x5885d236
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5885D21F: cmp byte ptr [edi + 0x2e], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x2E
        __asm _emit 0x00
        // 0x5885D223: je 0x5885d229
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885D225: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885D227: jmp 0x5885d238
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5885D229: lea eax, [ebp - 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF8
        // 0x5885D22C: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885D22E: push eax
        __asm _emit 0x50
        // 0x5885D22F: call 0x5885d99f
        __asm _emit 0xE8
        __asm _emit 0x6B
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D234: jmp 0x5885d238
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885D236: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D238: pop edi
        __asm _emit 0x5F
        // 0x5885D239: pop esi
        __asm _emit 0x5E
        // 0x5885D23A: leave
        __asm _emit 0xC9
        // 0x5885D23B: ret
        __asm _emit 0xC3
    }
}
