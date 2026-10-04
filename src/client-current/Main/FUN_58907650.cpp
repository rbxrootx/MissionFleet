// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907650 .. +0x43 bytes.
// Source symbol alias: FUN_58907650.
extern "C" __declspec(naked) void FUN_58907650() {
    __asm {
        // 0x58907650: cmp dword ptr [0x58a28534], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58907657: push esi
        __asm _emit 0x56
        // 0x58907658: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5890765A: jne 0x58907665
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x5890765C: cmp dword ptr [0x58a28538], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x58907663: je 0x58907691
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x58907665: mov eax, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x58907668: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890766A: je 0x5890767b
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5890766C: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890766E: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58907671: push eax
        __asm _emit 0x50
        // 0x58907672: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58907674: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890767B: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5890767E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907680: je 0x58907691
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58907682: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58907684: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x58907687: push eax
        __asm _emit 0x50
        // 0x58907688: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890768A: mov dword ptr [esi + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907691: pop esi
        __asm _emit 0x5E
        // 0x58907692: ret
        __asm _emit 0xC3
    }
}
