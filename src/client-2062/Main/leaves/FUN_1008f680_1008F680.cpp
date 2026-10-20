// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008F680 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_1008f680_1008F680() {
    __asm {
        push -1
        push 10170718h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr [esp + 10h], edi
        mov dword ptr [edi], 10175e9ch
        xor ebp, ebp
        lea esi, [edi + 54h]
        mov dword ptr [esp + 1ch], ebp
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1008f6c2
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x1008f6b4
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [edi + 5ch]
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1008f6de
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x1008f6d0
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [edi + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1008f6f4
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 64h], ebp
        mov ecx, dword ptr [edi + 68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1008f704
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 68h], ebp
        mov ecx, dword ptr [edi + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1008f714
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 6ch], ebp
        mov ecx, edi
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 ED 34 07 00: call 0x10102c10
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
