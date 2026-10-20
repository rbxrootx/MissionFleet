// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051687F .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_0051687f_0051687F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5168a5
        __asm _emit 0x75
        __asm _emit 0x14
        push 2b6h
        push 5c8b74h
        ; Exact mapped bytes E8 60 E1 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5168a5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51688b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ecx + 64h]
        and esi, 0ff00h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3F 85 FD FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x85
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 10000000h
        or esi, eax
        mov dword ptr [ebp - 4], esi
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        and eax, 3
        test eax, eax
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x5169d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 3C: je 0x51692a
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 60h]
        and ecx, 2
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x51690f
        __asm _emit 0x74
        __asm _emit 0x14
        push 2c2h
        push 5c8b74h
        ; Exact mapped bytes E8 F6 E0 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51690f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D9: jne 0x5168ee
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp - 4]
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x516928
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 80h
        ; Exact mapped bytes EB 3B: jmp 0x516965
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x51694b
        __asm _emit 0x75
        __asm _emit 0x14
        push 2c8h
        push 5c8b74h
        ; Exact mapped bytes E8 BA E0 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51694b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x51692a
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 4]
        and ecx, 10000000h
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x516965
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 40h
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 57: je 0x5169c2
        __asm _emit 0x74
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        xor edx, 10000000h
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 41: je 0x5169c0
        __asm _emit 0x74
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 60h]
        and edx, 0fffffffch
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [ebp - 8]
        or ecx, 2
        or ecx, 1
        or ecx, 4
        or ecx, 10h
        push ecx
        push 0
        push 0
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 90 25 5E 00: call dword ptr [0x5e2590]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 0E: jmp 0x5169d0
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 60h]
        and al, 0fch
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 60h], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
