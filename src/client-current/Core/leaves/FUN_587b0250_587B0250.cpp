// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0250 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_587b0250_587B0250() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, 2
        mov eax, edi
        mov ecx, dword ptr [esi + 16bch]
        ; Exact mapped bytes 66 D3 E0: shl ax, cl
        __asm _emit 0x66
        __asm _emit 0xd3
        __asm _emit 0xe0
        movzx edx, ax
        movzx eax, word ptr [esi + 16b8h]
        cmp ecx, 0dh
        ; Exact mapped bytes 7E 45: jle 0x587b02ba
        __asm _emit 0x7e
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 8]
        or edx, eax
        mov eax, dword ptr [esi + 14h]
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
        mov ecx, dword ptr [esi + 16bch]
        movzx edx, di
        ; Exact mapped bytes EB 0E: jmp 0x587b02c8
        __asm _emit 0xeb
        __asm _emit 0x0e
        add ecx, 3
        or edx, eax
        mov dword ptr [esi + 16bch], ecx
        movzx edx, dx
        movzx edi, dx
        cmp ecx, 9
        ; Exact mapped bytes 7E 42: jle 0x587b0312
        __asm _emit 0x7e
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        ; Exact mapped bytes 66 89 96 B8 16 00 00: mov word ptr [esi + 0x16b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov byte ptr [ecx + eax], dl
        mov edx, dword ptr [esi + 14h]
        mov ecx, dword ptr [esi + 8]
        inc edx
        mov al, byte ptr [esi + 16b9h]
        mov dword ptr [esi + 14h], edx
        mov byte ptr [edx + ecx], al
        xor eax, eax
        inc dword ptr [esi + 14h]
        add dword ptr [esi + 16bch], -9
        ; Exact mapped bytes 66 89 86 B8 16 00 00: mov word ptr [esi + 0x16b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 05 00 00: call 0x587b0880
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        ret
        lea eax, [ecx + 7]
        mov dword ptr [esi + 16bch], eax
        mov eax, edi
        push esi
        ; Exact mapped bytes 66 89 86 B8 16 00 00: mov word ptr [esi + 0x16b8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xb8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 56 05 00 00: call 0x587b0880
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        pop edi
        pop esi
        ret
    }
}
