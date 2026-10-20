// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588AFB00 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_588afb00() {
    __asm {
        sub esp, 14h
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov dword ptr [esp], ecx
        test al, 1
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x588afbdd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 20h]
        mov edx, dword ptr [ebp]
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [esp + 8], edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [esp + 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        push esi
        mov esi, dword ptr [ecx + 4ch]
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 0ch], 0e0h
        mov dword ptr [esp + 10h], 0b1h
        mov dword ptr [esp + 14h], 32ch
        mov dword ptr [esp + 18h], 23eh
        test esi, esi
        ; Exact mapped bytes 0F 84 7C 00 00 00: je 0x588afbdb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 24h]
        push edi
        mov edi, dword ptr [esp + 30h]
        ; Exact mapped bytes EB 09: jmp 0x588afb74
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes EB 03: jmp 0x588afb70
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 39: jge 0x588afbb4
        __asm _emit 0x7d
        __asm _emit 0x39
        cmp dword ptr [ecx + 60h], esi
        ; Exact mapped bytes 74 12: je 0x588afb92
        __asm _emit 0x74
        __asm _emit 0x12
        cmp dword ptr [ecx + 64h], esi
        ; Exact mapped bytes 74 0D: je 0x588afb92
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [esi]
        mov edx, dword ptr [edx + 14h]
        push edi
        lea eax, [esp + 18h]
        push eax
        ; Exact mapped bytes EB 07: jmp 0x588afb99
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 14h]
        push edi
        push ebp
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 CB: jne 0x588afb70
        __asm _emit 0x75
        __asm _emit 0xcb
        pop edi
        pop ebx
        pop esi
        pop ebp
        add esp, 14h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [esp + 10h]
        cmp dword ptr [ecx + 60h], esi
        ; Exact mapped bytes 74 0D: je 0x588afbc6
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ecx + 64h], esi
        ; Exact mapped bytes 74 08: je 0x588afbc6
        __asm _emit 0x74
        __asm _emit 0x08
        push edi
        lea ecx, [esp + 18h]
        push ecx
        ; Exact mapped bytes EB 02: jmp 0x588afbc8
        __asm _emit 0xeb
        __asm _emit 0x02
        push edi
        push ebp
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 14h]
        push ebx
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 D7: jne 0x588afbb0
        __asm _emit 0x75
        __asm _emit 0xd7
        pop edi
        pop ebx
        pop esi
        pop ebp
    }
}
