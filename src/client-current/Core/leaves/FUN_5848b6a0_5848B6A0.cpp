// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848B6A0 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_5848b6a0_5848B6A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ach
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 90h], ecx
        mov byte ptr [ebp - 88h], 1
        mov byte ptr [ebp - 87h], 1
        mov byte ptr [ebp - 86h], 0
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 9ch], 8
        mov eax, dword ptr [ebp - 9ch]
        add eax, dword ptr [ebp - 8ch]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [ebp + eax - 84h], cl
        mov edx, dword ptr [ebp - 8ch]
        add edx, 1
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 DB 05 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 8A B2 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        imul eax, dword ptr [ebp + 8], 14h
        mov ecx, dword ptr [ebp - 90h]
        mov ecx, dword ptr [ecx + eax + 110h]
        ; Exact mapped bytes E8 6E B2 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 6C FF FF FF: mov word ptr [ebp - 0x94], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, dword ptr [ebp + 8], 14h
        mov eax, dword ptr [ebp - 90h]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 41 09 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 68 FF FF FF: mov word ptr [ebp - 0x98], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 9ch]
        add ecx, dword ptr [ebp - 8ch]
        mov byte ptr [ebp - 85h], cl
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes 66 8B 85 6C FF FF FF: mov ax, word ptr [ebp - 0x94]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x6c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 80: mov word ptr [ebp - 0x80], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 66 8B 8D 68 FF FF FF: mov cx, word ptr [ebp - 0x98]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 4D 82: mov word ptr [ebp - 0x7e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x82
        mov edx, dword ptr [ebp - 90h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes 66 0F B6 8D 7B FF FF FF: movzx cx, byte ptr [ebp - 0x85]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, cx
        push edx
        lea eax, [ebp - 84h]
        push eax
        push 0ch
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 07 ED 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xed
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6C 58 3A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x58
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
