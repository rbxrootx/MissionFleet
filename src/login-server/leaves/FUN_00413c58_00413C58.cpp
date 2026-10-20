// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413C58 .. +0xF1 bytes.
extern "C" __declspec(naked) void FUN_00413c58_00413C58() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 33 C9: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xc9
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 39 8E CC 00 00 00: cmp dword ptr [esi + 0xcc], ecx
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 86 B0 00 00 00 01 00 00 00: mov dword ptr [esi + 0xb0], 1
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x413c7c
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes 39 8E D0 00 00 00: cmp dword ptr [esi + 0xd0], ecx
        __asm _emit 0x39
        __asm _emit 0x8e
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 7A: je 0x413cf6
        __asm _emit 0x74
        __asm _emit 0x7a
        ; Exact mapped bytes 8B 46 08: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x08
        ; Exact mapped bytes 39 48 3C: cmp dword ptr [eax + 0x3c], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x3c
        ; Exact mapped bytes 74 72: je 0x413cf6
        __asm _emit 0x74
        __asm _emit 0x72
        ; Exact mapped bytes 8D 4D FE: lea ecx, [ebp - 2]
        __asm _emit 0x8d
        __asm _emit 0x4d
        __asm _emit 0xfe
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8D BE AC 00 00 00: lea edi, [esi + 0xac]
        __asm _emit 0x8d
        __asm _emit 0xbe
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 04: push 4
        __asm _emit 0x6a
        __asm _emit 0x04
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 6A 2B: push 0x2b
        __asm _emit 0x6a
        __asm _emit 0x2b
        ; Exact mapped bytes FF 70 04: push dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x70
        __asm _emit 0x04
        ; Exact mapped bytes E8 F2 88 01 00: call 0x42c58e
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0A: jne 0x413cb4
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes 83 BE A8 00 00 00 01: cmp dword ptr [esi + 0xa8], 1
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 75 07: jne 0x413cc5
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 84 07: test byte ptr [edi], al
        __asm _emit 0x84
        __asm _emit 0x07
        ; Exact mapped bytes EB 29: jmp 0x413cee
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes F6 C1 04: test cl, 4
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x04
        ; Exact mapped bytes 74 0C: je 0x413cd8
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 86 B0 00 00 00 03 00 00 00: mov dword ptr [esi + 0xb0], 3
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 1E: jmp 0x413cf6
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes F6 C1 08: test cl, 8
        __asm _emit 0xf6
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes 74 0C: je 0x413ce9
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes C7 86 B0 00 00 00 04 00 00 00: mov dword ptr [esi + 0xb0], 4
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x413cf6
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 84 C8: test al, cl
        __asm _emit 0x84
        __asm _emit 0xc8
        ; Exact mapped bytes 74 06: je 0x413cf6
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 89 86 B0 00 00 00: mov dword ptr [esi + 0xb0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 75 0C: push dword ptr [ebp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 6A 06: push 6
        __asm _emit 0x6a
        __asm _emit 0x06
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 85 88 01 00: call 0x42c588
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0A: jne 0x413d1b
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes FF B6 B0 00 00 00: push dword ptr [esi + 0xb0]
        __asm _emit 0xff
        __asm _emit 0xb6
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 6A 07: push 7
        __asm _emit 0x6a
        __asm _emit 0x07
        ; Exact mapped bytes FF 75 08: push dword ptr [ebp + 8]
        __asm _emit 0xff
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 5D 88 01 00: call 0x42c588
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 50 48: call dword ptr [eax + 0x48]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x48
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 0A: jne 0x413d43
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
