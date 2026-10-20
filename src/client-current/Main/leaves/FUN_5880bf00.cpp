// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5880BF00 .. +0x8B bytes.
extern "C" __declspec(naked) void FUN_5880bf00() {
    __asm {
        sub esp, 0ch
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ecx + 6508h]
        xor edx, 0aaaaaaaah
        mov dword ptr [esp + 4], edx
        ; Exact mapped bytes DB 44 24 04: fild dword ptr [esp + 4]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 7D 06: jge 0x5880bf29
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 35 E0 CA 98 58: fdiv qword ptr [0x5898cae0]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0xca
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 02: fnstcw word ptr [esp + 2]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x02
        movzx eax, word ptr [esp + 2]
        or eax, 0c00h
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes D9 6C 24 04: fldcw word ptr [esp + 4]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DF 7C 24 04: fistp qword ptr [esp + 4]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x04
        mov eax, dword ptr [esp + 4]
        ; Exact mapped bytes D9 6C 24 02: fldcw word ptr [esp + 2]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x02
        ; Exact mapped bytes DB 44 24 04: fild dword ptr [esp + 4]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        test eax, eax
        ; Exact mapped bytes 7D 06: jge 0x5880bf5f
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes D8 05 88 D7 98 58: fadd dword ptr [0x5898d788]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x88
        __asm _emit 0xd7
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes D8 0D 44 D6 99 58: fmul dword ptr [0x5899d644]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0xd6
        __asm _emit 0x99
        __asm _emit 0x58
        ; Exact mapped bytes D9 7C 24 02: fnstcw word ptr [esp + 2]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x02
        movzx eax, word ptr [esp + 2]
        or eax, 0c00h
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes D9 6C 24 04: fldcw word ptr [esp + 4]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DF 7C 24 04: fistp qword ptr [esp + 4]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x04
        mov eax, dword ptr [esp + 4]
        ; Exact mapped bytes D9 6C 24 02: fldcw word ptr [esp + 2]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x02
        add esp, 0ch
        ret
    }
}
