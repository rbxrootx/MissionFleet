// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD724 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_004cd724_004CD724() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 04: jne 0x4cd734
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 61: jmp 0x4cd795
        __asm _emit 0xeb
        __asm _emit 0x61
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4cd74e
        __asm _emit 0x75
        __asm _emit 0x14
        push 290h
        push 6714ach
        ; Exact mapped bytes E8 F7 B5 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd74e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4cd734
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 01 00 00: mov word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF 15 18 BA 68 00: call dword ptr [0x68ba18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4cd78c
        __asm _emit 0x75
        __asm _emit 0x14
        push 295h
        push 6714ach
        ; Exact mapped bytes E8 B9 B5 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cd78c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x4cd75c
        __asm _emit 0x75
        __asm _emit 0xca
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
