// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587993F0 .. +0xF6 bytes.
extern "C" __declspec(naked) void FUN_587993f0_587993F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888082dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push ebx
        push esi
        push edi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov edi, dword ptr [ecx + 4]
        mov ebx, dword ptr [esi + 4]
        test edx, edx
        ; Exact mapped bytes 75 23: jne 0x5879944d
        __asm _emit 0x75
        __asm _emit 0x23
        cmp edi, ebx
        setb al
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 09 7C 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7c
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [esi]
        shr edi, 2
        shr ebx, 2
        mov ecx, edi
        cmp ebx, edi
        cmovb ecx, ebx
        test esi, esi
        ; Exact mapped bytes 74 69: je 0x587994c9
        __asm _emit 0x74
        __asm _emit 0x69
        sub ecx, 4
        ; Exact mapped bytes 72 11: jb 0x58799476
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [esi]
        ; Exact mapped bytes 75 10: jne 0x5879947b
        __asm _emit 0x75
        __asm _emit 0x10
        add edx, 4
        add esi, 4
        sub ecx, 4
        ; Exact mapped bytes 73 EF: jae 0x58799465
        __asm _emit 0x73
        __asm _emit 0xef
        cmp ecx, -4
        ; Exact mapped bytes 74 34: je 0x587994af
        __asm _emit 0x74
        __asm _emit 0x34
        mov al, byte ptr [edx]
        cmp al, byte ptr [esi]
        ; Exact mapped bytes 75 27: jne 0x587994a8
        __asm _emit 0x75
        __asm _emit 0x27
        cmp ecx, -3
        ; Exact mapped bytes 74 29: je 0x587994af
        __asm _emit 0x74
        __asm _emit 0x29
        mov al, byte ptr [edx + 1]
        cmp al, byte ptr [esi + 1]
        ; Exact mapped bytes 75 1A: jne 0x587994a8
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp ecx, -2
        ; Exact mapped bytes 74 1C: je 0x587994af
        __asm _emit 0x74
        __asm _emit 0x1c
        mov al, byte ptr [edx + 2]
        cmp al, byte ptr [esi + 2]
        ; Exact mapped bytes 75 0D: jne 0x587994a8
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp ecx, -1
        ; Exact mapped bytes 74 0F: je 0x587994af
        __asm _emit 0x74
        __asm _emit 0x0f
        mov al, byte ptr [edx + 3]
        cmp al, byte ptr [esi + 3]
        ; Exact mapped bytes 74 07: je 0x587994af
        __asm _emit 0x74
        __asm _emit 0x07
        sbb eax, eax
        or eax, 1
        ; Exact mapped bytes EB 02: jmp 0x587994b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 79 07: jns 0x587994bc
        __asm _emit 0x79
        __asm _emit 0x07
        mov al, 1
        ; Exact mapped bytes E9 73 FF FF FF: jmp 0x5879942f
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 0F 8E 68 FF FF FF: jle 0x5879942a
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor al, al
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x5879942f
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b6db0h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 FA 05 D1 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x05
        __asm _emit 0xd1
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        mov dword ptr [ebp - 4], 0
        push eax
        ; Exact mapped bytes E8 4A 18 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
