// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873B3B0 .. +0x18E bytes.
// Source symbol alias: FUN_5873b3b0.
extern "C" __declspec(naked) void FUN_5873b3b0() {
    __asm {
        // 0x5873B3B0: push ebx
        __asm _emit 0x53
        // 0x5873B3B1: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5873B3B5: push esi
        __asm _emit 0x56
        // 0x5873B3B6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873B3B8: mov ecx, dword ptr [esi + 0x510]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B3BE: movzx edx, word ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B3C2: mov al, bl
        __asm _emit 0x8A
        __asm _emit 0xC3
        // 0x5873B3C4: and al, 1
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x5873B3C6: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x5873B3CA: push edi
        __asm _emit 0x57
        // 0x5873B3CB: mov edi, 0xfffe
        __asm _emit 0xBF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B3D0: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x5873B3D3: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873B3D6: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B3DA: mov ecx, dword ptr [esi + 0x518]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B3E0: movzx edx, word ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B3E4: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x5873B3E7: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873B3EA: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B3EE: mov ecx, dword ptr [esi + 0x51c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x1C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B3F4: movzx edx, word ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B3F8: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x5873B3FB: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873B3FE: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B402: mov ecx, dword ptr [esi + 0x530]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B408: movzx edx, word ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B40C: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x5873B40F: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873B412: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B416: mov ecx, dword ptr [esi + 0x534]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B41C: movzx edx, word ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B420: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x5873B423: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873B426: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B42A: mov ecx, dword ptr [esi + 0x538]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B430: movzx edx, word ptr [ecx + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B434: and dx, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD7
        // 0x5873B437: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873B43A: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5873B43E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5873B440: je 0x5873b52b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B446: cmp dword ptr [esi + 0x474], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B44D: je 0x5873b52b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B453: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5873B45A: je 0x5873b52b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B460: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B465: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B46C: jne 0x5873b52b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B472: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x5873B475: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B47B: cmp ecx, dword ptr [edx + 4]
        __asm _emit 0x3B
        __asm _emit 0x4A
        __asm _emit 0x04
        // 0x5873B47E: jne 0x5873b52b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B484: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B48A: push 0x17
        __asm _emit 0x6A
        __asm _emit 0x17
        // 0x5873B48C: push 0x12
        __asm _emit 0x6A
        __asm _emit 0x12
        // 0x5873B48E: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5873B490: call 0x588ebeb0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0x0A
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x5873B495: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873B497: jne 0x5873b52b
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B49D: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B4A2: mov edi, 0x1c
        __asm _emit 0xBF
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B4A7: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B4AD: jle 0x5873b4c3
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5873B4AF: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B4B6: je 0x5873b4c3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873B4B8: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B4BE: mov ecx, dword ptr [eax + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x5873B4C1: jmp 0x5873b4c5
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873B4C3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873B4C5: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873B4C7: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x5873B4CA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873B4CC: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873B4CE: jne 0x5873b52b
        __asm _emit 0x75
        __asm _emit 0x5B
        // 0x5873B4D0: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B4D5: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B4DB: jle 0x5873b4f1
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5873B4DD: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B4E4: je 0x5873b4f1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873B4E6: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B4EC: mov ecx, dword ptr [ecx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x70
        // 0x5873B4EF: jmp 0x5873b4f3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873B4F1: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873B4F3: mov edx, dword ptr [0x58a248fc]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B4F9: push edx
        __asm _emit 0x52
        // 0x5873B4FA: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xC4
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x5873B4FF: mov eax, dword ptr [0x58a248d0]
        __asm _emit 0xA1
        __asm _emit 0xD0
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5873B504: cmp dword ptr [eax + 0x170], edi
        __asm _emit 0x39
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B50A: jle 0x5873b520
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x5873B50C: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B513: je 0x5873b520
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873B515: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B51B: mov ecx, dword ptr [eax + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x70
        // 0x5873B51E: jmp 0x5873b522
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5873B520: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5873B522: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5873B524: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5873B527: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873B529: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873B52B: cmp dword ptr [esp + 0x14], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5873B530: jne 0x5873b538
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x5873B532: mov dword ptr [esi + 0x478], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873B538: pop edi
        __asm _emit 0x5F
        // 0x5873B539: pop esi
        __asm _emit 0x5E
        // 0x5873B53A: pop ebx
        __asm _emit 0x5B
        // 0x5873B53B: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
