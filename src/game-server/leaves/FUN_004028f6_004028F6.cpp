// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004028F6 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_004028f6_004028F6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 4
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x4029b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 180h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 0cbch]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 6D: jne 0x4029af
        __asm _emit 0x75
        __asm _emit 0x6d
        mov eax, dword ptr [ebp + 0ch]
        mov cl, byte ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 180h]
        shl eax, 6
        mov ecx, dword ptr [ebp - 0ch]
        lea ecx, [ecx + eax + 0cb0h]
        ; Exact mapped bytes E8 6C 10 00 00: call 0x4039d0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov al, byte ptr [edx + 8]
        mov byte ptr [ebp - 3], al
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 91 84 01 00 00: mov dx, word ptr [ecx + 0x184]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 FA: mov word ptr [ebp - 6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfa
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 88 70 01 00 00: mov cx, word ptr [eax + 0x170]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + 180h]
        mov byte ptr [ebp - 4], al
        push 6
        lea ecx, [ebp - 8]
        push ecx
        push 1
        push 4000000h
        push 80020116h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 47 71 08 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x71
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 29: jmp 0x4029da
        __asm _emit 0xeb
        __asm _emit 0x29
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0c7ch]
        ; Exact mapped bytes E8 5B E9 FF FF: call 0x401320
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 06 5E 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x5e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 F6 5D 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
