// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856A970 .. +0x141 bytes.
extern "C" __declspec(naked) void FUN_5856a970_5856A970() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 C0 F1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xc0
        __asm _emit 0xf1
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 88h], eax
        ; Exact mapped bytes 75 07: jne 0x5856a99d
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AB 98 FF FF: call 0x58564250
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 20: je 0x5856a9cc
        __asm _emit 0x74
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ech]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2ech
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 31 FE FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ech]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ech], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 2ech]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5B 9B FF FF: call 0x58564550
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ech], eax
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 82 28 02 00 00: mov ax, word ptr [edx + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E0 0F: and ax, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x0f
        movzx ecx, ax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 2ech], ecx
        ; Exact mapped bytes 7C 16: jl 0x5856aa30
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 88 28 02 00 00: mov cx, word ptr [eax + 0x228]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 0C: jmp 0x5856aa3c
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ech]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 C6 FF FF: call 0x58567110
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ech]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 2ech], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 47: je 0x5856aaad
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ech]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 2ech
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3B 33 FE FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x33
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ech]
        xor ecx, 55555555h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 138h]
        push eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 34 42 11 00: call 0x5867ece0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x42
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
