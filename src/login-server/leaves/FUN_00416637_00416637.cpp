// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416637 .. +0x151 bytes.
extern "C" __declspec(naked) void FUN_00416637_00416637() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 10h]
        push esi
        xor esi, esi
        cmp eax, 8
        ; Exact mapped bytes 7F 74: jg 0x4166b9
        __asm _emit 0x7f
        __asm _emit 0x74
        ; Exact mapped bytes 74 53: je 0x41669a
        __asm _emit 0x74
        __asm _emit 0x53
        dec eax
        ; Exact mapped bytes 74 32: je 0x41667c
        __asm _emit 0x74
        __asm _emit 0x32
        dec eax
        ; Exact mapped bytes 74 3E: je 0x41668b
        __asm _emit 0x74
        __asm _emit 0x3e
        dec eax
        ; Exact mapped bytes 74 2C: je 0x41667c
        __asm _emit 0x74
        __asm _emit 0x2c
        dec eax
        ; Exact mapped bytes 74 29: je 0x41667c
        __asm _emit 0x74
        __asm _emit 0x29
        dec eax
        dec eax
        ; Exact mapped bytes 74 16: je 0x41666d
        __asm _emit 0x74
        __asm _emit 0x16
        dec eax
        ; Exact mapped bytes 0F 85 23 01 00 00: jne 0x416781
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes DC 18: fcomp qword ptr [eax]
        __asm _emit 0xdc
        __asm _emit 0x18
        ; Exact mapped bytes E9 92 00 00 00: jmp 0x4166ff
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes D9 00: fld dword ptr [eax]
        __asm _emit 0xd9
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes D8 18: fcomp dword ptr [eax]
        __asm _emit 0xd8
        __asm _emit 0x18
        ; Exact mapped bytes E9 83 00 00 00: jmp 0x4166ff
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ecx]
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x41677c
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [eax]
        cmp al, byte ptr [ecx]
        ; Exact mapped bytes E9 E2 00 00 00: jmp 0x41677c
        __asm _emit 0xe9
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp + 8]
        mov eax, esp
        mov ecx, dword ptr [ecx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DC 00 00 00: call 0x416788
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 CD 00 00 00: je 0x416781
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x41677e
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 9
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x416761
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x41674c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        ; Exact mapped bytes 74 36: je 0x416704
        __asm _emit 0x74
        __asm _emit 0x36
        dec eax
        ; Exact mapped bytes 74 18: je 0x4166e9
        __asm _emit 0x74
        __asm _emit 0x18
        dec eax
        ; Exact mapped bytes 0F 85 A9 00 00 00: jne 0x416781
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 15 68 C2 43 00: call dword ptr [0x43c268]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x41677a
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x416781
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes DC 19: fcomp qword ptr [ecx]
        __asm _emit 0xdc
        __asm _emit 0x19
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        sahf
        ; Exact mapped bytes EB 78: jmp 0x41677c
        __asm _emit 0xeb
        __asm _emit 0x78
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 11: cmp dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x11
        ; Exact mapped bytes 75 6F: jne 0x416781
        __asm _emit 0x75
        __asm _emit 0x6f
        ; Exact mapped bytes 66 8B 50 02: mov dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 51 02: cmp dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 75 65: jne 0x416781
        __asm _emit 0x75
        __asm _emit 0x65
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 3B 51 04: cmp dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 75 5B: jne 0x416781
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes 66 8B 50 06: mov dx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x06
        ; Exact mapped bytes 66 3B 51 06: cmp dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x06
        ; Exact mapped bytes 75 51: jne 0x416781
        __asm _emit 0x75
        __asm _emit 0x51
        ; Exact mapped bytes 66 8B 50 08: mov dx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 66 3B 51 08: cmp dx, word ptr [ecx + 8]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes 75 47: jne 0x416781
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 66 8B 50 0A: mov dx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3B 51 0A: cmp dx, word ptr [ecx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x0a
        ; Exact mapped bytes 75 3D: jne 0x416781
        __asm _emit 0x75
        __asm _emit 0x3d
        mov eax, dword ptr [eax + 0ch]
        cmp eax, dword ptr [ecx + 0ch]
        ; Exact mapped bytes EB 30: jmp 0x41677c
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [ecx]
        push eax
        push ecx
        ; Exact mapped bytes E8 78 81 00 00: call 0x41e8d5
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 19: jmp 0x41677a
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 75 12: jne 0x416781
        __asm _emit 0x75
        __asm _emit 0x12
        push eax
        push ecx
        push edx
        ; Exact mapped bytes E8 19 A9 00 00: call 0x421090
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 03: jne 0x416781
        __asm _emit 0x75
        __asm _emit 0x03
        push 1
        pop esi
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
