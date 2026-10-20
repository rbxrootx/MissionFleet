// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10090800 .. +0x161 bytes.
extern "C" __declspec(naked) void FUN_10090800_10090800() {
    __asm {
        push -1
        push 10170878h
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
        mov ebx, ecx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [ebx], 10175eb8h
        mov ecx, dword ptr [ebx + 0cch]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 1ch], ebp
        ; Exact mapped bytes 74 0C: je 0x10090842
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0cch], ebp
        mov ecx, dword ptr [ebx + 0d0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10090858
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 0d0h], ebp
        lea esi, [ebx + 0b8h]
        mov edi, 4
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10090871
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x10090863
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebx + 0ach]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10090890
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x10090882
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebx + 88h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100908af
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x100908a1
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [ebx + 84h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100908cb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 84h], ebp
        mov ecx, dword ptr [ebx + 80h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100908e1
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 80h], ebp
        mov ecx, dword ptr [ebx + 7ch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100908f1
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [ebx + 7ch], ebp
        mov ecx, dword ptr [ebx + 0b4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x10090907
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebx + 0b4h], ebp
        lea esi, [ebx + 74h]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1009091d
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1009090f
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [ebx + 6ch]
        mov edi, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x10090939
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebp
        add esi, 4
        dec edi
        ; Exact mapped bytes 75 EC: jne 0x1009092b
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, ebx
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 52 25 07 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x25
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
