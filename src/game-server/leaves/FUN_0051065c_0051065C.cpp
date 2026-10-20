// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051065C .. +0xC0 bytes.
extern "C" __declspec(naked) void FUN_0051065c_0051065C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 15bh
        push 5c84b0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E7 AA FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x510693
        __asm _emit 0x7d
        __asm _emit 0x14
        push 15ch
        push 5c84b0h
        ; Exact mapped bytes E8 72 43 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510693
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x510679
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 68h]
        ; Exact mapped bytes 7C 14: jl 0x5106b8
        __asm _emit 0x7c
        __asm _emit 0x14
        push 15dh
        push 5c84b0h
        ; Exact mapped bytes E8 4D 43 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5106b8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DB: jne 0x510699
        __asm _emit 0x75
        __asm _emit 0xdb
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7D 14: jge 0x5106d8
        __asm _emit 0x7d
        __asm _emit 0x14
        push 15eh
        push 5c84b0h
        ; Exact mapped bytes E8 2D 43 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5106d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5106be
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 7C 14: jl 0x5106fd
        __asm _emit 0x7c
        __asm _emit 0x14
        push 15fh
        push 5c84b0h
        ; Exact mapped bytes E8 08 43 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5106fd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x5106de
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [ebp + 8]
        shl eax, 4
        mov ecx, dword ptr [ebp + 0ch]
        lea eax, [eax + ecx + 0e900h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
