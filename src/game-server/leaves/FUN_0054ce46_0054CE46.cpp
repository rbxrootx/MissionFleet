// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054CE46 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_0054ce46_0054CE46() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D9 FE FF FF: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54ce72
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e0h
        push 5cc198h
        ; Exact mapped bytes E8 93 7B FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ce72
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x54ce52
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes DC 0D D0 7E 58 00: fmul qword ptr [0x587ed0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xd0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D E0 7E 58 00: fmul qword ptr [0x587ee0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 0D E0 7E 58 00: fmul qword ptr [0x587ee0]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DC 05 D8 7E 58 00: fadd qword ptr [0x587ed8]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 62 C6 F5 FF: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xc6
        __asm _emit 0xf5
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
