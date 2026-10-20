// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049EDBE .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0049edbe_0049EDBE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5F DA 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x49edea
        __asm _emit 0x74
        __asm _emit 0x14
        push 48ah
        push 5cbe8ch
        ; Exact mapped bytes E8 1B 5C 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x5c
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49edea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x49edca
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 39 DA 0A 00: call 0x54c831
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x49ee10
        __asm _emit 0x74
        __asm _emit 0x14
        push 48bh
        push 5cbe8ch
        ; Exact mapped bytes E8 F5 5B 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x5b
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x49ee10
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x49edf0
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 12: jne 0x49ee36
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx]
        cmp dword ptr [eax], ecx
        sbb edx, edx
        inc edx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 14: jmp 0x49ee4a
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 4]
        xor eax, eax
        cmp edx, dword ptr [ecx + 4]
        setl al
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
