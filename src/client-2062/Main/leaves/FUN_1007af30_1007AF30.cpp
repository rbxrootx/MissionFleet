// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007AF30 .. +0x332 bytes.
extern "C" __declspec(naked) void FUN_1007af30_1007AF30() {
    __asm {
        push -1
        push 1016fbc8h
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
        mov dword ptr [esi], 10175d2ch
        mov ecx, dword ptr [esi + 174h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 0C: je 0x1007af70
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 174h], ebp
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1007af80
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 64h], ebp
        mov ecx, dword ptr [esi + 68h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1007af90
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 68h], ebp
        mov ecx, dword ptr [esi + 70h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1007afa0
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 70h], ebp
        mov ecx, dword ptr [esi + 6ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1007afb0
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 6ch], ebp
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007afc6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0b0h], ebp
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007afdc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0ach], ebp
        mov ecx, dword ptr [esi + 0d8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007aff2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d8h], ebp
        mov ecx, dword ptr [esi + 0dch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b008
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0dch], ebp
        mov ecx, dword ptr [esi + 0e4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b01e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0e4h], ebp
        mov ecx, dword ptr [esi + 0e0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b034
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0e0h], ebp
        mov ecx, dword ptr [esi + 9ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b04a
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
        ; Exact mapped bytes 74 0C: je 0x1007b060
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0a0h], ebp
        mov ecx, dword ptr [esi + 0bch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b076
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0bch], ebp
        mov ecx, dword ptr [esi + 0c0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b08c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0c0h], ebp
        mov ecx, dword ptr [esi + 0c4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b0a2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0c4h], ebp
        mov ecx, dword ptr [esi + 0c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b0b8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0c8h], ebp
        mov ecx, dword ptr [esi + 0cch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b0ce
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0cch], ebp
        mov ecx, dword ptr [esi + 0d0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b0e4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0d0h], ebp
        mov ecx, dword ptr [esi + 0d4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b0fa
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0d4h], ebp
        mov ecx, dword ptr [esi + 100h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b110
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 100h], ebp
        mov ecx, dword ptr [esi + 104h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b126
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 104h], ebp
        mov ecx, dword ptr [esi + 108h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b13c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 108h], ebp
        mov ecx, dword ptr [esi + 10ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b152
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 10ch], ebp
        mov ecx, dword ptr [esi + 0f8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b168
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 0f8h], ebp
        mov ecx, dword ptr [esi + 0fch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b17e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0fch], ebp
        push ebx
        push edi
        lea edi, [esi + 124h]
        mov ebx, 5
        mov ecx, dword ptr [edi - 14h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1007b19b
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi - 14h], ebp
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1007b1a9
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi], ebp
        mov ecx, dword ptr [edi + 14h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1007b1b9
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 14h], ebp
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 CC: jne 0x1007b18b
        __asm _emit 0x75
        __asm _emit 0xcc
        lea edi, [esi + 15ch]
        mov ebx, 4
        mov ecx, dword ptr [edi - 10h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1007b1da
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi - 10h], ebp
        mov ecx, dword ptr [edi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1007b1e8
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
        ; Exact mapped bytes 75 DC: jne 0x1007b1ca
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [esi + 16ch]
        pop edi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 0C: je 0x1007b206
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 16ch], ebp
        mov ecx, dword ptr [esi + 170h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b21c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 170h], ebp
        mov ecx, dword ptr [esi + 60h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1007b22c
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 60h], ebp
        mov ecx, dword ptr [esi + 198h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1007b242
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 198h], ebp
        mov ecx, esi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 4F 7C 08 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7c
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
