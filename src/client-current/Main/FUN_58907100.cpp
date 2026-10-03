// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58907100 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_58907100() {
    __asm {
        // 0x58907100: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58907104: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58907108: push esi
        __asm _emit 0x56
        // 0x58907109: push edi
        __asm _emit 0x57
        // 0x5890710A: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5890710C: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5890710E: push edi
        __asm _emit 0x57
        // 0x5890710F: push edi
        __asm _emit 0x57
        // 0x58907110: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58907112: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58907116: push eax
        __asm _emit 0x50
        // 0x58907117: push ecx
        __asm _emit 0x51
        // 0x58907118: push edx
        __asm _emit 0x52
        // 0x58907119: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890711B: call 0x589031a0
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58907120: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58907124: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58907128: mov dword ptr [esi + 0x5c], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5890712B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5890712D: mov dword ptr [esi], 0x589a2938
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x38
        __asm _emit 0x29
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58907133: mov dword ptr [esi + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907139: mov dword ptr [esi + 0x50], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x50
        // 0x5890713C: mov dword ptr [esi + 0x54], 0x7fffffff
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x58907143: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x58907146: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x58907149: mov dword ptr [esi + 0x58], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x58
        // 0x5890714C: mov dword ptr [esi + 0xec], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907156: mov dword ptr [esi + 0xf0], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890715C: mov dword ptr [esi + 0xf4], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907162: mov dword ptr [esi + 0xe8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58907168: call 0x58907040
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5890716D: pop edi
        __asm _emit 0x5F
        // 0x5890716E: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58907170: pop esi
        __asm _emit 0x5E
        // 0x58907171: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
