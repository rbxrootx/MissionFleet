// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10022C00 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_10022c00_10022C00() {
    __asm {
        push esi
        mov esi, ecx
        xor eax, eax
        mov al, byte ptr [esi + 25h]
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 75 62: jne 0x10022c70
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [esi + 0b4h]
        mov eax, dword ptr [esi + 0c0h]
        push 1
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [eax + 4]
        sub edx, ecx
        mov ecx, dword ptr [esi + 78h]
        lea eax, [edx + 384h]
        imul ecx, eax
        mov dword ptr [esi + 58h], eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        mov ecx, 258h
        shr eax, 1fh
        add edx, eax
        sub ecx, edx
        mov edx, dword ptr [esi + 80h]
        sub ecx, edx
        mov dword ptr [esi + 5ch], ecx
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        and eax, 0e4ffh
        or ah, 4
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
        cmp al, 2
        ; Exact mapped bytes 75 26: jne 0x10022c9a
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 54h]
        push 0
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [esi + 5ch]
        add ecx, eax
        mov dword ptr [esi + 5ch], ecx
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e6ffh
        or ch, 6
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        pop esi
        ret
    }
}
