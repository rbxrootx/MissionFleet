// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588761A5 .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_588761a5() {
    __asm {
        // 0x588761A5: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588761A7: push ebp
        __asm _emit 0x55
        // 0x588761A8: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588761AA: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588761AD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588761AF: je 0x58876224
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x588761B1: lock dec dword ptr [eax + 0xc]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x588761B5: mov ecx, dword ptr [eax + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x7C
        // 0x588761B8: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588761BA: je 0x588761bf
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x588761BC: lock dec dword ptr [ecx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x09
        // 0x588761BF: mov ecx, dword ptr [eax + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588761C5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588761C7: je 0x588761cc
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x588761C9: lock dec dword ptr [ecx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x09
        // 0x588761CC: mov ecx, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588761D2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588761D4: je 0x588761d9
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x588761D6: lock dec dword ptr [ecx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x09
        // 0x588761D9: mov ecx, dword ptr [eax + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588761DF: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588761E1: je 0x588761e6
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x588761E3: lock dec dword ptr [ecx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x09
        // 0x588761E6: push esi
        __asm _emit 0x56
        // 0x588761E7: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x588761E9: lea ecx, [eax + 0x28]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x28
        // 0x588761EC: pop esi
        __asm _emit 0x5E
        // 0x588761ED: cmp dword ptr [ecx - 8], 0x58907520
        __asm _emit 0x81
        __asm _emit 0x79
        __asm _emit 0xF8
        __asm _emit 0x20
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x588761F4: je 0x588761ff
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x588761F6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588761F8: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588761FA: je 0x588761ff
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x588761FC: lock dec dword ptr [edx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x0A
        // 0x588761FF: cmp dword ptr [ecx - 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0xF4
        __asm _emit 0x00
        // 0x58876203: je 0x5887620f
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58876205: mov edx, dword ptr [ecx - 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0xFC
        // 0x58876208: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5887620A: je 0x5887620f
        __asm _emit 0x74
        __asm _emit 0x03
        // 0x5887620C: lock dec dword ptr [edx]
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x0A
        // 0x5887620F: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x58876212: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x58876215: jne 0x588761ed
        __asm _emit 0x75
        __asm _emit 0xD6
        // 0x58876217: pop esi
        __asm _emit 0x5E
        // 0x58876218: push dword ptr [eax + 0x9c]
        __asm _emit 0xFF
        __asm _emit 0xB0
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887621E: call 0x5887617c
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876223: pop ecx
        __asm _emit 0x59
        // 0x58876224: pop ebp
        __asm _emit 0x5D
        // 0x58876225: ret
        __asm _emit 0xC3
    }
}
