// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10090970 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_10090970_10090970() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 6ch]
        and eax, 0e1ffh
        push 0fffffeffh
        or eax, 107h
        mov dword ptr [esi + 58h], 0d2h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 89 BE F4 00 00 00: mov word ptr [esi + 0xf4], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0xbe
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BB E7 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        push 0fffffeffh
        ; Exact mapped bytes E8 AE E7 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push 101h
        ; Exact mapped bytes E8 A1 E7 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ach]
        lea ebx, [esi + 0ach]
        push 0fffffeffh
        ; Exact mapped bytes E8 8B E7 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b0h]
        push 101h
        ; Exact mapped bytes E8 7B E7 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [esi + 64h], edi
        lea edi, [esi + 0b8h]
        mov ebp, 4
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes E8 16 3D 07 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3d
        __asm _emit 0x07
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 F3: jne 0x100909f3
        __asm _emit 0x75
        __asm _emit 0xf3
        mov ecx, esi
        ; Exact mapped bytes E8 E9 0F 00 00: call 0x100919f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov ecx, ebx
        mov edx, 2
        mov edi, 1
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0b4h]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x10090a29
        __asm _emit 0x75
        __asm _emit 0xf4
        ; Exact mapped bytes 8B 0D DC 56 1C 10: mov ecx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp ecx, eax
        ; Exact mapped bytes 75 24: jne 0x10090a68
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
        cmp edx, 100000h
        ; Exact mapped bytes 75 0A: jne 0x10090a68
        __asm _emit 0x75
        __asm _emit 0x0a
        push 220000h
        ; Exact mapped bytes E8 A8 B6 02 00: call 0x100bc110
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb6
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes A1 E4 56 1C 10: mov eax, dword ptr [0x101c56e4]
        __asm _emit 0xa1
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push 64h
        push esi
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }
}
