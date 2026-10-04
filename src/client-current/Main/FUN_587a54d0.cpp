// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A54D0 .. +0x64 bytes.
// Source symbol alias: FUN_587a54d0.
extern "C" __declspec(naked) void FUN_587a54d0() {
    __asm {
        // 0x587A54D0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587A54D3: push esi
        __asm _emit 0x56
        // 0x587A54D4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A54D6: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587A54D9: push edi
        __asm _emit 0x57
        // 0x587A54DA: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A54DC: jne 0x587a54e2
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587A54DE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587A54E0: jmp 0x587a54ea
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x587A54E2: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587A54E5: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x587A54E7: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x587A54EA: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587A54ED: mov edx, edi
        __asm _emit 0x8B
        __asm _emit 0xD7
        // 0x587A54EF: sub edx, ecx
        __asm _emit 0x2B
        __asm _emit 0xD1
        // 0x587A54F1: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x587A54F4: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x587A54F6: jae 0x587a550e
        __asm _emit 0x73
        __asm _emit 0x16
        // 0x587A54F8: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A54FC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587A54FE: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0F
        // 0x587A5500: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587A5503: mov dword ptr [esi + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x587A5506: pop edi
        __asm _emit 0x5F
        // 0x587A5507: pop esi
        __asm _emit 0x5E
        // 0x587A5508: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A550B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A550E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587A5510: jbe 0x587a5517
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587A5512: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x77
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A5517: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A551B: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A551D: push edx
        __asm _emit 0x52
        // 0x587A551E: push edi
        __asm _emit 0x57
        // 0x587A551F: push eax
        __asm _emit 0x50
        // 0x587A5520: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A5524: push eax
        __asm _emit 0x50
        // 0x587A5525: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A5527: call 0x588f6890
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587A552C: pop edi
        __asm _emit 0x5F
        // 0x587A552D: pop esi
        __asm _emit 0x5E
        // 0x587A552E: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587A5531: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
