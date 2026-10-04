// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888B990 .. +0x95 bytes.
// Source symbol alias: FUN_5888b990.
extern "C" __declspec(naked) void FUN_5888b990() {
    __asm {
        // 0x5888B990: push ecx
        __asm _emit 0x51
        // 0x5888B991: push esi
        __asm _emit 0x56
        // 0x5888B992: push 0x5899fc54
        __asm _emit 0x68
        __asm _emit 0x54
        __asm _emit 0xFC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888B997: lea eax, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5888B99B: push 0x5899fc24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0xFC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888B9A0: push eax
        __asm _emit 0x50
        // 0x5888B9A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888B9A3: call 0x5897ce4a
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x14
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B9A8: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888B9AB: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888B9AD: jne 0x5888ba22
        __asm _emit 0x75
        __asm _emit 0x73
        // 0x5888B9AF: push ebx
        __asm _emit 0x53
        // 0x5888B9B0: push ebp
        __asm _emit 0x55
        // 0x5888B9B1: mov ebp, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888B9B7: push edi
        __asm _emit 0x57
        // 0x5888B9B8: lea edi, [esi + 0x8c]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B9BE: lea ebx, [eax + 5]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x05
        // 0x5888B9C1: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888B9C5: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x5888B9C7: push ecx
        __asm _emit 0x51
        // 0x5888B9C8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5888B9CA: push 0x3c
        __asm _emit 0x6A
        __asm _emit 0x3C
        // 0x5888B9CC: push edx
        __asm _emit 0x52
        // 0x5888B9CD: call 0x5897ce56
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888B9D2: mov ecx, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0xE0
        // 0x5888B9D5: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5888B9D8: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x3F
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5888B9DD: mov esi, dword ptr [edi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0xE0
        // 0x5888B9E0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x5888B9E2: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B9E8: push eax
        __asm _emit 0x50
        // 0x5888B9E9: push ecx
        __asm _emit 0x51
        // 0x5888B9EA: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5888B9EC: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888B9F2: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x5888B9F5: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5888B9F7: inc eax
        __asm _emit 0x40
        // 0x5888B9F8: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5888B9FA: jne 0x5888b9f5
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5888B9FC: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5888B9FE: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5888BA01: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5888BA04: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BA0A: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888BA10: jne 0x5888b9c1
        __asm _emit 0x75
        __asm _emit 0xAF
        // 0x5888BA12: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888BA16: push edx
        __asm _emit 0x52
        // 0x5888BA17: call 0x5897ce3e
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x14
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5888BA1C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888BA1F: pop edi
        __asm _emit 0x5F
        // 0x5888BA20: pop ebp
        __asm _emit 0x5D
        // 0x5888BA21: pop ebx
        __asm _emit 0x5B
        // 0x5888BA22: pop esi
        __asm _emit 0x5E
        // 0x5888BA23: pop ecx
        __asm _emit 0x59
        // 0x5888BA24: ret
        __asm _emit 0xC3
    }
}
