// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588A6680 .. +0x9A bytes.
// Source symbol alias: FUN_588a6680.
extern "C" __declspec(naked) void FUN_588a6680() {
    __asm {
        // 0x588A6680: push esi
        __asm _emit 0x56
        // 0x588A6681: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588A6683: mov eax, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6689: mov dword ptr [eax + 0x68], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6690: mov ecx, dword ptr [esi + 0x17c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6696: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6698: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A669B: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A669D: movzx eax, word ptr [esi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A66A4: cmp ax, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x08
        // 0x588A66A8: je 0x588a6718
        __asm _emit 0x74
        __asm _emit 0x6E
        // 0x588A66AA: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x588A66AE: je 0x588a6718
        __asm _emit 0x74
        __asm _emit 0x68
        // 0x588A66B0: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A66B5: mov esi, 0xf
        __asm _emit 0xBE
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A66BA: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A66C0: jle 0x588a66d6
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588A66C2: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A66C9: je 0x588a66d6
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588A66CB: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A66D1: mov ecx, dword ptr [ecx + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x3C
        // 0x588A66D4: jmp 0x588a66d8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588A66D6: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A66D8: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A66DE: push edx
        __asm _emit 0x52
        // 0x588A66DF: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x588A66E4: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588A66E9: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A66EF: jle 0x588a670e
        __asm _emit 0x7E
        __asm _emit 0x1D
        // 0x588A66F1: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A66F8: je 0x588a670e
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x588A66FA: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588A6700: mov ecx, dword ptr [eax + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x3C
        // 0x588A6703: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6705: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6708: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588A670A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A670C: pop esi
        __asm _emit 0x5E
        // 0x588A670D: ret
        __asm _emit 0xC3
        // 0x588A670E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588A6710: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588A6712: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588A6715: push ecx
        __asm _emit 0x51
        // 0x588A6716: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588A6718: pop esi
        __asm _emit 0x5E
        // 0x588A6719: ret
        __asm _emit 0xC3
    }
}
