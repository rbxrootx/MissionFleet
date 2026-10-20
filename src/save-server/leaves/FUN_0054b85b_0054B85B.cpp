// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B85B .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_0054b85b_0054B85B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 34 FF FF FF: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54b887
        __asm _emit 0x74
        __asm _emit 0x14
        push 0dbh
        push 678970h
        ; Exact mapped bytes E8 BE D4 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b887
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x54b867
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes DC 0D F8 A4 63 00: fmul qword ptr [0x63a4f8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D 08 A5 63 00: fmul qword ptr [0x63a508]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0xa5
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DC 05 00 A5 63 00: fadd qword ptr [0x63a500]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0xa5
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes E8 F7 22 F2 FF: call 0x46dba0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x22
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes DB 45 FC: fild dword ptr [ebp - 4]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xfc
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
