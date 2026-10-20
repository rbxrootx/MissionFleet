// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848B420 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_5848b420_5848B420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 94h], ecx
        mov byte ptr [ebp - 88h], 1
        mov byte ptr [ebp - 87h], 2
        mov byte ptr [ebp - 86h], 1
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 90h], 6
        mov eax, dword ptr [ebp - 90h]
        add eax, dword ptr [ebp - 8ch]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [ebp + eax - 84h], cl
        mov edx, dword ptr [ebp - 8ch]
        add edx, 1
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 90h]
        add eax, dword ptr [ebp - 8ch]
        mov byte ptr [ebp - 85h], al
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 84h], ecx
        imul edx, dword ptr [ebp + 8], 14h
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 95 0C 00 00: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 80: mov word ptr [ebp - 0x80], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x80
        mov ecx, dword ptr [ebp - 94h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 98h], edx
        ; Exact mapped bytes 66 0F B6 85 7B FF FF FF: movzx ax, byte ptr [ebp - 0x85]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x85
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, ax
        push ecx
        lea edx, [ebp - 84h]
        push edx
        push 0ch
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 F2 EF 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xef
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 57 5B 3A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x5b
        __asm _emit 0x3a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
