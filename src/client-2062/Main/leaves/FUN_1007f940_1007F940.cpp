// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007F940 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_1007f940_1007F940() {
    __asm {
        push -1
        push 1016fe08h
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
        mov dword ptr [edi], 10175db8h
        xor ebx, ebx
        lea esi, [edi + 64h]
        mov dword ptr [esp + 1ch], ebx
        mov ebp, 3
        mov ecx, dword ptr [esi + 10h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x1007f984
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 10h], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x1007f992
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebx
        add esi, 4
        dec ebp
        ; Exact mapped bytes 75 DC: jne 0x1007f974
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [edi + 0d8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1007f9ae
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 0d8h], ebx
        mov ecx, dword ptr [edi + 0dch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x1007f9c4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 0dch], ebx
        mov ecx, dword ptr [edi + 50h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x1007f9d4
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 50h], ebx
        mov ecx, edi
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 2D 32 08 00: call 0x10102c10
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x32
        __asm _emit 0x08
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
