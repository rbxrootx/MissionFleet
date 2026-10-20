// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050DBB7 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_0050dbb7_0050DBB7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 88h], 1
        ; Exact mapped bytes E8 2B 7A 02 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 43h
        push 5c5da4h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 78 D5 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        push 585e80h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B D4 FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x50dc0a
        __asm _emit 0x75
        __asm _emit 0x11
        push 44h
        push 5c5da4h
        ; Exact mapped bytes E8 FB 6D 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50dc0a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x50dbe8
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A C7 00 00: call 0x51a332
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [eax + 88h], edx
        push 0
        push 0
        push 36ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 DF 02 00: call 0x53bc2d
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
