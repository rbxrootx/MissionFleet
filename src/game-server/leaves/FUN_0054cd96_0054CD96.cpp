// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054CD96 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0054cd96_0054CD96() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 89 FF FF FF: call 0x54cd33
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54cdc2
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d6h
        push 5cc198h
        ; Exact mapped bytes E8 43 7C FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7c
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54cdc2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x54cda2
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
        ; Exact mapped bytes DC 05 D8 7E 58 00: fadd qword ptr [0x587ed8]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 1E C7 F5 FF: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc7
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
