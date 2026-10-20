// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424FD0 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_00424fd0_00424FD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 48h]
        mov ecx, 12h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0ffffffffh
        push 888h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 B9 08 04 00: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x08
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 114h]
        ; Exact mapped bytes E8 5F C7 FD FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x42513e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 888h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 57 C2 FD FF: call 0x40129e
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xc2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 EB 00 00 00: je 0x42513a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 0F 85 D8 00 00 00: jne 0x425136
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 0ch
        push eax
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 75 FD 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 AF 00 00 00: jne 0x425132
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        add edx, 3ch
        mov esi, esp
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18h
        push eax
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 4D FD 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x4250c9
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 18h
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F6 BF FD FF: call 0x4010b4
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4250c9
        __asm _emit 0x75
        __asm _emit 0x07
        mov al, 2
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x42514a
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 800h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 39h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 4ch
        push eax
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 02 FD 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, esp
        push 18h
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 21h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 0ch
        push eax
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E0 FC 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        push 888h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ecx + 114h]
        ; Exact mapped bytes E8 DB C4 FD FF: call 0x401609
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc4
        __asm _emit 0xfd
        __asm _emit 0xff
        mov al, 3
        ; Exact mapped bytes EB 18: jmp 0x42514a
        __asm _emit 0xeb
        __asm _emit 0x18
        mov al, 2
        ; Exact mapped bytes EB 14: jmp 0x42514a
        __asm _emit 0xeb
        __asm _emit 0x14
        xor al, al
        ; Exact mapped bytes EB 10: jmp 0x42514a
        __asm _emit 0xeb
        __asm _emit 0x10
        xor al, al
        ; Exact mapped bytes EB 0C: jmp 0x42514a
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 04: jne 0x425148
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x42514a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop edi
        pop esi
        pop ebx
        add esp, 48h
        cmp ebp, esp
        ; Exact mapped bytes E8 99 FC 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
