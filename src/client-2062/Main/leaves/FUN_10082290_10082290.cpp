// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10082290 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_10082290_10082290() {
    __asm {
        mov dl, byte ptr [esp + 4]
        push esi
        mov al, dl
        mov esi, ecx
        and al, 1
        push edi
        ; Exact mapped bytes 66 8B 7E 24: mov di, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 66 0F B6 C0: movzx ax, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc0
        and edi, 0fffeh
        or edi, eax
        lea ecx, [eax + eax]
        and edi, 0fffdh
        or edi, ecx
        ; Exact mapped bytes 66 83 BE 8C 0C 00 00 00: cmp word ptr [esi + 0xc8c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 7E 24: mov word ptr [esi + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7e
        __asm _emit 0x24
        ; Exact mapped bytes 7E 16: jle 0x100822db
        __asm _emit 0x7e
        __asm _emit 0x16
        mov eax, dword ptr [esi + 0c74h]
        ; Exact mapped bytes 66 8B 78 24: mov di, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x78
        __asm _emit 0x24
        and edi, 0fffdh
        or edi, ecx
        ; Exact mapped bytes 66 89 78 24: mov word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x24
        cmp dl, 1
        ; Exact mapped bytes 75 22: jne 0x10082302
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push esi
        mov ecx, dword ptr [ecx + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [esi + 0c90h], 1
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test dl, dl
        ; Exact mapped bytes 75 1C: jne 0x10082322
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push eax
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [esi + 0c90h], 0
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
