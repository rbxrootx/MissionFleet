// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1009F570 .. +0x1E0 bytes.
extern "C" __declspec(naked) void FUN_1009f570_1009F570() {
    __asm {
        push -1
        push 10171088h
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
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        mov dword ptr [edi], 10175fc0h
        mov ecx, dword ptr [edi + 9e4h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 0C: je 0x1009f5b0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 9e4h], ebp
        mov ecx, dword ptr [edi + 9e8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f5c6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 9e8h], ebp
        mov ecx, dword ptr [edi + 9ech]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f5dc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 9ech], ebp
        mov ecx, dword ptr [edi + 9f4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f5f2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 9f4h], ebp
        mov ecx, dword ptr [edi + 9fch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f608
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 9fch], ebp
        mov ecx, dword ptr [edi + 0a00h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f61e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 0a00h], ebp
        mov ecx, dword ptr [edi + 9f8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f634
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 9f8h], ebp
        mov ecx, dword ptr [edi + 9cch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f64a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 9cch], ebp
        mov ecx, dword ptr [edi + 9c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f660
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 9c8h], ebp
        mov ecx, dword ptr [edi + 9d0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f676
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 9d0h], ebp
        push ebx
        push esi
        lea esi, [edi + 9d4h]
        mov ebx, 4
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1009f691
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
        ; Exact mapped bytes 75 EC: jne 0x1009f683
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [edi + 9a4h]
        mov ebx, 8
        mov ecx, dword ptr [esi - 20h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1009f6b2
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi - 20h], ebp
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1009f6c0
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        mov ecx, dword ptr [esi - 88h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f6d6
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi - 88h], ebp
        mov ecx, dword ptr [esi - 40h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1009f6e6
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi - 40h], ebp
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 B6: jne 0x1009f6a2
        __asm _emit 0x75
        __asm _emit 0xb6
        mov ecx, dword ptr [edi + 90ch]
        pop esi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 0C: je 0x1009f704
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 90ch], ebp
        mov ecx, dword ptr [edi + 914h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f71a
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 914h], ebp
        mov ecx, dword ptr [edi + 918h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x1009f730
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 918h], ebp
        mov ecx, edi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 E1 F3 FF FF: call 0x1009eb20
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0ch]
        pop edi
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
