// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0780 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_587b0780_587B0780() {
    __asm {
        push ebx
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        movzx edi, word ptr [esp + 1ch]
        ; Exact mapped bytes 66 8B C7: mov ax, di
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xc7
        mov ecx, dword ptr [esi + 16bch]
        movzx ebx, word ptr [esi + 16b8h]
        ; Exact mapped bytes 66 D3 E0: shl ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe0
        movzx edx, ax
        or edx, ebx
        cmp ecx, 0dh
        ; Exact mapped bytes 7E 3D: jle 0x587b07e6
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov eax, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        ; Exact mapped bytes 66 89 96 B8 16 00 00: mov word ptr [esi + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + eax], dl
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov al, byte ptr [esi + 16b9h]
        mov dword ptr [esi + 14h], edx
        mov byte ptr [edx + ecx], al
        mov cl, 10h
        sub cl, byte ptr [esi + 16bch]
        inc dword ptr [esi + 14h]
        ; Exact mapped bytes 66 D3 EF: shr di, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xef
        add dword ptr [esi + 16bch], -0dh
        movzx eax, di
        ; Exact mapped bytes EB 0C: jmp 0x587b07f2
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea eax, [ecx + 3]
        mov dword ptr [esi + 16bch], eax
        movzx eax, dx
        push esi
        ; Exact mapped bytes 66 89 86 B8 16 00 00: mov word ptr [esi + 0x16b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 01 01 00 00: call 0x587b0900
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 14h]
        add esp, 4
        mov eax, dword ptr [esi + 8]
        mov ebx, dword ptr [esp + 18h]
        mov byte ptr [ecx + eax], bl
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc edx
        mov dword ptr [esi + 14h], edx
        movzx ebx, bx
        mov ecx, ebx
        not ebx
        shr ecx, 8
        mov byte ptr [edx + eax], cl
        mov edx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc edx
        mov cl, byte ptr [esp + 18h]
        mov dword ptr [esi + 14h], edx
        not cl
        shr ebx, 8
        mov byte ptr [edx + eax], cl
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        mov byte ptr [ecx + eax], bl
        mov ecx, dword ptr [esi + 14h]
        mov ebx, dword ptr [esp + 18h]
        inc ecx
        mov dword ptr [esi + 14h], ecx
        test ebx, ebx
        ; Exact mapped bytes 74 13: je 0x587b086b
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [esi + 8]
        push ebx
        push dword ptr [esp + 18h]
        add eax, ecx
        push eax
        ; Exact mapped bytes E8 28 C0 09 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xc0
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        add dword ptr [esi + 14h], ebx
        pop edi
        pop esi
        pop ebx
        ret
    }
}
