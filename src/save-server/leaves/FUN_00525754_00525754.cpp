// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525754 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_00525754_00525754() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 FF FF FF: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52577e
        __asm _emit 0x75
        __asm _emit 0x14
        push 14fh
        push 6345e8h
        ; Exact mapped bytes E8 C7 35 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52577e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x52575e
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 74 14: je 0x5257a1
        __asm _emit 0x74
        __asm _emit 0x14
        push 150h
        push 6345e8h
        ; Exact mapped bytes E8 A4 35 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5257a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x525784
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 40h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 3ch], eax
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
