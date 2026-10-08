// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 316 bytes in 1 exact ranges.
// Source symbol alias: FUN_588337a0.

// Ghidra body range 0x588337A0..0x588338DC; 316 mapped bytes.
extern "C" __declspec(naked) void FUN_588337a0_segment_00() {
    __asm {
        // 0x588337A0: push esi
        __asm _emit 0x56
        // 0x588337A1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588337A3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588337A7: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588337AC: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588337AF: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588337B4: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588337B7: jne 0x588338da
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x1D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588337BD: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588337C1: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588337C6: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588337C9: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588337CE: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588337D1: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588337D5: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588337DA: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588337DD: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588337E2: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588337E7: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588337EA: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588337EF: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588337F4: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588337F7: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588337FC: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833801: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58833804: push 0x5898c922
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58833809: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x5883380E: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58833813: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833815: je 0x58833876
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x58833817: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5883381D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883381F: push eax
        __asm _emit 0x50
        // 0x58833820: call 0x58753bf0
        __asm _emit 0xE8
        __asm _emit 0xCB
        __asm _emit 0x03
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58833825: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58833827: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833829: je 0x58833864
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5883382B: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x58833830: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833836: push eax
        __asm _emit 0x50
        // 0x58833837: call 0x58753980
        __asm _emit 0xE8
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5883383C: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5883383F: push eax
        __asm _emit 0x50
        // 0x58833840: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833845: mov ecx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883384B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883384D: push ecx
        __asm _emit 0x51
        // 0x5883384E: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833854: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58833859: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x5883385C: push eax
        __asm _emit 0x50
        // 0x5883385D: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58833862: jmp 0x58833876
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x58833864: mov edx, dword ptr [0x58a0b4a0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883386A: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833870: push edx
        __asm _emit 0x52
        // 0x58833871: call 0x587b9290
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x5A
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58833876: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5883387D: je 0x588338da
        __asm _emit 0x74
        __asm _emit 0x5B
        // 0x5883387F: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833885: push 0x58a0b4a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883388A: call 0x58754080
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0x07
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5883388F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58833891: je 0x588338c7
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x58833893: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58833899: push 0x58a0b4a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883389E: call 0x58753e80
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0x05
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588338A3: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588338A6: push eax
        __asm _emit 0x50
        // 0x588338A7: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588338AC: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588338B2: push 0x58a0b4a0
        __asm _emit 0x68
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588338B7: call 0x58753e60
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x05
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588338BC: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588338BF: push eax
        __asm _emit 0x50
        // 0x588338C0: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xE4
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x588338C5: pop esi
        __asm _emit 0x5E
        // 0x588338C6: ret
        __asm _emit 0xC3
        // 0x588338C7: mov eax, dword ptr [0x58a0b4a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x588338CC: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588338D2: push eax
        __asm _emit 0x50
        // 0x588338D3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588338D5: call 0x587b9290
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x59
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588338DA: pop esi
        __asm _emit 0x5E
        // 0x588338DB: ret
        __asm _emit 0xC3
    }
}
