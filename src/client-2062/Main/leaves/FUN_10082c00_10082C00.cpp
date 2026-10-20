// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10082C00 .. +0x1BB bytes.
extern "C" __declspec(naked) void FUN_10082c00_10082C00() {
    __asm {
        push -1
        push 1016ffa8h
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
        push ebp
        push esi
        mov esi, ecx
        mov dword ptr [esp + 8], esi
        mov dword ptr [esi], 10175df0h
        mov ecx, dword ptr [esi + 68h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 09: je 0x10082c3a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 68h], ebp
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10082c4a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 6ch], ebp
        push ebx
        push edi
        lea edi, [esi + 70h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10082c62
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x10082c54
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esi + 78h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10082c78
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 78h], ebp
        mov ecx, dword ptr [esi + 7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x10082c88
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 7ch], ebp
        mov ecx, dword ptr [esi + 80h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10082c9e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 80h], ebp
        mov ecx, dword ptr [esi + 84h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10082cb4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 84h], ebp
        mov ecx, dword ptr [esi + 88h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10082cca
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 88h], ebp
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10082ce0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 8ch], ebp
        mov ecx, dword ptr [esi + 90h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10082cf6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 90h], ebp
        lea edi, [esi + 94h]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10082d0f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 EC: jne 0x10082d01
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esi + 9ch]
        pop edi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 0C: je 0x10082d2d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 9ch], ebp
        mov ecx, dword ptr [esi + 0a0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10082d43
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a0h], ebp
        mov ecx, dword ptr [esi + 0a4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10082d59
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0a4h], ebp
        mov ecx, dword ptr [esi + 0a8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10082d6f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a8h], ebp
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10082d85
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0ach], ebp
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10082d9b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0b0h], ebp
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 F6 00 08 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        pop esi
        pop ebp
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
