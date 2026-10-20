// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413088 .. +0xAC bytes.
extern "C" __declspec(naked) void FUN_00413088_00413088() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 30: mov ax, word ptr [esi + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x30
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 8E 8F 00 00 00: jle 0x41312d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [ebp + 8]
        ; Exact mapped bytes 66 83 7D 08 01: cmp word ptr [ebp + 8], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x01
        ; Exact mapped bytes 7C 06: jl 0x4130ae
        __asm _emit 0x7c
        __asm _emit 0x06
        ; Exact mapped bytes 66 39 45 08: cmp word ptr [ebp + 8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 7E 0E: jle 0x4130bc
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [esi]
        push 0
        push 402h
        mov ecx, esi
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        ; Exact mapped bytes 0F BF 7D 08: movsx edi, word ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [esi + 38h]
        shl edi, 4
        add eax, edi
        push dword ptr [eax - 8]
        ; Exact mapped bytes 66 8B 40 F4: mov ax, word ptr [eax - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0xf4
        push eax
        ; Exact mapped bytes E8 CC 21 00 00: call 0x4152a1
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov ebx, eax
        push ebx
        ; Exact mapped bytes E8 0C AF 01 00: call 0x42dfec
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 38h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 66 8B 4C 39 F4: mov cx, word ptr [ecx + edi - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x39
        __asm _emit 0xf4
        push ecx
        push ebx
        push eax
        push 1
        push dword ptr [ebp + 8]
        push dword ptr [esi + 4]
        push dword ptr [esi + 8]
        ; Exact mapped bytes E8 CF 21 00 00: call 0x4152cd
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 0A: jne 0x41310d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 2B AA 01 00: call 0x42db36
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xaa
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x41312d
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [esi + 38h]
        ; Exact mapped bytes 66 8B 4C 39 F4: mov cx, word ptr [ecx + edi - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x39
        __asm _emit 0xf4
        push ecx
        lea ecx, [ebp - 4]
        push dword ptr [ebp + 0ch]
        push ebx
        push ecx
        push eax
        push dword ptr [ebp + 8]
        push dword ptr [esi + 4]
        push dword ptr [esi + 8]
        ; Exact mapped bytes E8 F0 21 00 00: call 0x41531d
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
