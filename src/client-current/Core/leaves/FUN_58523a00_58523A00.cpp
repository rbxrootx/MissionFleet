// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523A00 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_58523a00_58523A00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x58523ae7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 8A F6 FF: call 0x5848c4a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8a
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 53: jne 0x58523a80
        __asm _emit 0x75
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 4]
        add edx, 29ah
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A0 D1 32 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 37: jne 0x58523a7e
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 89 D1 32 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xd1
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x58523a7e
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        add eax, 2b2h
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 70 D1 32 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xd1
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58523a7e
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes EB 6C: jmp 0x58523aea
        __asm _emit 0xeb
        __asm _emit 0x6c
        ; Exact mapped bytes EB 57: jmp 0x58523ad7
        __asm _emit 0xeb
        __asm _emit 0x57
        cmp dword ptr [ebp + 14h], 2
        ; Exact mapped bytes 75 51: jne 0x58523ad7
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 4]
        add eax, 2d2h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 48 D1 32 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd1
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 38: jne 0x58523ad7
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 31 D1 32 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xd1
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x58523ad7
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2b2h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 17 D1 32 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xd1
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58523ad7
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB 13: jmp 0x58523aea
        __asm _emit 0xeb
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 51 3F F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 2B FF FF FF: jmp 0x58523a12
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        or eax, 0ffffffffh
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
