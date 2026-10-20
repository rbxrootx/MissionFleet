// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C9ED0 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_004c9ed0_004C9ED0() {
    __asm {
        ; Exact mapped bytes 8B 44 24 08: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 81 EC 08 01 00 00: sub esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 80 38 00: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 74 24 14: lea esi, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 74 4B: je 0x4c9f31
        __asm _emit 0x74
        __asm _emit 0x4b
        ; Exact mapped bytes 8B 3D 30 25 5E 00: mov edi, dword ptr [0x5e2530]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 80 F9 26: cmp cl, 0x26
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x26
        ; Exact mapped bytes 75 07: jne 0x4c9efc
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 38 18: cmp byte ptr [eax], bl
        __asm _emit 0x38
        __asm _emit 0x18
        ; Exact mapped bytes 75 2D: jne 0x4c9f27
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes EB 35: jmp 0x4c9f31
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 38 1D E5 0F 5E 00: cmp byte ptr [0x5e0fe5], bl
        __asm _emit 0x38
        __asm _emit 0x1d
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 74 23: je 0x4c9f27
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 3A 0D E4 0F 5E 00: cmp cl, byte ptr [0x5e0fe4]
        __asm _emit 0x3a
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x4c9f13
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 38 18: cmp byte ptr [eax], bl
        __asm _emit 0x38
        __asm _emit 0x18
        ; Exact mapped bytes 75 16: jne 0x4c9f27
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes EB 1E: jmp 0x4c9f31
        __asm _emit 0xeb
        __asm _emit 0x1e
        ; Exact mapped bytes 80 F9 1E: cmp cl, 0x1e
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x1e
        ; Exact mapped bytes 74 05: je 0x4c9f1d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes 80 F9 1F: cmp cl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x1f
        ; Exact mapped bytes 75 0A: jne 0x4c9f27
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 38 18: cmp byte ptr [eax], bl
        __asm _emit 0x38
        __asm _emit 0x18
        ; Exact mapped bytes 74 0F: je 0x4c9f31
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes EB 06: jmp 0x4c9f2d
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8A 08: mov cl, byte ptr [eax]
        __asm _emit 0x8a
        __asm _emit 0x08
        ; Exact mapped bytes 40: inc eax
        __asm _emit 0x40
        ; Exact mapped bytes 88 0E: mov byte ptr [esi], cl
        __asm _emit 0x88
        __asm _emit 0x0e
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 38 18: cmp byte ptr [eax], bl
        __asm _emit 0x38
        __asm _emit 0x18
        ; Exact mapped bytes 75 BD: jne 0x4c9eee
        __asm _emit 0x75
        __asm _emit 0xbd
        ; Exact mapped bytes 8D 44 24 0C: lea eax, [esp + 0xc]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8D 4C 24 14: lea ecx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C6 06 00: mov byte ptr [esi], 0
        __asm _emit 0xc6
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8D 4C 24 18: lea ecx, [esp + 0x18]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 84 24 20 01 00 00: mov eax, dword ptr [esp + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes FF 15 C4 21 5E 00: call dword ptr [0x5e21c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 0C: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 84 24 20 01 00 00: mov eax, dword ptr [esp + 0x120]
        __asm _emit 0x8b
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 8B 8C 24 24 01 00 00: mov ecx, dword ptr [esp + 0x124]
        __asm _emit 0x8b
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 89 11: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 81 C4 08 01 00 00: add esp, 0x108
        __asm _emit 0x81
        __asm _emit 0xc4
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
