// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58734D50 .. +0x83 bytes.
// Source symbol alias: FUN_58734d50.
extern "C" __declspec(naked) void FUN_58734d50() {
    __asm {
        // 0x58734D50: push ebx
        __asm _emit 0x53
        // 0x58734D51: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58734D55: push esi
        __asm _emit 0x56
        // 0x58734D56: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58734D58: push edi
        __asm _emit 0x57
        // 0x58734D59: cmp dword ptr [esi + 0x14], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x58734D5C: jae 0x58734d63
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58734D5E: call 0x589714f6
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0xC7
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58734D63: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58734D66: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58734D6A: sub eax, ebx
        __asm _emit 0x2B
        __asm _emit 0xC3
        // 0x58734D6C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58734D6E: jae 0x58734d72
        __asm _emit 0x73
        __asm _emit 0x02
        // 0x58734D70: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58734D72: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58734D74: jbe 0x58734dcb
        __asm _emit 0x76
        __asm _emit 0x55
        // 0x58734D76: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58734D79: push ebp
        __asm _emit 0x55
        // 0x58734D7A: lea ebp, [esi + 4]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x04
        // 0x58734D7D: cmp ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x58734D80: jb 0x58734d8b
        __asm _emit 0x72
        __asm _emit 0x09
        // 0x58734D82: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58734D85: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58734D89: jmp 0x58734d8f
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58734D8B: mov dword ptr [esp + 0x14], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58734D8F: cmp ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x58734D92: jb 0x58734d99
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58734D94: mov edx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x00
        // 0x58734D97: jmp 0x58734d9b
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58734D99: mov edx, ebp
        __asm _emit 0x8B
        __asm _emit 0xD5
        // 0x58734D9B: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58734D9D: push eax
        __asm _emit 0x50
        // 0x58734D9E: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58734DA2: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58734DA4: add eax, edi
        __asm _emit 0x03
        __asm _emit 0xC7
        // 0x58734DA6: push eax
        __asm _emit 0x50
        // 0x58734DA7: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58734DA9: push ecx
        __asm _emit 0x51
        // 0x58734DAA: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x58734DAC: push edx
        __asm _emit 0x52
        // 0x58734DAD: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x7E
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58734DB2: mov eax, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58734DB5: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58734DB7: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58734DBA: cmp dword ptr [esi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x18
        __asm _emit 0x10
        // 0x58734DBE: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x58734DC1: jb 0x58734dc6
        __asm _emit 0x72
        __asm _emit 0x03
        // 0x58734DC3: mov ebp, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x6D
        __asm _emit 0x00
        // 0x58734DC6: mov byte ptr [eax + ebp], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x58734DCA: pop ebp
        __asm _emit 0x5D
        // 0x58734DCB: pop edi
        __asm _emit 0x5F
        // 0x58734DCC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58734DCE: pop esi
        __asm _emit 0x5E
        // 0x58734DCF: pop ebx
        __asm _emit 0x5B
        // 0x58734DD0: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
