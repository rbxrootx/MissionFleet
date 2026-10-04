// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876D3C0 .. +0x9E bytes.
// Source symbol alias: FUN_5876d3c0.
extern "C" __declspec(naked) void FUN_5876d3c0() {
    __asm {
        // 0x5876D3C0: push esi
        __asm _emit 0x56
        // 0x5876D3C1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5876D3C3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876D3C7: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x5876D3CB: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x5876D3CD: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x5876D3CF: jne 0x5876d3fe
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x5876D3D1: mov ecx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876D3D7: push ecx
        __asm _emit 0x51
        // 0x5876D3D8: push 0x384
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D3DD: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876D3DF: call 0x5876d170
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876D3E4: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876D3E8: mov eax, 0xe4ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D3ED: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5876D3F0: mov ecx, 0x400
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D3F5: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5876D3F8: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876D3FC: pop esi
        __asm _emit 0x5E
        // 0x5876D3FD: ret
        __asm _emit 0xC3
        // 0x5876D3FE: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876D402: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5876D406: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5876D409: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x5876D40C: jne 0x5876d448
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x5876D40E: mov eax, dword ptr [0x58a248f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876D413: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5876D416: push eax
        __asm _emit 0x50
        // 0x5876D417: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0xA5
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5876D41C: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5876D41F: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5876D421: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5876D424: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5876D426: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5876D428: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5876D42B: add dword ptr [esi + 0x5c], ecx
        __asm _emit 0x01
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x5876D42E: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876D432: mov eax, 0xe6ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D437: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5876D43A: mov ecx, 0x600
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876D43F: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD1
        // 0x5876D442: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876D446: pop esi
        __asm _emit 0x5E
        // 0x5876D447: ret
        __asm _emit 0xC3
        // 0x5876D448: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x5876D44C: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x5876D450: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x5876D453: cmp dl, 6
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5876D456: je 0x5876d45c
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5876D458: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5876D45C: pop esi
        __asm _emit 0x5E
        // 0x5876D45D: ret
        __asm _emit 0xC3
    }
}
