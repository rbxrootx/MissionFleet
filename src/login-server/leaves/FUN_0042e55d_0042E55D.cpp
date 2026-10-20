// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E55D .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_0042e55d_0042E55D() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov ebx, dword ptr [ebp + 8]
        push edi
        push dword ptr [ebp + 14h]
        mov edi, dword ptr [ebp + 0ch]
        mov esi, ecx
        push dword ptr [ebp + 10h]
        push edi
        push ebx
        ; Exact mapped bytes E8 00 35 00 00: call 0x431a78
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 58: jne 0x42e5d4
        __asm _emit 0x75
        __asm _emit 0x58
        test edi, edi
        ; Exact mapped bytes 74 05: je 0x42e585
        __asm _emit 0x74
        __asm _emit 0x05
        cmp edi, -1
        ; Exact mapped bytes 75 54: jne 0x42e5d9
        __asm _emit 0x75
        __asm _emit 0x54
        test bh, 80h
        ; Exact mapped bytes 74 4F: je 0x42e5d9
        __asm _emit 0x74
        __asm _emit 0x4f
        cmp ebx, 0f000h
        ; Exact mapped bytes 73 47: jae 0x42e5d9
        __asm _emit 0x73
        __asm _emit 0x47
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 37 0D 00 00: call 0x42f2d8
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x42e5b8
        __asm _emit 0x74
        __asm _emit 0x13
        push dword ptr [ebp + 14h]
        mov edx, dword ptr [eax]
        mov ecx, eax
        push dword ptr [ebp + 10h]
        push edi
        push ebx
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x42e5d4
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 0E 3A 00 00: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x42e5d9
        __asm _emit 0x74
        __asm _emit 0x18
        push dword ptr [ebp + 14h]
        mov edx, dword ptr [eax]
        mov ecx, eax
        push dword ptr [ebp + 10h]
        push edi
        push ebx
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x42e5d9
        __asm _emit 0x74
        __asm _emit 0x05
        push 1
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x42e5db
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
