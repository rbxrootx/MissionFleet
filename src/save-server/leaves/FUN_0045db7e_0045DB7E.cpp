// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045DB7E .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_0045db7e_0045DB7E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 70 DB 0E 00: call 0x54b6ff
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 0C DC 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 74 0D: je 0x45dba9
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 FF DB 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 1B: jne 0x45dbc4
        __asm _emit 0x75
        __asm _emit 0x1b
        push 2
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 01 DC 0E 00: call 0x54b7b4
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 DB 0E 00: call 0x54b74f
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 59: jmp 0x45dc1d
        __asm _emit 0xeb
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D7 DB 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 0D: je 0x45dbde
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CA DB 0E 00: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 1B: jne 0x45dbf9
        __asm _emit 0x75
        __asm _emit 0x1b
        push 1
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 CC DB 0E 00: call 0x54b7b4
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B DB 0E 00: call 0x54b74f
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 24: jmp 0x45dc1d
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes DD 02: fld qword ptr [edx]
        __asm _emit 0xdd
        __asm _emit 0x02
        ; Exact mapped bytes DC 00: fadd qword ptr [eax]
        __asm _emit 0xdc
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D F4: fstp qword ptr [ebp - 0xc]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf4
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 25 04 00 00: call 0x45e033
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 DB 0E 00: call 0x54b74f
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xdb
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
