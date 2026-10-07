// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 167 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972690.

// Ghidra body range 0x58972690..0x58972737; 167 mapped bytes.
extern "C" __declspec(naked) void FUN_58972690_segment_00() {
    __asm {
        // 0x58972690: push esi
        __asm _emit 0x56
        // 0x58972691: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58972695: push edi
        __asm _emit 0x57
        // 0x58972696: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58972698: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5897269A: push eax
        __asm _emit 0x50
        // 0x5897269B: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589726A0: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x589726A3: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x589726A5: push ecx
        __asm _emit 0x51
        // 0x589726A6: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x589726A8: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589726AD: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x589726B0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x589726B2: push edx
        __asm _emit 0x52
        // 0x589726B3: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x589726B6: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589726BB: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x589726BE: mov ax, word ptr [esi + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x589726C2: push eax
        __asm _emit 0x50
        // 0x589726C3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x589726C5: call 0x58972620
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589726CA: mov cx, word ptr [esi + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0E
        // 0x589726CE: mov word ptr [esi + 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x589726D2: push ecx
        __asm _emit 0x51
        // 0x589726D3: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x589726D5: call 0x58972620
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589726DA: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x589726DD: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x589726DF: push edx
        __asm _emit 0x52
        // 0x589726E0: mov word ptr [esi + 0xe], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0E
        // 0x589726E4: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589726E9: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x589726EC: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x589726EF: push eax
        __asm _emit 0x50
        // 0x589726F0: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x589726F2: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589726F7: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x589726FA: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x589726FD: push ecx
        __asm _emit 0x51
        // 0x589726FE: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58972700: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58972705: mov edx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x58972708: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5897270A: push edx
        __asm _emit 0x52
        // 0x5897270B: mov dword ptr [esi + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5897270E: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58972713: mov dword ptr [esi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x1C
        // 0x58972716: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58972719: push eax
        __asm _emit 0x50
        // 0x5897271A: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5897271C: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0x2F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58972721: mov ecx, dword ptr [esi + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58972724: mov dword ptr [esi + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x58972727: push ecx
        __asm _emit 0x51
        // 0x58972728: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5897272A: call 0x58972650
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897272F: mov dword ptr [esi + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58972732: pop edi
        __asm _emit 0x5F
        // 0x58972733: pop esi
        __asm _emit 0x5E
        // 0x58972734: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
