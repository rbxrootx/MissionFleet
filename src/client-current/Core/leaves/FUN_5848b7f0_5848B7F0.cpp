// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848B7F0 .. +0x197 bytes.
extern "C" __declspec(naked) void FUN_5848b7f0_5848B7F0() {
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
        mov dword ptr [ebp - 88h], ecx
        mov byte ptr [ebp - 94h], 1
        mov byte ptr [ebp - 93h], 1
        mov byte ptr [ebp - 92h], 0
        mov dword ptr [ebp - 98h], 0
        mov dword ptr [ebp - 9ch], 8
        mov eax, dword ptr [ebp - 9ch]
        add eax, dword ptr [ebp - 98h]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [ebp + eax - 84h], cl
        mov edx, dword ptr [ebp - 98h]
        add edx, 1
        mov dword ptr [ebp - 98h], edx
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 0a0h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0a0h]
        ; Exact mapped bytes E8 8B 04 00 00: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        mov ecx, dword ptr [ebp - 0a4h]
        ; Exact mapped bytes E8 3A B1 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ach], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 47: je 0x5848b8d9
        __asm _emit 0x74
        __asm _emit 0x47
        imul eax, dword ptr [ebp + 8], 14h
        mov ecx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ecx + eax + 110h]
        ; Exact mapped bytes E8 18 B1 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        add eax, dword ptr [edx]
        ; Exact mapped bytes 66 89 85 74 FF FF FF: mov word ptr [ebp - 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 8], 14h
        mov ecx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ecx + eax + 110h]
        ; Exact mapped bytes E8 E6 07 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        add eax, dword ptr [edx + 4]
        ; Exact mapped bytes 66 89 85 70 FF FF FF: mov word ptr [ebp - 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 3A: jmp 0x5848b913
        __asm _emit 0xeb
        __asm _emit 0x3a
        imul eax, dword ptr [ebp + 8], 14h
        mov ecx, dword ptr [ebp - 88h]
        mov ecx, dword ptr [ecx + eax + 110h]
        ; Exact mapped bytes E8 D1 B0 FF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 85 74 FF FF FF: mov word ptr [ebp - 0x8c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        imul edx, dword ptr [ebp + 8], 14h
        mov eax, dword ptr [ebp - 88h]
        mov ecx, dword ptr [eax + edx + 110h]
        ; Exact mapped bytes E8 A4 07 00 00: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 85 70 FF FF FF: mov word ptr [ebp - 0x90], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 9ch]
        add ecx, dword ptr [ebp - 98h]
        mov byte ptr [ebp - 91h], cl
        mov edx, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 84h], edx
        ; Exact mapped bytes 66 8B 85 74 FF FF FF: mov ax, word ptr [ebp - 0x8c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x85
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 80: mov word ptr [ebp - 0x80], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x80
        ; Exact mapped bytes 66 8B 8D 70 FF FF FF: mov cx, word ptr [ebp - 0x90]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 4D 82: mov word ptr [ebp - 0x7e], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x82
        mov edx, dword ptr [ebp - 88h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 0a8h], eax
        ; Exact mapped bytes 66 0F B6 8D 6F FF FF FF: movzx cx, byte ptr [ebp - 0x91]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8d
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, cx
        push edx
        lea eax, [ebp - 84h]
        push eax
        push 0ch
        mov ecx, dword ptr [ebp - 0a8h]
        ; Exact mapped bytes E8 6A EB 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xeb
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 CF 56 3A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x56
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
