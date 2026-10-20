// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416796 .. +0x138 bytes.
extern "C" __declspec(naked) void FUN_00416796_00416796() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 14h]
        push esi
        push 8
        pop ecx
        cmp eax, ecx
        ; Exact mapped bytes 7F 75: jg 0x416819
        __asm _emit 0x7f
        __asm _emit 0x75
        ; Exact mapped bytes 74 67: je 0x41680d
        __asm _emit 0x74
        __asm _emit 0x67
        dec eax
        ; Exact mapped bytes 74 58: je 0x416801
        __asm _emit 0x74
        __asm _emit 0x58
        dec eax
        ; Exact mapped bytes 74 3D: je 0x4167e9
        __asm _emit 0x74
        __asm _emit 0x3d
        dec eax
        ; Exact mapped bytes 74 52: je 0x416801
        __asm _emit 0x74
        __asm _emit 0x52
        dec eax
        ; Exact mapped bytes 74 4F: je 0x416801
        __asm _emit 0x74
        __asm _emit 0x4f
        dec eax
        dec eax
        ; Exact mapped bytes 74 1B: je 0x4167d1
        __asm _emit 0x74
        __asm _emit 0x1b
        dec eax
        ; Exact mapped bytes 0F 85 0C 01 00 00: jne 0x4168c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 18: fstp qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes E9 F8 00 00 00: jmp 0x4168c9
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes D9 00: fld dword ptr [eax]
        __asm _emit 0xd9
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes D9 18: fstp dword ptr [eax]
        __asm _emit 0xd9
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 4
        ; Exact mapped bytes E9 E0 00 00 00: jmp 0x4168c9
        __asm _emit 0xe9
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov al, byte ptr [eax]
        mov byte ptr [ecx], al
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 1
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x4168c9
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB CE: jmp 0x4167db
        __asm _emit 0xeb
        __asm _emit 0xce
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 7E: jmp 0x416897
        __asm _emit 0xeb
        __asm _emit 0x7e
        sub eax, 9
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x4168b5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 7D: je 0x4168a2
        __asm _emit 0x74
        __asm _emit 0x7d
        sub eax, 5
        ; Exact mapped bytes 74 33: je 0x41685d
        __asm _emit 0x74
        __asm _emit 0x33
        dec eax
        ; Exact mapped bytes 74 1E: je 0x41684b
        __asm _emit 0x74
        __asm _emit 0x1e
        dec eax
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x4168c9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 60 C2 43 00: call dword ptr [0x43c260]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 79: jmp 0x4168c4
        __asm _emit 0xeb
        __asm _emit 0x79
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes DD 19: fstp qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x19
        mov eax, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], eax
        ; Exact mapped bytes EB 3A: jmp 0x416897
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes 66 8B 50 02: mov dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 51 02: mov word ptr [ecx + 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 51 04: mov word ptr [ecx + 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 50 06: mov dx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x06
        ; Exact mapped bytes 66 89 51 06: mov word ptr [ecx + 6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x06
        ; Exact mapped bytes 66 8B 50 08: mov dx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 51 08: mov word ptr [ecx + 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 51 0A: mov word ptr [ecx + 0xa], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0a
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 10h
        ; Exact mapped bytes EB 27: jmp 0x4168c9
        __asm _emit 0xeb
        __asm _emit 0x27
        mov esi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 36 74 01 00: call 0x42dce4
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax - 8]
        ; Exact mapped bytes EB 0F: jmp 0x4168c4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov esi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes E8 99 6C 01 00: call 0x42d55a
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        pop esi
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
