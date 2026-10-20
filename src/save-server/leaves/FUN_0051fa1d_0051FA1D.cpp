// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051FA1D .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_0051fa1d_0051FA1D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 75 04: jne 0x51fa36
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 68: jmp 0x51fa9e
        __asm _emit 0xeb
        __asm _emit 0x68
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 11: jne 0x51fa50
        __asm _emit 0x75
        __asm _emit 0x11
        push 43h
        push 67bf50h
        ; Exact mapped bytes E8 F5 92 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51fa50
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51fa36
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 28h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2ch]
        push eax
        ; Exact mapped bytes FF 15 54 B9 68 00: call dword ptr [0x68b954]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 04: jne 0x51fa88
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 16: jmp 0x51fa9e
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
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
