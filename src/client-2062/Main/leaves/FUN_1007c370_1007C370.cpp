// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007C370 .. +0x121 bytes.
extern "C" __declspec(naked) void FUN_1007c370_1007C370() {
    __asm {
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov ebx, ecx
        push esi
        mov esi, dword ptr [eax + 0d0ch]
        push edi
        mov edi, dword ptr [ebx + 198h]
        mov ecx, 2ddh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebx + 198h]
        mov dword ptr [ebx + 194h], 0ffffffffh
        mov ecx, dword ptr [eax + 0b5ch]
        mov dword ptr [ebx + 17ch], ecx
        ; Exact mapped bytes 66 8B 50 7A: mov dx, word ptr [eax + 0x7a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x7a
        ; Exact mapped bytes 66 89 93 8C 01 00 00: mov word ptr [ebx + 0x18c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b60h]
        mov dword ptr [ebx + 180h], ecx
        ; Exact mapped bytes 66 8B 50 7C: mov dx, word ptr [eax + 0x7c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x7c
        ; Exact mapped bytes 66 89 93 8E 01 00 00: mov word ptr [ebx + 0x18e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b68h]
        mov dword ptr [ebx + 184h], ecx
        ; Exact mapped bytes 66 8B 90 80 00 00 00: mov dx, word ptr [eax + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x90
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 93 90 01 00 00: mov word ptr [ebx + 0x190], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0b64h]
        mov dword ptr [ebx + 188h], ecx
        ; Exact mapped bytes 66 8B 50 7E: mov dx, word ptr [eax + 0x7e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x7e
        ; Exact mapped bytes 66 89 93 92 01 00 00: mov word ptr [ebx + 0x192], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0b4ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 0C 01 00 00: mov cx, word ptr [eax + 0x10c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebx + 0e8h]
        ; Exact mapped bytes E8 09 33 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x33
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 198h]
        xor ecx, ecx
        mov eax, dword ptr [edx + 0b4ch]
        ; Exact mapped bytes 66 8B 88 0A 01 00 00: mov cx, word ptr [eax + 0x10a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebx + 0ech]
        ; Exact mapped bytes E8 E8 32 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 198h]
        xor ecx, ecx
        mov eax, dword ptr [edx + 0b4ch]
        ; Exact mapped bytes 66 8B 88 10 01 00 00: mov cx, word ptr [eax + 0x110]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebx + 0f0h]
        ; Exact mapped bytes E8 C7 32 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 198h]
        xor ecx, ecx
        mov eax, dword ptr [edx + 0b4ch]
        ; Exact mapped bytes 66 8B 88 0E 01 00 00: mov cx, word ptr [eax + 0x10e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebx + 0f4h]
        ; Exact mapped bytes E8 A6 32 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x32
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, ebx
        ; Exact mapped bytes E8 AF F0 FF FF: call 0x1007b530
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, dword ptr [ebx + 16ch]
        pop edi
        pop esi
        ; Exact mapped bytes 66 81 63 24 FD FF: and word ptr [ebx + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x63
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        pop ebx
        ret
    }
}
