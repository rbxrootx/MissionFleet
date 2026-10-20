// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C4D00 .. +0x209 bytes.
extern "C" __declspec(naked) void FUN_100c4d00_100C4D00() {
    __asm {
        push -1
        push 10172738h
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
        push edi
        mov edi, ecx
        mov dword ptr [esp + 8], edi
        mov dword ptr [edi], 101762ech
        mov ecx, dword ptr [edi + 0a0h]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 74 0C: je 0x100c4d40
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 0a0h], ebx
        mov ecx, dword ptr [edi + 110h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4d56
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 110h], ebx
        mov ecx, dword ptr [edi + 114h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4d6c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 114h], ebx
        mov ecx, dword ptr [edi + 118h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4d82
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 118h], ebx
        mov ecx, dword ptr [edi + 11ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4d98
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 11ch], ebx
        mov ecx, dword ptr [edi + 120h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4dae
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 120h], ebx
        mov ecx, dword ptr [edi + 124h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4dc4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 124h], ebx
        mov ecx, dword ptr [edi + 14ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4dda
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 14ch], ebx
        mov ecx, dword ptr [edi + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4df0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 190h], ebx
        mov ecx, dword ptr [edi + 198h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4e06
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 198h], ebx
        mov ecx, dword ptr [edi + 1a8h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4e1c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 1a8h], ebx
        mov ecx, dword ptr [edi + 1ach]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4e32
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 1ach], ebx
        mov ecx, dword ptr [edi + 1b0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4e48
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 1b0h], ebx
        mov ecx, dword ptr [edi + 0a0h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4e5e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 0a0h], ebx
        mov ecx, dword ptr [edi + 114h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4e74
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 114h], ebx
        push ebp
        push esi
        lea esi, [edi + 0c4h]
        mov ebp, 8
        mov ecx, dword ptr [esi + 64h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x100c4e91
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 64h], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100c4e9f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebx
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4eb5
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 0ach], ebx
        mov ecx, dword ptr [esi + 8ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100c4ecb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 8ch], ebx
        add esi, 4
        dec ebp
        ; Exact mapped bytes 75 B0: jne 0x100c4e81
        __asm _emit 0x75
        __asm _emit 0xb0
        mov ecx, dword ptr [edi + 148h]
        pop esi
        cmp ecx, ebx
        pop ebp
        ; Exact mapped bytes 74 0C: je 0x100c4ee9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 148h], ebx
        mov ecx, edi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 08 27 F8 FF: call 0x10047600
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x27
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 0ch]
        pop edi
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
