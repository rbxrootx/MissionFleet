// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 87 bytes in 1 exact ranges.
// Source symbol alias: FUN_5875e290.

// Ghidra body range 0x5875E290..0x5875E2E7; 87 mapped bytes.
extern "C" __declspec(naked) void FUN_5875e290_segment_00() {
    __asm {
        // 0x5875E290: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875E294: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875E298: push esi
        __asm _emit 0x56
        // 0x5875E299: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5875E29B: push eax
        __asm _emit 0x50
        // 0x5875E29C: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875E2A0: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875E2A2: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5875E2A6: push ecx
        __asm _emit 0x51
        // 0x5875E2A7: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875E2AB: push edx
        __asm _emit 0x52
        // 0x5875E2AC: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875E2B0: push eax
        __asm _emit 0x50
        // 0x5875E2B1: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875E2B5: push ecx
        __asm _emit 0x51
        // 0x5875E2B6: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5875E2BA: push edx
        __asm _emit 0x52
        // 0x5875E2BB: push eax
        __asm _emit 0x50
        // 0x5875E2BC: push ecx
        __asm _emit 0x51
        // 0x5875E2BD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875E2BF: call 0x587b7260
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x8F
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x5875E2C4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875E2C6: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x5875E2C9: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x5875E2CC: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x5875E2CF: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x5875E2D2: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5875E2D5: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5875E2D8: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x5875E2DB: mov dword ptr [esi], 0x5898d9dc
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xDC
        __asm _emit 0xD9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875E2E1: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875E2E3: pop esi
        __asm _emit 0x5E
        // 0x5875E2E4: ret 0x20
        __asm _emit 0xC2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
