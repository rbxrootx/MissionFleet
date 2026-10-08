// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 101 bytes in 1 exact ranges.
// Source symbol alias: FUN_5877de70.

// Ghidra body range 0x5877DE70..0x5877DED5; 101 mapped bytes.
extern "C" __declspec(naked) void FUN_5877de70_segment_00() {
    __asm {
        // 0x5877DE70: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5877DE74: push esi
        __asm _emit 0x56
        // 0x5877DE75: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877DE77: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x5877DE7A: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877DE7E: push edi
        __asm _emit 0x57
        // 0x5877DE7F: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x5877DE82: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5877DE84: je 0x5877deac
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5877DE86: mov ecx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x18
        // 0x5877DE89: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x5877DE8C: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x5877DE8F: add eax, 0x20
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x20
        // 0x5877DE92: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x5877DE95: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5877DE97: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5877DE9A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5877DE9D: mov dword ptr [esi + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x5877DEA0: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5877DEA3: mov dword ptr [esi + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x5877DEA6: mov edx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5877DEA9: mov dword ptr [esi + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x20
        // 0x5877DEAC: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877DEB0: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x5877DEB3: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877DEBA: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877DEC0: push esi
        __asm _emit 0x56
        // 0x5877DEC1: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5877DEC3: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x50
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877DEC8: push esi
        __asm _emit 0x56
        // 0x5877DEC9: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5877DECB: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0x50
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877DED0: pop edi
        __asm _emit 0x5F
        // 0x5877DED1: pop esi
        __asm _emit 0x5E
        // 0x5877DED2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
