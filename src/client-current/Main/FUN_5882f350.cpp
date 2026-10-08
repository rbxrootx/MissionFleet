// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 222 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882f350.

// Ghidra body range 0x5882F350..0x5882F42E; 222 mapped bytes.
extern "C" __declspec(naked) void FUN_5882f350_segment_00() {
    __asm {
        // 0x5882F350: push esi
        __asm _emit 0x56
        // 0x5882F351: push edi
        __asm _emit 0x57
        // 0x5882F352: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882F356: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5882F358: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F35E: push edi
        __asm _emit 0x57
        // 0x5882F35F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0xFC
        __asm _emit 0x7F
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882F364: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F367: push edi
        __asm _emit 0x57
        // 0x5882F368: call 0x587865e0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x72
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F36D: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F373: push eax
        __asm _emit 0x50
        // 0x5882F374: mov dword ptr [esi + 0xc8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F37A: call 0x5890bc40
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0xC8
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882F37F: mov eax, dword ptr [0x58a0b468]
        __asm _emit 0xA1
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5882F384: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5882F389: cmp eax, dword ptr [esi + 0xc8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F38F: jb 0x5882f3ea
        __asm _emit 0x72
        __asm _emit 0x59
        // 0x5882F391: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5882F394: call 0x58785fc0
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0x6C
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F399: add eax, dword ptr [esi + 0xc8]
        __asm _emit 0x03
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F39F: cmp eax, 0xf4240
        __asm _emit 0x3D
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5882F3A4: ja 0x5882f3ea
        __asm _emit 0x77
        __asm _emit 0x44
        // 0x5882F3A6: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F3AB: cmp dword ptr [eax + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x5882F3B2: jle 0x5882f3ca
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5882F3B4: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F3BB: je 0x5882f3ca
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5882F3BD: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F3C3: add eax, 0x8c0
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F3C8: jmp 0x5882f3cc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882F3CA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F3CC: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F3D2: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F3D8: mov edx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F3DE: pop edi
        __asm _emit 0x5F
        // 0x5882F3DF: mov dword ptr [edx + 0x60], 0xffffff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882F3E6: pop esi
        __asm _emit 0x5E
        // 0x5882F3E7: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5882F3EA: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xA1
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F3EF: cmp dword ptr [eax + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x5882F3F6: jle 0x5882f40e
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5882F3F8: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F3FF: je 0x5882f40e
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5882F401: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F407: add eax, 0x940
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F40C: jmp 0x5882f410
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5882F40E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882F410: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F416: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F41C: mov edx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F422: pop edi
        __asm _emit 0x5F
        // 0x5882F423: mov dword ptr [edx + 0x60], 0xff
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882F42A: pop esi
        __asm _emit 0x5E
        // 0x5882F42B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
