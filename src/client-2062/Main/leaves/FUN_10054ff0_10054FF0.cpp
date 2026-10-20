// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10054FF0 .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_10054ff0_10054FF0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        mov ecx, dword ptr [esi + 344h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005500d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 344h], edi
        mov ecx, dword ptr [esi + 340h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10055023
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 340h], edi
        mov ecx, dword ptr [esi + 3e4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10055039
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3e4h], edi
        mov ecx, dword ptr [esi + 194h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005504f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 194h], edi
        mov ecx, dword ptr [esi + 3dch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10055065
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3dch], edi
        mov ecx, dword ptr [esi + 3e8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005507b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3e8h], edi
        mov ecx, dword ptr [esi + 3ech]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10055091
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3ech], edi
        add esi, 218h
        mov ebx, 0ah
        mov ecx, dword ptr [esi - 80h]
        cmp ecx, edi
        ; Exact mapped bytes 74 09: je 0x100550ac
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi - 80h], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 08: je 0x100550ba
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], edi
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 DC: jne 0x1005509c
        __asm _emit 0x75
        __asm _emit 0xdc
        pop edi
        pop esi
        pop ebx
        ret
    }
}
