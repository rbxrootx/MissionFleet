// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BDC30 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_588bdc30() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e4ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        mov dword ptr [esi + 58h], 0
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3dch]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        push edi
        cmp dl, 1
        ; Exact mapped bytes 74 16: je 0x588bdc8e
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi + 3dch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 2
        ; Exact mapped bytes 75 0D: jne 0x588bdc9b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 3dch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edi, dword ptr [esi + 3dch]
        mov ebx, dword ptr [esi + 30h]
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 34 52 04 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        push edi
        mov ecx, ebx
        ; Exact mapped bytes E8 9C 52 04 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x52
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3d0h]
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 18h]
        push eax
        push 0ee48h
        push esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        ret
    }
}
