// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5896CAE0 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_5896cae0() {
    __asm {
        // 0x5896CAE0: push esi
        __asm _emit 0x56
        // 0x5896CAE1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5896CAE3: mov dword ptr [esi], 0x589a2e94
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x94
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5896CAE9: cmp dword ptr [0x58a28534], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5896CAF0: jne 0x5896cb0d
        __asm _emit 0x75
        __asm _emit 0x1B
        // 0x5896CAF2: cmp dword ptr [0x58a28538], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5896CAF9: jne 0x5896cb0d
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x5896CAFB: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CB00: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5896CB02: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5896CB04: push eax
        __asm _emit 0x50
        // 0x5896CB05: call 0x5896c9a0
        __asm _emit 0xE8
        __asm _emit 0x96
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896CB0A: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5896CB0D: inc dword ptr [0x58a28514]
        __asm _emit 0xFF
        __asm _emit 0x05
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896CB13: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5896CB17: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5896CB1A: mov dword ptr [esi + 8], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896CB21: mov dword ptr [esi + 0xc], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896CB28: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5896CB2A: pop esi
        __asm _emit 0x5E
        // 0x5896CB2B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
