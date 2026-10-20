// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A16B6 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_004a16b6_004A16B6() {
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
        ; Exact mapped bytes DC 35 D0 7E 58 00: fdiv qword ptr [0x587ed0]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xd0
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes DB 45 10: fild dword ptr [ebp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x10
        ; Exact mapped bytes DC 35 E8 7E 58 00: fdiv qword ptr [0x587ee8]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DE C1: faddp st(1)
        __asm _emit 0xde
        __asm _emit 0xc1
        ; Exact mapped bytes DB 45 14: fild dword ptr [ebp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0x14
        ; Exact mapped bytes DC 35 B8 7E 58 00: fdiv qword ptr [0x587eb8]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x7e
        __asm _emit 0x58
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
        ; Exact mapped bytes E8 54 B6 0A 00: call 0x54cd44
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xb6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
