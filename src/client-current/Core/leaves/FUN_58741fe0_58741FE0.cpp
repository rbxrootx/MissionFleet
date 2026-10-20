// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58741FE0 .. +0x1C0 bytes.
extern "C" __declspec(naked) void FUN_58741fe0_58741FE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        push 0c4h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        ; Exact mapped bytes E8 14 AE 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xae
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        push 50h
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        push eax
        ; Exact mapped bytes E8 01 AE 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xae
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 30h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 34h], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 38h], 80h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 3ch], 80h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 40h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 44h], 7dh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 48h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 4ch], 1
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x587420a3
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 8
        ; Exact mapped bytes 66 89 88 84 00 00 00: mov word ptr [eax + 0x84], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 8
        ; Exact mapped bytes 66 89 48 36: mov word ptr [eax + 0x36], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x36
        ; Exact mapped bytes EB 4C: jmp 0x587420ef
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 9
        ; Exact mapped bytes 66 89 88 84 00 00 00: mov word ptr [eax + 0x84], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 9
        ; Exact mapped bytes 66 89 48 36: mov word ptr [eax + 0x36], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x36
        push 588b4a98h
        ; Exact mapped bytes E8 22 FF DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 30h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 94 20 07 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dl, byte ptr [ecx + 32h]
        and dl, 0f0h
        or dl, 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 32h], dl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 31h]
        and cl, 80h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 31h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 47h], 7dh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 46h], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax + 3ch]
        and ecx, 0fffffffdh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 3ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 3ch]
        and eax, 0fffffffeh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [edx + 3ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 0fffffffbh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ecx + 3ch], edx
        push 588b4aach
        ; Exact mapped bytes E8 77 FE DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 30h
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 E9 1F 07 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
