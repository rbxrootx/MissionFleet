// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432051 .. +0x7F bytes.
extern "C" __declspec(naked) void FUN_00432051_00432051() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        push 1
        xor ebx, ebx
        mov esi, ecx
        pop edi
        mov dword ptr [esp + 10h], ebx
        cmp edi, ebx
        ; Exact mapped bytes 74 2C: je 0x432091
        __asm _emit 0x74
        __asm _emit 0x2c
        lea ebp, [esi + 30h]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebp
        ; Exact mapped bytes FF 15 C0 C4 43 00: call dword ptr [0x43c4c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x432091
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esi]
        inc dword ptr [esp + 10h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x43208d
        __asm _emit 0x75
        __asm _emit 0x02
        xor edi, edi
        cmp edi, ebx
        ; Exact mapped bytes 75 D7: jne 0x432068
        __asm _emit 0x75
        __asm _emit 0xd7
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x4320c3
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [esi]
        lea ebp, [esi + 30h]
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4320b2
        __asm _emit 0x74
        __asm _emit 0x07
        push 1
        mov dword ptr [esp + 14h], ebx
        pop edi
        push ebx
        push ebx
        push ebx
        push ebx
        push ebp
        ; Exact mapped bytes FF 15 C0 C4 43 00: call dword ptr [0x43c4c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 D0: jne 0x432091
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes EB 9E: jmp 0x432061
        __asm _emit 0xeb
        __asm _emit 0x9e
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
