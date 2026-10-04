// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587EBCB0 .. +0xED bytes.
// Source symbol alias: FUN_587ebcb0.
extern "C" __declspec(naked) void FUN_587ebcb0() {
    __asm {
        // 0x587EBCB0: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBCB5: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBCBC: jne 0x587ebd87
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBCC2: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587EBCC7: push esi
        __asm _emit 0x56
        // 0x587EBCC8: mov esi, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBCCE: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587EBCD1: mov edx, dword ptr [ecx + eax*4 + 0xe8c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBCD8: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587EBCDA: je 0x587ebcfc
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x587EBCDC: movzx edx, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x12
        // 0x587EBCDF: cmp dx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587EBCE3: jne 0x587ebcfc
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x587EBCE5: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBCEB: push 0x3ef
        __asm _emit 0x68
        __asm _emit 0xEF
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBCF0: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EBCF5: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBCFA: pop esi
        __asm _emit 0x5E
        // 0x587EBCFB: ret
        __asm _emit 0xC3
        // 0x587EBCFC: mov edx, dword ptr [ecx + eax*4 + 0xe8c]
        __asm _emit 0x8B
        __asm _emit 0x94
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD03: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x587EBD05: je 0x587ebd70
        __asm _emit 0x74
        __asm _emit 0x69
        // 0x587EBD07: movzx edx, byte ptr [edx]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x12
        // 0x587EBD0A: cmp dx, 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x587EBD0E: jne 0x587ebd70
        __asm _emit 0x75
        __asm _emit 0x60
        // 0x587EBD10: movzx edx, byte ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587EBD15: lea eax, [edx + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x42
        // 0x587EBD18: lea eax, [eax*4 + 0xf0c]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0x0C
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD1F: cmp dword ptr [eax + ecx], 0
        __asm _emit 0x83
        __asm _emit 0x3C
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x587EBD23: je 0x587ebd5c
        __asm _emit 0x74
        __asm _emit 0x37
        // 0x587EBD25: mov edx, dword ptr [eax + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x08
        // 0x587EBD28: mov al, byte ptr [edx + 0x9b]
        __asm _emit 0x8A
        __asm _emit 0x82
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD2E: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBD34: and al, 0xf
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587EBD36: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x587EBD38: jne 0x587ebd4b
        __asm _emit 0x75
        __asm _emit 0x11
        // 0x587EBD3A: push 0x3e9
        __asm _emit 0x68
        __asm _emit 0xE9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD3F: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EBD44: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD49: pop esi
        __asm _emit 0x5E
        // 0x587EBD4A: ret
        __asm _emit 0xC3
        // 0x587EBD4B: push 0x3ec
        __asm _emit 0x68
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD50: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EBD55: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD5A: pop esi
        __asm _emit 0x5E
        // 0x587EBD5B: ret
        __asm _emit 0xC3
        // 0x587EBD5C: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBD62: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD67: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EBD6C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EBD6E: pop esi
        __asm _emit 0x5E
        // 0x587EBD6F: ret
        __asm _emit 0xC3
        // 0x587EBD70: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBD76: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD7B: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0x20
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EBD80: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD85: pop esi
        __asm _emit 0x5E
        // 0x587EBD86: ret
        __asm _emit 0xC3
        // 0x587EBD87: mov ecx, dword ptr [0x58a247fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587EBD8D: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD92: call 0x588c0da0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x587EBD97: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587EBD9C: ret
        __asm _emit 0xC3
    }
}
