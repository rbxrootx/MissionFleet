// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C0340 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_004c0340_004C0340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 9D D4 FF FF: call 0x4bd7f0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        and eax, 90h
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x4c0363
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 59: jmp 0x4c03bc
        __asm _emit 0xeb
        __asm _emit 0x59
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F0 BE FF FF: call 0x4bc260
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes DD 5D F8: fstp qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf8
        ; Exact mapped bytes DD 45 F8: fld qword ptr [ebp - 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes DC 5D 08: fcomp qword ptr [ebp + 8]
        __asm _emit 0xdc
        __asm _emit 0x5d
        __asm _emit 0x08
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 40h
        ; Exact mapped bytes 74 37: je 0x4c03ba
        __asm _emit 0x74
        __asm _emit 0x37
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 35 30 CE 58 00: fdiv qword ptr [0x58ce30]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xce
        __asm _emit 0x58
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 C9 BE FF FF: call 0x4bc260
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes DD 45 08: fld qword ptr [ebp + 8]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DC 35 30 CE 58 00: fdiv qword ptr [0x58ce30]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xce
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DE D9: fcompp
        __asm _emit 0xde
        __asm _emit 0xd9
        ; Exact mapped bytes DF E0: fnstsw ax
        __asm _emit 0xdf
        __asm _emit 0xe0
        test ah, 40h
        ; Exact mapped bytes 74 07: je 0x4c03b3
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 2
        ; Exact mapped bytes EB 09: jmp 0x4c03bc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4c03bc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
