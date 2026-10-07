// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CFF80 .. +0x7E bytes.
// Source symbol alias: FUN_587cff80.
extern "C" __declspec(naked) void FUN_587cff80() {
    __asm {
        // 0x587CFF80: cmp dword ptr [ecx + 0x134], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFF87: je 0x587cfffd
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x587CFF89: push ebx
        __asm _emit 0x53
        // 0x587CFF8A: push esi
        __asm _emit 0x56
        // 0x587CFF8B: push edi
        __asm _emit 0x57
        // 0x587CFF8C: lea ebx, [ecx + 0x148]
        __asm _emit 0x8D
        __asm _emit 0x99
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFF92: mov esi, 5
        __asm _emit 0xBE
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFF97: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587CFF99: lea edi, [esi - 4]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0xFC
        // 0x587CFF9C: push ebp
        __asm _emit 0x55
        // 0x587CFF9D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587CFFA0: mov edx, dword ptr [eax - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0xEC
        // 0x587CFFA3: mov ebp, 0xfffe
        __asm _emit 0xBD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFFA8: and word ptr [edx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587CFFAC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587CFFAE: and word ptr [edx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587CFFB2: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587CFFB5: sub esi, edi
        __asm _emit 0x2B
        __asm _emit 0xF7
        // 0x587CFFB7: jne 0x587cffa0
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587CFFB9: cmp dword ptr [ecx + 0xfc], 0xc8
        __asm _emit 0x81
        __asm _emit 0xB9
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFFC3: pop ebp
        __asm _emit 0x5D
        // 0x587CFFC4: jne 0x587cfffa
        __asm _emit 0x75
        __asm _emit 0x34
        // 0x587CFFC6: movzx eax, word ptr [ecx + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CFFCD: cmp word ptr [eax*2 + 0x589c3042], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x34
        __asm _emit 0x45
        __asm _emit 0x42
        __asm _emit 0x30
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CFFD5: je 0x587cfffa
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x587CFFD7: cmp dword ptr [eax*8 + 0x589c3efc], -1
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0xC5
        __asm _emit 0xFC
        __asm _emit 0x3E
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x587CFFDF: je 0x587cfffa
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x587CFFE1: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x587CFFE3: lea edx, [esi + 5]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x05
        // 0x587CFFE6: mov ecx, dword ptr [eax - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0xEC
        // 0x587CFFE9: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x587CFFED: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587CFFEF: or word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x79
        __asm _emit 0x24
        // 0x587CFFF3: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587CFFF6: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x587CFFF8: jne 0x587cffe6
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x587CFFFA: pop edi
        __asm _emit 0x5F
        // 0x587CFFFB: pop esi
        __asm _emit 0x5E
        // 0x587CFFFC: pop ebx
        __asm _emit 0x5B
        // 0x587CFFFD: ret
        __asm _emit 0xC3
    }
}
