// FUN_587B1850: shared reconciliation of two XOR-0xAAAAAAAA state values.
// Called by both record child-state initializers and the verified weapon-fire
// handler. The complete 144-byte mapped instruction stream is preserved;
// field meanings and the FUN_587A15E0 callback contract remain unresolved.
// See docs/current-main-child-encoded-state-reconciliation.md.
// Source symbol alias: FUN_587b1850.
extern "C" __declspec(naked) void FUN_587b1850() {
    __asm {
        // 0x587B1850: push esi
        __asm _emit 0x56
        // 0x587B1851: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B1853: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1859: lea eax, [esi + 0x104]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B185F: mov dword ptr [esi + 0x98], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1869: mov dword ptr [eax], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B186F: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B1875: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587B1878: jne 0x587b188b
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587B187A: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B1880: push 0xaaaaaaaa
        __asm _emit 0x68
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B1885: push eax
        __asm _emit 0x50
        // 0x587B1886: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xFD
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B188B: mov eax, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1891: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B1897: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B189D: push edi
        __asm _emit 0x57
        // 0x587B189E: mov edi, dword ptr [esi + 0x158]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B18A4: xor edi, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF7
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B18AA: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B18AF: add edi, eax
        __asm _emit 0x03
        __asm _emit 0xF8
        // 0x587B18B1: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x587B18B4: jne 0x587b18c9
        __asm _emit 0x75
        __asm _emit 0x13
        // 0x587B18B6: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B18BC: push edi
        __asm _emit 0x57
        // 0x587B18BD: lea eax, [esi + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B18C3: push eax
        __asm _emit 0x50
        // 0x587B18C4: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0xFD
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B18C9: mov dword ptr [esi + 0x9c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B18CF: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587B18D1: pop edi
        __asm _emit 0x5F
        // 0x587B18D2: je 0x587b18de
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x587B18D4: mov dword ptr [esi + 0xf8], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B18DE: pop esi
        __asm _emit 0x5E
        // 0x587B18DF: ret
        __asm _emit 0xC3
    }
}
