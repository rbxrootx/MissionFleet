// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047DA20 .. +0x2A6 bytes.
extern "C" __declspec(naked) void FUN_0047da20_0047DA20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0
        xor eax, eax
        ; Exact mapped bytes 66 A1 AA 75 68 00: mov ax, word ptr [0x6875aa]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xaa
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 83 3D 48 75 68 00 00: cmp dword ptr [0x687548], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x48
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x47db9a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 687578h
        push 0eh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 1
        ; Exact mapped bytes E8 29 3E 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebp - 8]
        or edx, eax
        mov dword ptr [ebp - 8], edx
        push 68757ch
        push 0fh
        mov eax, dword ptr [ebp - 4]
        push eax
        push 1
        ; Exact mapped bytes E8 0C 3E 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        push 687580h
        push 10h
        mov edx, dword ptr [ebp - 4]
        push edx
        push 1
        ; Exact mapped bytes E8 EF 3D 00 00: call 0x481880
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 8]
        or ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 80 75 68 00: mov edx, dword ptr [0x687580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 28 02 00 00: call 0x47dcd0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 58: je 0x47db09
        __asm _emit 0x74
        __asm _emit 0x58
        push 2
        ; Exact mapped bytes A1 78 75 68 00: mov eax, dword ptr [0x687578]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A2 98 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes 8B 0D 7C 75 68 00: mov ecx, dword ptr [0x68757c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 91 98 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes 8B 15 80 75 68 00: mov edx, dword ptr [0x687580]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 80 98 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 78 75 68 00 00 00 00 00: mov dword ptr [0x687578], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 7C 75 68 00 00 00 00 00: mov dword ptr [0x68757c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 80 75 68 00 00 00 00 00: mov dword ptr [0x687580], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 B9 01 00 00: jmp 0x47dcc2
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 60 10 68 00: mov eax, dword ptr [0x681060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [eax], 681028h
        ; Exact mapped bytes 74 3A: je 0x47db50
        __asm _emit 0x74
        __asm _emit 0x3a
        push 2
        ; Exact mapped bytes 8B 0D 60 10 68 00: mov ecx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 3A 98 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes A1 60 10 68 00: mov eax, dword ptr [0x681060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 27 98 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes 8B 15 60 10 68 00: mov edx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 13 98 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes 8B 0D 60 10 68 00: mov ecx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 78 75 68 00: mov edx, dword ptr [0x687578]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx], edx
        ; Exact mapped bytes A1 60 10 68 00: mov eax, dword ptr [0x681060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 7C 75 68 00: mov ecx, dword ptr [0x68757c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes 8B 15 60 10 68 00: mov edx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 80 75 68 00: mov eax, dword ptr [0x687580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes 8B 0D 60 10 68 00: mov ecx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx]
        mov al, byte ptr [edx]
        ; Exact mapped bytes A2 D0 E0 67 00: mov byte ptr [0x67e0d0], al
        __asm _emit 0xa2
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 D4 E0 67 00 01 00 00 00: mov dword ptr [0x67e0d4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x47dcc2
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes 8B 0D 78 75 68 00: mov ecx, dword ptr [0x687578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes E8 B8 97 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes 8B 15 7C 75 68 00: mov edx, dword ptr [0x68757c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes E8 A7 97 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 2
        ; Exact mapped bytes A1 80 75 68 00: mov eax, dword ptr [0x687580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 97 97 FE FF: call 0x467360
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes C7 05 78 75 68 00 00 00 00 00: mov dword ptr [0x687578], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x78
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 7C 75 68 00 00 00 00 00: mov dword ptr [0x68757c], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x7c
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 80 75 68 00 00 00 00 00: mov dword ptr [0x687580], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 88h
        push 63f49ch
        push 2
        push 2
        ; Exact mapped bytes E8 C3 8B FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes 8B 0D 60 10 68 00: mov ecx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx], eax
        ; Exact mapped bytes 8B 15 60 10 68 00: mov edx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 08: jne 0x47dc1b
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x47dcc2
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 63f390h
        ; Exact mapped bytes A1 60 10 68 00: mov eax, dword ptr [0x681060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 43 7D FE FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        push 8dh
        push 63f49ch
        push 2
        push 2
        ; Exact mapped bytes E8 7D 8B FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes 8B 15 60 10 68 00: mov edx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [edx + 4], eax
        ; Exact mapped bytes A1 60 10 68 00: mov eax, dword ptr [0x681060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 05: jne 0x47dc5f
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 63: jmp 0x47dcc2
        __asm _emit 0xeb
        __asm _emit 0x63
        ; Exact mapped bytes 8B 0D 60 10 68 00: mov ecx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 4]
        mov byte ptr [edx], 0
        push 92h
        push 63f49ch
        push 2
        push 2
        ; Exact mapped bytes E8 42 8B FE FF: call 0x4667c0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes 8B 0D 60 10 68 00: mov ecx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes 8B 15 60 10 68 00: mov edx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x47dc9b
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 27: jmp 0x47dcc2
        __asm _emit 0xeb
        __asm _emit 0x27
        ; Exact mapped bytes A1 60 10 68 00: mov eax, dword ptr [0x681060]
        __asm _emit 0xa1
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 8]
        mov byte ptr [ecx], 0
        ; Exact mapped bytes 8B 15 60 10 68 00: mov edx, dword ptr [0x681060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [edx]
        mov cl, byte ptr [eax]
        ; Exact mapped bytes 88 0D D0 E0 67 00: mov byte ptr [0x67e0d0], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 D4 E0 67 00 01 00 00 00: mov dword ptr [0x67e0d4], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd4
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
