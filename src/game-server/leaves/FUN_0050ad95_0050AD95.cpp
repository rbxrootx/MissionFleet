// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050AD95 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_0050ad95_0050AD95() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 DD FF FF: call 0x508b8f
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 9
        ; Exact mapped bytes 77 37: ja 0x50adf8
        __asm _emit 0x77
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [ecx + 50ae2ah]
        ; Exact mapped bytes FF 24 85 22 AE 50 00: jmp dword ptr [eax*4 + 0x50ae22]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0xae
        __asm _emit 0x50
        __asm _emit 0x00
        ; Exact mapped bytes EB 46: jmp 0x50ae1b
        __asm _emit 0xeb
        __asm _emit 0x46
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x50adf2
        __asm _emit 0x74
        __asm _emit 0x14
        push 415h
        push 5cb450h
        ; Exact mapped bytes E8 13 9C 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x9c
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50adf2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x50add5
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x50ae15
        __asm _emit 0x74
        __asm _emit 0x14
        push 417h
        push 5cb450h
        ; Exact mapped bytes E8 F0 9B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50ae15
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x50adf8
        __asm _emit 0x75
        __asm _emit 0xdd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
