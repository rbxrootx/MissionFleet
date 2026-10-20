// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E6980 .. +0xE1 bytes.
extern "C" __declspec(naked) void FUN_588e6980() {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ebx, dword ptr [esi + 0cc0h]
        xor ebp, ebp
        mov dword ptr [esi + 0a48h], ebp
        ; Exact mapped bytes 66 8B 43 0C: mov ax, word ptr [ebx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x0c
        mov ecx, 7c00h
        push edi
        xor edi, edi
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        xor edx, edx
        mov dword ptr [esp + 14h], edi
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 1ch], edi
        ; Exact mapped bytes 66 3B D0: cmp dx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xd0
        ; Exact mapped bytes 0F 83 9D 00 00 00: jae 0x588e6a59
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 268h]
        mov edx, dword ptr [ebx + 26ch]
        mov ecx, 1fh
        sub ecx, ebp
        shr eax, cl
        shr edx, cl
        and eax, 1
        and edx, 1
        test edi, edi
        ; Exact mapped bytes 75 11: jne 0x588e69f2
        __asm _emit 0x75
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x588e69f2
        __asm _emit 0x75
        __asm _emit 0x0d
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x588e69f2
        __asm _emit 0x75
        __asm _emit 0x09
        inc dword ptr [esi + 0a48h]
        lea edi, [eax + 1]
        cmp dword ptr [esp + 14h], 0
        ; Exact mapped bytes 75 13: jne 0x588e6a0c
        __asm _emit 0x75
        __asm _emit 0x13
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x588e6a0c
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp edx, 1
        ; Exact mapped bytes 75 0A: jne 0x588e6a0c
        __asm _emit 0x75
        __asm _emit 0x0a
        inc dword ptr [esi + 0a48h]
        mov dword ptr [esp + 14h], edx
        cmp dword ptr [esp + 18h], 0
        ; Exact mapped bytes 75 13: jne 0x588e6a26
        __asm _emit 0x75
        __asm _emit 0x13
        cmp eax, 1
        ; Exact mapped bytes 75 0E: jne 0x588e6a26
        __asm _emit 0x75
        __asm _emit 0x0e
        test edx, edx
        ; Exact mapped bytes 75 0A: jne 0x588e6a26
        __asm _emit 0x75
        __asm _emit 0x0a
        inc dword ptr [esi + 0a48h]
        mov dword ptr [esp + 18h], eax
        cmp dword ptr [esp + 1ch], 0
        ; Exact mapped bytes 75 17: jne 0x588e6a44
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, 1
        cmp eax, ecx
        ; Exact mapped bytes 75 0E: jne 0x588e6a44
        __asm _emit 0x75
        __asm _emit 0x0e
        cmp edx, ecx
        ; Exact mapped bytes 75 0A: jne 0x588e6a44
        __asm _emit 0x75
        __asm _emit 0x0a
        add dword ptr [esi + 0a48h], ecx
        mov dword ptr [esp + 1ch], ecx
        mov eax, ebx
        movzx ecx, word ptr [eax + 0ch]
        shr ecx, 0ah
        inc ebp
        and ecx, 1fh
        cmp ebp, ecx
        ; Exact mapped bytes 0F 8C 67 FF FF FF: jl 0x588e69c0
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x67
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
