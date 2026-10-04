// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E7D40 .. +0xB7 bytes.
// Source symbol alias: FUN_587e7d40.
extern "C" __declspec(naked) void FUN_587e7d40() {
    __asm {
        // 0x587E7D40: push esi
        __asm _emit 0x56
        // 0x587E7D41: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587E7D43: cmp word ptr [esi + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587E7D4B: je 0x587e7d6e
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587E7D4D: mov eax, dword ptr [esi + 0x10c00]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7D53: mov dword ptr [eax + 0x7c], 0x100
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7D5A: mov dword ptr [eax + 0x74], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587E7D61: mov ecx, dword ptr [esi + 0x10c00]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7D67: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E7D69: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E7D6C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E7D6E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587E7D70: cmp word ptr [esi + 0x105a2], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA2
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587E7D78: mov dword ptr [esi + 0x218e4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E7D7E: mov dword ptr [esi + 0x218e8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E7D84: je 0x587e7db4
        __asm _emit 0x74
        __asm _emit 0x2E
        // 0x587E7D86: mov eax, dword ptr [esi + 0x10c04]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7D8C: mov dword ptr [eax + 0x7c], 0x100
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7D93: mov dword ptr [eax + 0x74], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587E7D9A: mov ecx, dword ptr [esi + 0x10c04]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7DA0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587E7DA2: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587E7DA5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587E7DA7: mov esi, dword ptr [esi + 0x10c08]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x08
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7DAD: or word ptr [esi + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x587E7DB2: jmp 0x587e7ddb
        __asm _emit 0xEB
        __asm _emit 0x27
        // 0x587E7DB4: mov eax, dword ptr [esi + 0x10c00]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7DBA: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E7DBF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587E7DC3: mov eax, dword ptr [esi + 0x10c04]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7DC9: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587E7DCB: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587E7DCF: mov esi, dword ptr [esi + 0x10c08]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0x08
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E7DD5: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x587E7DD7: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587E7DDB: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587E7DE1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E7DE3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E7DE5: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E7DE7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E7DE9: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587E7DEB: push 0x80020600
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587E7DF0: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587E7DF5: pop esi
        __asm _emit 0x5E
        // 0x587E7DF6: ret
        __asm _emit 0xC3
    }
}
