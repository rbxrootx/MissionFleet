// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907AC0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58907ac0() {
    __asm {
        // 0x58907AC0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58907AC2: push 0x5898aa48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xAA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58907AC7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907ACD: push eax
        __asm _emit 0x50
        // 0x58907ACE: push ecx
        __asm _emit 0x51
        // 0x58907ACF: push esi
        __asm _emit 0x56
        // 0x58907AD0: push edi
        __asm _emit 0x57
        // 0x58907AD1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58907AD6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58907AD8: push eax
        __asm _emit 0x50
        // 0x58907AD9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58907ADD: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907AE3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58907AE5: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58907AE9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58907AEB: call 0x5896cae0
        __asm _emit 0xE8
        __asm _emit 0xF0
        __asm _emit 0x4F
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58907AF0: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58907AF4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58907AF6: push eax
        __asm _emit 0x50
        // 0x58907AF7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58907AF9: mov dword ptr [esp + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58907AFD: mov dword ptr [esi], 0x589a2960
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x60
        __asm _emit 0x29
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58907B03: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58907B06: mov dword ptr [esi + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x58907B09: mov dword ptr [esi + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58907B0C: mov dword ptr [esi + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58907B0F: call 0x589075c0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58907B14: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58907B16: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58907B18: jne 0x58907b20
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x58907B1A: mov dword ptr [esi + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58907B1D: mov dword ptr [esi + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x58907B20: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58907B24: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907B2B: pop ecx
        __asm _emit 0x59
        // 0x58907B2C: pop edi
        __asm _emit 0x5F
        // 0x58907B2D: pop esi
        __asm _emit 0x5E
        // 0x58907B2E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58907B31: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
