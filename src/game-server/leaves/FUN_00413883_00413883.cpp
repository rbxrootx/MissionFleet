// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413883 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_00413883_00413883() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 70h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 70h]
        mov ecx, 1ch
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 70h], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        mov eax, ecx
        mov ecx, dword ptr [ebp - 70h]
        cdq
        idiv dword ptr [ecx + 138h]
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 70h]
        mov eax, dword ptr [edx + 140h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*4]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x413990
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 80000000h
        mov eax, dword ptr [ebp - 70h]
        add eax, 4
        push eax
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E6 4E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x41398b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 74 6B: je 0x413978
        __asm _emit 0x74
        __asm _emit 0x6b
        mov esi, esp
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B8 4E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push 0
        lea eax, [ebp - 10h]
        push eax
        push 5ch
        lea ecx, [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 F0 21 5E 00: call dword ptr [0x5e21f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 99 4E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        push -1
        lea ecx, [ebp - 6ch]
        push ecx
        push 1
        push 800h
        ; Exact mapped bytes FF 15 00 22 5E 00: call dword ptr [0x5e2200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 77 4E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 02: jne 0x413970
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 08: jmp 0x413978
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 8F: jmp 0x413907
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov esi, esp
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 55 4E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 03: jmp 0x413993
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        pop edi
        pop esi
        add esp, 70h
        cmp ebp, esp
        ; Exact mapped bytes E8 41 4E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x4e
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
