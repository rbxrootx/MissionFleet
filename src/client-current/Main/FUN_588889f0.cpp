// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588889F0 .. +0x388 bytes.
extern "C" __declspec(naked) void FUN_588889f0() {
    __asm {
        // 0x588889F0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588889F4: push esi
        __asm _emit 0x56
        // 0x588889F5: push edi
        __asm _emit 0x57
        // 0x588889F6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588889F8: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588889FB: jne 0x58888cec
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A01: cmp dword ptr [esi + 0xc8], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A08: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58888A0C: je 0x58888c2a
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A12: cmp edi, dword ptr [esi + 0x80]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A18: jne 0x58888a39
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58888A1A: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58888A1C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58888A1E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58888A20: push 0x5899fb98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888A25: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58888A2B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58888A2E: push eax
        __asm _emit 0x50
        // 0x58888A2F: push 0x5899bb60
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xBB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888A34: jmp 0x58888c22
        __asm _emit 0xE9
        __asm _emit 0xE9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A39: cmp edi, dword ptr [esi + 0x84]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A3F: jne 0x58888abf
        __asm _emit 0x75
        __asm _emit 0x7E
        // 0x58888A41: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A47: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58888A4B: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58888A4F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58888A52: cmp cl, 2
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x02
        // 0x58888A55: je 0x58888aad
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x58888A57: mov edx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A5D: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x24
        // 0x58888A61: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x58888A65: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x58888A67: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x58888A69: je 0x58888aad
        __asm _emit 0x74
        __asm _emit 0x42
        // 0x58888A6B: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A71: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58888A75: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58888A79: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58888A7C: cmp dl, 5
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x58888A7F: je 0x58888a9b
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x58888A81: mov eax, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A87: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58888A8B: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x08
        // 0x58888A8F: and cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE1
        __asm _emit 0x1F
        // 0x58888A92: cmp cl, 4
        __asm _emit 0x80
        __asm _emit 0xF9
        __asm _emit 0x04
        // 0x58888A95: jne 0x58888c2a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888A9B: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888AA1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888AA3: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58888AA6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58888AA8: jmp 0x58888c2a
        __asm _emit 0xE9
        __asm _emit 0x7D
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888AAD: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888AB3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888AB5: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58888AB8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58888ABA: jmp 0x58888c2a
        __asm _emit 0xE9
        __asm _emit 0x6B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888ABF: cmp edi, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888AC5: jne 0x58888b18
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x58888AC7: mov eax, dword ptr [0x58a245ec]
        __asm _emit 0xA1
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888ACC: cmp word ptr [eax + 0x128], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58888AD4: je 0x58888af4
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58888AD6: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888ADB: mov word ptr [eax + 0x12a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888AE2: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888AE8: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888AEA: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58888AED: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58888AEF: jmp 0x58888c2a
        __asm _emit 0xE9
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888AF4: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888AFA: cmp ecx, dword ptr [0x58a24598]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888B00: jne 0x58888c2a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B06: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888B0C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888B0E: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58888B11: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58888B13: jmp 0x58888c2a
        __asm _emit 0xE9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B18: cmp edi, dword ptr [esi + 0x90]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B1E: jne 0x58888b71
        __asm _emit 0x75
        __asm _emit 0x51
        // 0x58888B20: mov eax, dword ptr [0x58a245ec]
        __asm _emit 0xA1
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888B25: cmp word ptr [eax + 0x128], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x58888B2D: je 0x58888b4d
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58888B2F: mov ecx, 5
        __asm _emit 0xB9
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B34: mov word ptr [eax + 0x12a], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x2A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B3B: mov ecx, dword ptr [0x58a245ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888B41: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888B43: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58888B46: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58888B48: jmp 0x58888c2a
        __asm _emit 0xE9
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B4D: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888B53: cmp ecx, dword ptr [0x58a24598]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888B59: jne 0x58888c2a
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B5F: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888B65: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888B67: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58888B6A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58888B6C: jmp 0x58888c2a
        __asm _emit 0xE9
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B71: cmp edi, dword ptr [esi + 0x94]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B77: jne 0x58888b98
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58888B79: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58888B7B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58888B7D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58888B7F: push 0x5899fb80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888B84: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58888B8A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58888B8D: push eax
        __asm _emit 0x50
        // 0x58888B8E: push 0x5899bb60
        __asm _emit 0x68
        __asm _emit 0x60
        __asm _emit 0xBB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888B93: jmp 0x58888c22
        __asm _emit 0xE9
        __asm _emit 0x8A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B98: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888B9E: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x58888BA0: jne 0x58888c00
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x58888BA2: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888BA7: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888BAD: jne 0x58888bd3
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x58888BAF: cmp dword ptr [eax + 0x500], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888BB6: je 0x58888bdc
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58888BB8: mov dword ptr [eax + 0x500], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888BC2: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888BC8: call 0x587d6db0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xE1
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58888BCD: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888BD3: mov dword ptr [ecx + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888BDA: jmp 0x58888c2a
        __asm _emit 0xEB
        __asm _emit 0x4E
        // 0x58888BDC: mov dword ptr [eax + 0x500], 1
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888BE6: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888BEC: call 0x587d6db0
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0xE1
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58888BF1: mov edx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888BF7: mov dword ptr [edx + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888BFE: jmp 0x58888c2a
        __asm _emit 0xEB
        __asm _emit 0x2A
        // 0x58888C00: cmp edi, dword ptr [esi + 0xf4]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888C06: jne 0x58888c2a
        __asm _emit 0x75
        __asm _emit 0x22
        // 0x58888C08: push 5
        __asm _emit 0x6A
        __asm _emit 0x05
        // 0x58888C0A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58888C0C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58888C0E: push 0x5899fb64
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888C13: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58888C19: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58888C1C: push eax
        __asm _emit 0x50
        // 0x58888C1D: push 0x58996c38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x6C
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888C22: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58888C24: call dword ptr [0x5898c3b4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58888C2A: cmp edi, dword ptr [esi + 0xdc]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888C30: jne 0x58888c53
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58888C32: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888C38: cmp dword ptr [ecx + 0xf8], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888C3F: jne 0x58888d71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888C45: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58888C47: call 0x587d16b0
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0x8A
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58888C4C: pop edi
        __asm _emit 0x5F
        // 0x58888C4D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888C4F: pop esi
        __asm _emit 0x5E
        // 0x58888C50: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888C53: cmp edi, dword ptr [esi + 0xe8]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888C59: jne 0x58888c7c
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58888C5B: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888C61: cmp dword ptr [ecx + 0xf8], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888C68: jne 0x58888d71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888C6E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58888C70: call 0x587d16b0
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x8A
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58888C75: pop edi
        __asm _emit 0x5F
        // 0x58888C76: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888C78: pop esi
        __asm _emit 0x5E
        // 0x58888C79: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888C7C: cmp edi, dword ptr [esi + 0xe0]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888C82: jne 0x58888ca5
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58888C84: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888C8A: cmp dword ptr [ecx + 0xf8], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888C91: jne 0x58888d71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xDA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888C97: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58888C99: call 0x587d16b0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x8A
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58888C9E: pop edi
        __asm _emit 0x5F
        // 0x58888C9F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888CA1: pop esi
        __asm _emit 0x5E
        // 0x58888CA2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888CA5: cmp edi, dword ptr [esi + 0xe4]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888CAB: jne 0x58888cce
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x58888CAD: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888CB3: cmp dword ptr [ecx + 0xf8], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888CBA: jne 0x58888d71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888CC0: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58888CC2: call 0x587d16b0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0x89
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58888CC7: pop edi
        __asm _emit 0x5F
        // 0x58888CC8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888CCA: pop esi
        __asm _emit 0x5E
        // 0x58888CCB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888CCE: cmp edi, dword ptr [esi + 0xec]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888CD4: jne 0x58888d71
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888CDA: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888CE0: call 0x587d1810
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x8B
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x58888CE5: pop edi
        __asm _emit 0x5F
        // 0x58888CE6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888CE8: pop esi
        __asm _emit 0x5E
        // 0x58888CE9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888CEC: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x58888CEF: jne 0x58888d35
        __asm _emit 0x75
        __asm _emit 0x44
        // 0x58888CF1: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58888CF5: cmp edi, dword ptr [esi + 0x80]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888CFB: jne 0x58888d04
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58888CFD: push 0x5899fb48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888D02: jmp 0x58888d11
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58888D04: cmp edi, dword ptr [esi + 0x84]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888D0A: jne 0x58888d71
        __asm _emit 0x75
        __asm _emit 0x65
        // 0x58888D0C: push 0x5899fb28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0xFB
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58888D11: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58888D17: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888D1D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58888D20: push eax
        __asm _emit 0x50
        // 0x58888D21: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x58888D23: push 0xc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888D28: push edi
        __asm _emit 0x57
        // 0x58888D29: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0x99
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58888D2E: pop edi
        __asm _emit 0x5F
        // 0x58888D2F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888D31: pop esi
        __asm _emit 0x5E
        // 0x58888D32: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888D35: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58888D38: jne 0x58888d51
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x58888D3A: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58888D3E: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58888D44: push eax
        __asm _emit 0x50
        // 0x58888D45: call 0x58762610
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x98
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x58888D4A: pop edi
        __asm _emit 0x5F
        // 0x58888D4B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888D4D: pop esi
        __asm _emit 0x5E
        // 0x58888D4E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58888D51: cmp eax, 0xef10
        __asm _emit 0x3D
        __asm _emit 0x10
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888D56: jne 0x58888d71
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58888D58: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58888D5C: mov ecx, dword ptr [esi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888D62: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58888D64: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x58888D67: push eax
        __asm _emit 0x50
        // 0x58888D68: push 0xef10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58888D6D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58888D6F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58888D71: pop edi
        __asm _emit 0x5F
        // 0x58888D72: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58888D74: pop esi
        __asm _emit 0x5E
        // 0x58888D75: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
