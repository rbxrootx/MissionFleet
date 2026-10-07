// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 199 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887A8B0 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_5887a8b0_segment_00() {
    __asm {
        mov dl, byte ptr [esp + 4]
        mov eax, dword ptr [ecx + 240h]
        push esi
        movzx esi, word ptr [eax + 24h]
        and dl, 1
        ; Exact mapped bytes 66 0F B6 D2: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd2
        push edi
        mov edi, 0fffdh
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        lea edi, [edx + edx]
        ; Exact mapped bytes 66 0B F7: or si, di
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf7
        ; Exact mapped bytes 66 89 70 24: mov word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 240h]
        movzx esi, word ptr [eax + 24h]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        ; Exact mapped bytes 66 0B F2: or si, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf2
        mov dl, byte ptr [esp + 10h]
        ; Exact mapped bytes 66 89 70 24: mov word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 238h]
        movzx esi, word ptr [eax + 24h]
        and dl, 1
        ; Exact mapped bytes 66 0F B6 D2: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd2
        mov edi, 0fffdh
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        lea edi, [edx + edx]
        ; Exact mapped bytes 66 0B F7: or si, di
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf7
        ; Exact mapped bytes 66 89 70 24: mov word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 238h]
        movzx esi, word ptr [eax + 24h]
        mov edi, 0fffeh
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        ; Exact mapped bytes 66 0B F2: or si, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf2
        mov dl, byte ptr [esp + 14h]
        ; Exact mapped bytes 66 89 70 24: mov word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 23ch]
        movzx esi, word ptr [eax + 24h]
        and dl, 1
        ; Exact mapped bytes 66 0F B6 D2: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd2
        mov edi, 0fffdh
        ; Exact mapped bytes 66 23 F7: and si, di
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xf7
        lea edi, [edx + edx]
        ; Exact mapped bytes 66 0B F7: or si, di
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xf7
        ; Exact mapped bytes 66 89 70 24: mov word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov esi, 0fffeh
        ; Exact mapped bytes 66 23 C6: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc6
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        pop edi
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
