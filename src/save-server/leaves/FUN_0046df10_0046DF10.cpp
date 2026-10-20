// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046DF10 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_0046df10_0046DF10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push 0ffffh
        push 133fh
        ; Exact mapped bytes E8 EB BE 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 0eh]
        and eax, 0ffffh
        and eax, 7ff0h
        cmp eax, 7ff0h
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x46dfd9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 C0 BC 00 00: call 0x479c10
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 0E: je 0x46df6a
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 74 1E: je 0x46df80
        __asm _emit 0x74
        __asm _emit 0x1e
        cmp dword ptr [ebp - 10h], 3
        ; Exact mapped bytes 74 30: je 0x46df98
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes EB 46: jmp 0x46dfb0
        __asm _emit 0xeb
        __asm _emit 0x46
        push 0ffffh
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 98 BE 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes EB 7F: jmp 0x46dfff
        __asm _emit 0xeb
        __asm _emit 0x7f
        push 0ffffh
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 82 BE 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes EB 67: jmp 0x46dfff
        __asm _emit 0xeb
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 15h
        ; Exact mapped bytes E8 25 AF 00 00: call 0x478ed0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 4F: jmp 0x46dfff
        __asm _emit 0xeb
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 05 E0 EC 63 00: fadd qword ptr [0x63ece0]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0x63
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 15h
        push 8
        ; Exact mapped bytes E8 CC AF 00 00: call 0x478fa0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        ; Exact mapped bytes EB 26: jmp 0x46dfff
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 0ch]
        and edx, 7fffffffh
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        push 0ffffh
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 17 BE 00 00: call 0x479e10
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        mov esp, ebp
        pop ebp
        ret
    }
}
