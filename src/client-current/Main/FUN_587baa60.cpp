// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587BAA60 .. +0x75 bytes.
// Source symbol alias: FUN_587baa60.
extern "C" __declspec(naked) void FUN_587baa60() {
    __asm {
        // 0x587BAA60: push ebx
        __asm _emit 0x53
        // 0x587BAA61: push ebp
        __asm _emit 0x55
        // 0x587BAA62: push esi
        __asm _emit 0x56
        // 0x587BAA63: push edi
        __asm _emit 0x57
        // 0x587BAA64: mov edi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BAA68: push edi
        __asm _emit 0x57
        // 0x587BAA69: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587BAA6B: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587BAA71: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x587BAA73: lea eax, [ebx + 9]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x09
        // 0x587BAA76: push eax
        __asm _emit 0x50
        // 0x587BAA77: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x6A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BAA7C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x587BAA7E: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BAA82: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587BAA84: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BAA87: push edi
        __asm _emit 0x57
        // 0x587BAA88: mov dword ptr [esi], ecx
        __asm _emit 0x89
        __asm _emit 0x0E
        // 0x587BAA8A: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587BAA8D: inc ebx
        __asm _emit 0x43
        // 0x587BAA8E: push ebx
        __asm _emit 0x53
        // 0x587BAA8F: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587BAA92: push eax
        __asm _emit 0x50
        // 0x587BAA93: mov dword ptr [esi + 4], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587BAA96: call 0x58731b60
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0x70
        __asm _emit 0xF7
        __asm _emit 0xFF
        // 0x587BAA9B: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587BAA9D: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x587BAAA0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x587BAAA2: inc eax
        __asm _emit 0x40
        // 0x587BAAA3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587BAAA5: jne 0x587baaa0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587BAAA7: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587BAAAD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAAAF: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x587BAAB1: add eax, 9
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x09
        // 0x587BAAB4: push eax
        __asm _emit 0x50
        // 0x587BAAB5: push esi
        __asm _emit 0x56
        // 0x587BAAB6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BAAB8: push ecx
        __asm _emit 0x51
        // 0x587BAAB9: push 0x80010f0e
        __asm _emit 0x68
        __asm _emit 0x0E
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BAABE: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x587BAAC0: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x61
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BAAC5: push esi
        __asm _emit 0x56
        // 0x587BAAC6: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x23
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587BAACB: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587BAACE: pop edi
        __asm _emit 0x5F
        // 0x587BAACF: pop esi
        __asm _emit 0x5E
        // 0x587BAAD0: pop ebp
        __asm _emit 0x5D
        // 0x587BAAD1: pop ebx
        __asm _emit 0x5B
        // 0x587BAAD2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
