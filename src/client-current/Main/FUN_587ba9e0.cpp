// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BA9E0 .. +0x75 bytes.
// Source symbol alias: FUN_587ba9e0.
extern "C" __declspec(naked) void FUN_587ba9e0() {
    __asm {
        // 0x587BA9E0: push ebx
        __asm _emit 0x53
        // 0x587BA9E1: push ebp
        __asm _emit 0x55
        // 0x587BA9E2: push esi
        __asm _emit 0x56
        // 0x587BA9E3: push edi
        __asm _emit 0x57
        // 0x587BA9E4: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BA9E8: push edi
        __asm _emit 0x57
        // 0x587BA9E9: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587BA9EB: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BA9F1: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587BA9F3: lea eax, [ebx + 9]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x09
        // 0x587BA9F6: push eax
        __asm _emit 0x50
        // 0x587BA9F7: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x6B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA9FC: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587BA9FE: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BAA02: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587BAA04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BAA07: push edi
        __asm _emit 0x57
        // 0x587BAA08: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x587BAA0A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587BAA0D: inc ebx
        __asm _emit 0x43
        // 0x587BAA0E: push ebx
        __asm _emit 0x53
        // 0x587BAA0F: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587BAA12: push eax
        __asm _emit 0x50
        // 0x587BAA13: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587BAA16: call 0x58731b60
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x71
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587BAA1B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587BAA1D: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587BAA20: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587BAA22: inc eax
        __asm _emit 0x40
        // 0x587BAA23: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587BAA25: jne 0x587baa20
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587BAA27: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BAA2D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAA2F: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587BAA31: add eax, 9
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x09
        // 0x587BAA34: push eax
        __asm _emit 0x50
        // 0x587BAA35: push esi
        __asm _emit 0x56
        // 0x587BAA36: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAA38: push ecx
        __asm _emit 0x51
        // 0x587BAA39: push 0x80010f0d
        __asm _emit 0x68
        __asm _emit 0x0D
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BAA3E: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587BAA40: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x62
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BAA45: push esi
        __asm _emit 0x56
        // 0x587BAA46: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0x23
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587BAA4B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BAA4E: pop edi
        __asm _emit 0x5F
        // 0x587BAA4F: pop esi
        __asm _emit 0x5E
        // 0x587BAA50: pop ebp
        __asm _emit 0x5D
        // 0x587BAA51: pop ebx
        __asm _emit 0x5B
        // 0x587BAA52: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
