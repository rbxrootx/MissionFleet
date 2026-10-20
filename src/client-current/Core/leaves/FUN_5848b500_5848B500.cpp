// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848B500 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_5848b500_5848B500() {
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
        mov byte ptr [ebp - 86h], 0
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
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 55 80: mov word ptr [ebp - 0x80], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x80
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 98h], ecx
        ; Exact mapped bytes 66 0F B6 95 7B FF FF FF: movzx dx, byte ptr [ebp - 0x85]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x95
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, dx
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        push 0ch
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 24 EF 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xef
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 89 5A 3A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x5a
        __asm _emit 0x3a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
