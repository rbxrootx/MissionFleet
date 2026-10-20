// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10090A80 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_10090a80_10090A80() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 58h], edi
        and eax, 0e4fdh
        push edi
        or eax, 405h
        push 64h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov ecx, dword ptr [esi + 0d4h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0d8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0dch]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0e0h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0e4h]
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [esi + 0e8h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [esi + 64h], edi
        add esi, 0b8h
        mov edi, 4
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 0D 3C 07 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 F3: jne 0x10090afc
        __asm _emit 0x75
        __asm _emit 0xf3
        ; Exact mapped bytes A1 DC 56 1C 10: mov eax, dword ptr [0x101c56dc]
        __asm _emit 0xa1
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 57 1C 10: mov ecx, dword ptr [0x101c5710]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        pop edi
        cmp eax, ecx
        pop esi
        ; Exact mapped bytes 75 24: jne 0x10090b3e
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 120h]
        and edx, 0f00000h
        cmp edx, 200000h
        ; Exact mapped bytes 75 0A: jne 0x10090b3e
        __asm _emit 0x75
        __asm _emit 0x0a
        push 120000h
        ; Exact mapped bytes E8 D2 B5 02 00: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        ret
    }
}
