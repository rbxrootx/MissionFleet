// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873A570 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_5873a570() {
    __asm {
        mov edx, dword ptr [esp + 4]
        sub esp, 8
        test edx, edx
        ; Exact mapped bytes 74 49: je 0x5873a5c4
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [edx + 8]
        sub eax, dword ptr [edx + 4]
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 0ch], edx
        ; Exact mapped bytes DB 44 24 0C: fild dword ptr [esp + 0xc]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes E8 F0 26 24 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x26
        __asm _emit 0x24
        __asm _emit 0x00
        ; Exact mapped bytes D9 7C 24 0C: fnstcw word ptr [esp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        movzx eax, word ptr [esp + 0ch]
        or eax, 0c00h
        mov dword ptr [esp], eax
        ; Exact mapped bytes D9 2C 24: fldcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x2c
        __asm _emit 0x24
        ; Exact mapped bytes DF 3C 24: fistp qword ptr [esp]
        __asm _emit 0xdf
        __asm _emit 0x3c
        __asm _emit 0x24
        mov eax, dword ptr [esp]
        ; Exact mapped bytes D9 6C 24 0C: fldcw word ptr [esp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x0c
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
