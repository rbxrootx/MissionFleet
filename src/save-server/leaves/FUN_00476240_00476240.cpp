// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00476240 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_00476240_00476240() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 75 0C: mov esi, dword ptr [ebp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 7D 08: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x7d
        __asm _emit 0x08
        ; Exact mapped bytes 8D 05 38 75 68 00: lea eax, [0x687538]
        __asm _emit 0x8d
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 78 08 00: cmp dword ptr [eax + 8], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 75 3B: jne 0x476293
        __asm _emit 0x75
        __asm _emit 0x3b
        ; Exact mapped bytes B0 FF: mov al, 0xff
        __asm _emit 0xb0
        __asm _emit 0xff
        ; Exact mapped bytes 8B FF: mov edi, edi
        __asm _emit 0x8b
        __asm _emit 0xff
        ; Exact mapped bytes 0A C0: or al, al
        __asm _emit 0x0a
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2E: je 0x47628e
        __asm _emit 0x74
        __asm _emit 0x2e
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 8A 27: mov ah, byte ptr [edi]
        __asm _emit 0x8a
        __asm _emit 0x27
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 38 C4: cmp ah, al
        __asm _emit 0x38
        __asm _emit 0xc4
        ; Exact mapped bytes 74 F2: je 0x47625c
        __asm _emit 0x74
        __asm _emit 0xf2
        ; Exact mapped bytes 2C 41: sub al, 0x41
        __asm _emit 0x2c
        __asm _emit 0x41
        ; Exact mapped bytes 3C 1A: cmp al, 0x1a
        __asm _emit 0x3c
        __asm _emit 0x1a
        ; Exact mapped bytes 1A C9: sbb cl, cl
        __asm _emit 0x1a
        __asm _emit 0xc9
        ; Exact mapped bytes 80 E1 20: and cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x20
        ; Exact mapped bytes 02 C1: add al, cl
        __asm _emit 0x02
        __asm _emit 0xc1
        ; Exact mapped bytes 04 41: add al, 0x41
        __asm _emit 0x04
        __asm _emit 0x41
        ; Exact mapped bytes 86 E0: xchg al, ah
        __asm _emit 0x86
        __asm _emit 0xe0
        ; Exact mapped bytes 2C 41: sub al, 0x41
        __asm _emit 0x2c
        __asm _emit 0x41
        ; Exact mapped bytes 3C 1A: cmp al, 0x1a
        __asm _emit 0x3c
        __asm _emit 0x1a
        ; Exact mapped bytes 1A C9: sbb cl, cl
        __asm _emit 0x1a
        __asm _emit 0xc9
        ; Exact mapped bytes 80 E1 20: and cl, 0x20
        __asm _emit 0x80
        __asm _emit 0xe1
        __asm _emit 0x20
        ; Exact mapped bytes 02 C1: add al, cl
        __asm _emit 0x02
        __asm _emit 0xc1
        ; Exact mapped bytes 04 41: add al, 0x41
        __asm _emit 0x04
        __asm _emit 0x41
        ; Exact mapped bytes 38 E0: cmp al, ah
        __asm _emit 0x38
        __asm _emit 0xe0
        ; Exact mapped bytes 74 D2: je 0x47625c
        __asm _emit 0x74
        __asm _emit 0xd2
        ; Exact mapped bytes 1A C0: sbb al, al
        __asm _emit 0x1a
        __asm _emit 0xc0
        ; Exact mapped bytes 1C FF: sbb al, 0xff
        __asm _emit 0x1c
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        ; Exact mapped bytes EB 78: jmp 0x47630b
        __asm _emit 0xeb
        __asm _emit 0x78
        ; Exact mapped bytes F0 FF 05 54 89 68 00: lock inc dword ptr [0x688954]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 44 89 68 00 00: cmp dword ptr [0x688944], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7F 04: jg 0x4762a7
        __asm _emit 0x7f
        __asm _emit 0x04
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes EB 15: jmp 0x4762bc
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes F0 FF 0D 54 89 68 00: lock dec dword ptr [0x688954]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 6A 13: push 0x13
        __asm _emit 0x6a
        __asm _emit 0x13
        ; Exact mapped bytes E8 FB A5 FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C7 04 24 01 00 00 00: mov dword ptr [esp], 1
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes B8 FF 00 00 00: mov eax, 0xff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 0A C0: or al, al
        __asm _emit 0x0a
        __asm _emit 0xc0
        ; Exact mapped bytes 74 27: je 0x4762ef
        __asm _emit 0x74
        __asm _emit 0x27
        ; Exact mapped bytes 8A 06: mov al, byte ptr [esi]
        __asm _emit 0x8a
        __asm _emit 0x06
        ; Exact mapped bytes 46: inc esi
        __asm _emit 0x46
        ; Exact mapped bytes 8A 1F: mov bl, byte ptr [edi]
        __asm _emit 0x8a
        __asm _emit 0x1f
        ; Exact mapped bytes 47: inc edi
        __asm _emit 0x47
        ; Exact mapped bytes 38 D8: cmp al, bl
        __asm _emit 0x38
        __asm _emit 0xd8
        ; Exact mapped bytes 74 F2: je 0x4762c4
        __asm _emit 0x74
        __asm _emit 0xf2
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 07 5E 00 00: call 0x47c0e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes E8 FD 5D 00 00: call 0x47c0e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 38 C3: cmp bl, al
        __asm _emit 0x38
        __asm _emit 0xc3
        ; Exact mapped bytes 74 DA: je 0x4762c4
        __asm _emit 0x74
        __asm _emit 0xda
        ; Exact mapped bytes 1B C0: sbb eax, eax
        __asm _emit 0x1b
        __asm _emit 0xc0
        ; Exact mapped bytes 83 D8 FF: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 58: pop eax
        __asm _emit 0x58
        ; Exact mapped bytes 0B C0: or eax, eax
        __asm _emit 0x0b
        __asm _emit 0xc0
        ; Exact mapped bytes 75 09: jne 0x4762ff
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes F0 FF 0D 54 89 68 00: lock dec dword ptr [0x688954]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x476309
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 6A 13: push 0x13
        __asm _emit 0x6a
        __asm _emit 0x13
        ; Exact mapped bytes E8 4A A6 FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 8B C3: mov eax, ebx
        __asm _emit 0x8b
        __asm _emit 0xc3
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes C9: leave
        __asm _emit 0xc9
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
