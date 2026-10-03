// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C9780 .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_587c9780() {
    __asm {
        // 0x587C9780: push ebx
        __asm _emit 0x53
        // 0x587C9781: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587C9785: push esi
        __asm _emit 0x56
        // 0x587C9786: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C9788: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587C978B: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587C978E: push edi
        __asm _emit 0x57
        // 0x587C978F: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C9793: lea ecx, [edi + eax - 5]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x07
        __asm _emit 0xFB
        // 0x587C9797: push ecx
        __asm _emit 0x51
        // 0x587C9798: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C979E: lea eax, [edx + ebx + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x1A
        __asm _emit 0x48
        // 0x587C97A2: push eax
        __asm _emit 0x50
        // 0x587C97A3: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C97A8: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587C97AB: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587C97AE: lea edx, [edi + ecx + 4]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x0F
        __asm _emit 0x04
        // 0x587C97B2: lea ecx, [eax + ebx + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x18
        __asm _emit 0x48
        // 0x587C97B6: push edx
        __asm _emit 0x52
        // 0x587C97B7: push ecx
        __asm _emit 0x51
        // 0x587C97B8: mov ecx, dword ptr [esi + 0xf8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C97BE: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x9A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C97C3: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587C97C6: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587C97C9: mov ecx, dword ptr [esi + 0xe8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C97CF: add edx, edi
        __asm _emit 0x03
        __asm _emit 0xD7
        // 0x587C97D1: push edx
        __asm _emit 0x52
        // 0x587C97D2: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x587C97D4: push eax
        __asm _emit 0x50
        // 0x587C97D5: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x9A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C97DA: pop edi
        __asm _emit 0x5F
        // 0x587C97DB: pop esi
        __asm _emit 0x5E
        // 0x587C97DC: pop ebx
        __asm _emit 0x5B
        // 0x587C97DD: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
