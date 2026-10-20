// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E6AC0 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_588e6ac0() {
    __asm {
        mov eax, dword ptr [ecx + 0cc0h]
        ; Exact mapped bytes DB 40 70: fild dword ptr [eax + 0x70]
        __asm _emit 0xdb
        __asm _emit 0x40
        __asm _emit 0x70
        sub esp, 0ch
        push ebx
        push esi
        mov esi, dword ptr [ecx + 4ch]
        push edi
        mov edi, dword ptr [ecx + 0a4ch]
        mov ecx, dword ptr [eax + 70h]
        xor esi, 0aaaaaaaah
        test ecx, ecx
        ; Exact mapped bytes 7D 06: jge 0x588e6aeb
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 35 18 CF 98 58: fdiv qword ptr [0x5898cf18]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        mov edx, edi
        xor edx, 0aaaaaaaah
        sub edx, esi
        mov dword ptr [esp + 0ch], edx
        ; Exact mapped bytes DC 0D E8 13 9A 58: fmul qword ptr [0x589a13e8]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes DD 54 24 10: fst qword ptr [esp + 0x10]
        __asm _emit 0xdd
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes DB 44 24 0C: fild dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes DE C9: fmulp st(1)
        __asm _emit 0xde
        __asm _emit 0xc9
        ; Exact mapped bytes DC 0D 60 CF 98 58: fmul qword ptr [0x5898cf60]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0xcf
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes E8 76 61 09 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E8 81 61 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        mov ebx, eax
        test esi, esi
        ; Exact mapped bytes 75 2A: jne 0x588e6b4f
        __asm _emit 0x75
        __asm _emit 0x2a
        xor edi, 0aaaaaaaah
        mov dword ptr [esp + 0ch], edi
        ; Exact mapped bytes DB 44 24 0C: fild dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        test edi, edi
        ; Exact mapped bytes 7D 06: jge 0x588e6b3d
        __asm _emit 0x7d
        __asm _emit 0x06
        ; Exact mapped bytes DC 05 10 CB 98 58: fadd qword ptr [0x5898cb10]
        __asm _emit 0xdc
        __asm _emit 0x05
        __asm _emit 0x10
        __asm _emit 0xcb
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes DC 4C 24 10: fmul qword ptr [esp + 0x10]
        __asm _emit 0xdc
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 4A 61 09 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes E8 55 61 09 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x61
        __asm _emit 0x09
        __asm _emit 0x00
        add ebx, eax
        mov eax, ebx
        pop edi
        pop esi
        pop ebx
        add esp, 0ch
        ret
    }
}
