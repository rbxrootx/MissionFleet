// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045DCC8 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_0045dcc8_0045DCC8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes DB 45 08: fild dword ptr [ebp + 8]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes DB 45 0C: fild dword ptr [ebp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes DC 35 F8 A4 63 00: fdiv qword ptr [0x63a4f8]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes DB 45 10: fild dword ptr [ebp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DC 35 10 A5 63 00: fdiv qword ptr [0x63a510]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0xa5
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes DB 45 14: fild dword ptr [ebp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes DC 35 D8 A4 63 00: fdiv qword ptr [0x63a4d8]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xa4
        __asm _emit 0x63
        __asm _emit 0x00
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 18: fstp qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x18
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 DA 0E 00: call 0x54b7b4
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xda
        __asm _emit 0x0e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
