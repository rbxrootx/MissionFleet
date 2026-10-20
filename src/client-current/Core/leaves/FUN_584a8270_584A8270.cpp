// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8270 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_584a8270_584A8270() {
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
        mov byte ptr [ebp - 88h], 1
        mov byte ptr [ebp - 87h], 1
        mov byte ptr [ebp - 86h], 0
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 98h], 8
        mov eax, dword ptr [ebp - 98h]
        add eax, dword ptr [ebp - 8ch]
        mov cl, byte ptr [ebp + 0ch]
        mov byte ptr [ebp + eax - 84h], cl
        mov edx, dword ptr [ebp - 8ch]
        add edx, 1
        mov dword ptr [ebp - 8ch], edx
        ; Exact mapped bytes 66 8B 45 10: mov ax, word ptr [ebp + 0x10]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 85 70 FF FF FF: mov word ptr [ebp - 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 4D 14: mov cx, word ptr [ebp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x14
        ; Exact mapped bytes 66 89 8D 6C FF FF FF: mov word ptr [ebp - 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 98h]
        add edx, dword ptr [ebp - 8ch]
        mov byte ptr [ebp - 85h], dl
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes 66 8B 8D 70 FF FF FF: mov cx, word ptr [ebp - 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 4D 80: mov word ptr [ebp - 0x80], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x80
        ; Exact mapped bytes 66 8B 95 6C FF FF FF: mov dx, word ptr [ebp - 0x94]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x95
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 55 82: mov word ptr [ebp - 0x7e], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x82
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
        ; Exact mapped bytes E8 A8 21 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x21
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 0D 8D 38 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8d
        __asm _emit 0x38
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
