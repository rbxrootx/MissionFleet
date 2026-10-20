// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4400 .. +0xC3 bytes.
extern "C" __declspec(naked) void FUN_584e4400_584E4400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], 0
        mov byte ptr [ebp - 0ch], 1
        mov byte ptr [ebp - 0bh], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584e4427
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        push 1
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C EF FD FF: call 0x584c3390
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xef
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D 80 00 00 00: jge 0x584e44bd
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D F8: mov cx, word ptr [ebp - 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 66 89 4D F6: mov word ptr [ebp - 0xa], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf6
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9C 27 01 00: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5B: je 0x584e44b8
        __asm _emit 0x74
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 35eh]
        movzx edx, word ptr [ebp + 0ch]
        cmp ecx, edx
        ; Exact mapped bytes 75 49: jne 0x584e44b8
        __asm _emit 0x75
        __asm _emit 0x49
        push 30h
        push 0
        push 5890bf88h
        ; Exact mapped bytes E8 93 89 36 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x89
        __asm _emit 0x36
        __asm _emit 0x00
        add esp, 0ch
        push 5890bf88h
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        push edx
        ; Exact mapped bytes E8 27 FE FF FF: call 0x584e42c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        add eax, 33ch
        push eax
        push 30h
        push 5890bf88h
        ; Exact mapped bytes E8 BF 20 FA FF: call 0x58486570
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, 5890bf88h
        ; Exact mapped bytes EB 07: jmp 0x584e44bf
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 61 FF FF FF: jmp 0x584e441e
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
