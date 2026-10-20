// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875D3A0 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_5875d3a0() {
    __asm {
        mov eax, dword ptr [ecx + 74h]
        test eax, eax
        ; Exact mapped bytes 7E 63: jle 0x5875d40a
        __asm _emit 0x7e
        __asm _emit 0x63
        push esi
        cdq
        mov esi, 0fh
        idiv esi
        test edx, edx
        ; Exact mapped bytes 75 51: jne 0x5875d405
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, dword ptr [ecx + 60h]
        mov edx, dword ptr [ecx + eax*4 + 18h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov esi, 0ffffh
        ; Exact mapped bytes 66 33 C6: xor ax, si
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc6
        movzx esi, word ptr [edx + 24h]
        push edi
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        mov edi, 0fffeh
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        ; Exact mapped bytes 66 0B F0: or si, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf0
        ; Exact mapped bytes 66 89 72 24: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        mov edx, dword ptr [ecx + 60h]
        mov edx, dword ptr [ecx + edx*4 + 34h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        mov esi, 0ffffh
        ; Exact mapped bytes 66 33 C6: xor ax, si
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0xc6
        movzx esi, word ptr [edx + 24h]
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        ; Exact mapped bytes 66 83 E0 01: and ax, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x01
        ; Exact mapped bytes 66 0B F0: or si, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf0
        ; Exact mapped bytes 66 89 72 24: mov word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x72
        __asm _emit 0x24
        pop edi
        dec dword ptr [ecx + 74h]
        pop esi
        ret
        mov eax, dword ptr [ecx + 60h]
        mov eax, dword ptr [ecx + eax*4 + 18h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 60h]
        mov eax, dword ptr [ecx + eax*4 + 34h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        ; Exact mapped bytes E9 76 F9 FF FF: jmp 0x5875cda0
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
