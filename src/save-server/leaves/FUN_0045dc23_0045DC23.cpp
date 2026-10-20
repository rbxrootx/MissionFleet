// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045DC23 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_0045dc23_0045DC23() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 CB DA 0E 00: call 0x54b6ff
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 67 DB 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x45dc4e
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5A DB 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x45dc69
        __asm _emit 0x75
        __asm _emit 0x1b
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 5C DB 0E 00: call 0x54b7b4
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB DA 0E 00: call 0x54b74f
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 59: jmp 0x45dcc2
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 32 DB 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x45dc83
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 25 DB 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x45dc9e
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 27 DB 0E 00: call 0x54b7b4
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 DA 0E 00: call 0x54b74f
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 24: jmp 0x45dcc2
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 02: fld qword ptr [edx]
        __asm _emit 0xdd
        __asm _emit 0x02
        ; Exact mapped bytes DC 20: fsub qword ptr [eax]
        __asm _emit 0xdc
        __asm _emit 0x20
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 80 03 00 00: call 0x45e033
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 DA 0E 00: call 0x54b74f
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
