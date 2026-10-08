// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 117 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ba960.

// Ghidra body range 0x587BA960..0x587BA9D5; 117 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba960_segment_00() {
    __asm {
        // 0x587BA960: push ebx
        __asm _emit 0x53
        // 0x587BA961: push ebp
        __asm _emit 0x55
        // 0x587BA962: push esi
        __asm _emit 0x56
        // 0x587BA963: push edi
        __asm _emit 0x57
        // 0x587BA964: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BA968: push edi
        __asm _emit 0x57
        // 0x587BA969: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587BA96B: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BA971: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587BA973: lea eax, [ebx + 9]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x09
        // 0x587BA976: push eax
        __asm _emit 0x50
        // 0x587BA977: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x6B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA97C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587BA97E: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BA982: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587BA984: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BA987: push edi
        __asm _emit 0x57
        // 0x587BA988: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x587BA98A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587BA98D: inc ebx
        __asm _emit 0x43
        // 0x587BA98E: push ebx
        __asm _emit 0x53
        // 0x587BA98F: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587BA992: push eax
        __asm _emit 0x50
        // 0x587BA993: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587BA996: call 0x58731b60
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x71
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587BA99B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587BA99D: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587BA9A0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587BA9A2: inc eax
        __asm _emit 0x40
        // 0x587BA9A3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587BA9A5: jne 0x587ba9a0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587BA9A7: mov ecx, dword ptr [0x58a0b4a4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BA9AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA9AF: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587BA9B1: add eax, 9
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x09
        // 0x587BA9B4: push eax
        __asm _emit 0x50
        // 0x587BA9B5: push esi
        __asm _emit 0x56
        // 0x587BA9B6: push ecx
        __asm _emit 0x51
        // 0x587BA9B7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA9B9: push 0x80010f0c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA9BE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587BA9C0: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x62
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA9C5: push esi
        __asm _emit 0x56
        // 0x587BA9C6: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587BA9CB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BA9CE: pop edi
        __asm _emit 0x5F
        // 0x587BA9CF: pop esi
        __asm _emit 0x5E
        // 0x587BA9D0: pop ebp
        __asm _emit 0x5D
        // 0x587BA9D1: pop ebx
        __asm _emit 0x5B
        // 0x587BA9D2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
