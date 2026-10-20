// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A81B0 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_584a81b0_584A81B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 90h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov byte ptr [ebp - 88h], 1
        mov byte ptr [ebp - 87h], 2
        mov byte ptr [ebp - 86h], 1
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 90h], 6
        mov eax, dword ptr [ebp - 90h]
        add eax, dword ptr [ebp - 8ch]
        mov cl, byte ptr [ebp + 0ch]
        mov byte ptr [ebp + eax - 84h], cl
        mov edx, dword ptr [ebp - 8ch]
        add edx, 1
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 90h]
        add eax, dword ptr [ebp - 8ch]
        mov byte ptr [ebp - 85h], al
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 84h], ecx
        ; Exact mapped bytes 66 8B 55 10: mov dx, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 55 80: mov word ptr [ebp - 0x80], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x80
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
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8C 22 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x22
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 F1 8D 38 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
