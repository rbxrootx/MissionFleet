// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B8BB0 .. +0x133 bytes.
extern "C" __declspec(naked) void FUN_100b8bb0_100B8BB0() {
    __asm {
        push -1
        push 10172098h
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
        mov dword ptr [edi], 101761f4h
        mov ecx, dword ptr [edi + 8ch]
        xor ebx, ebx
        cmp ecx, ebx
        mov dword ptr [esp + 14h], ebx
        ; Exact mapped bytes 74 0C: je 0x100b8bf0
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 8ch], ebx
        mov ecx, dword ptr [edi + 90h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100b8c06
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 90h], ebx
        mov ecx, dword ptr [edi + 84h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100b8c1c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 84h], ebx
        mov ecx, dword ptr [edi + 224h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100b8c32
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 224h], ebx
        mov ecx, dword ptr [edi + 94h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100b8c48
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 94h], ebx
        push ebp
        push esi
        lea esi, [edi + 124h]
        mov ebp, 20h
        mov ecx, dword ptr [esi - 88h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100b8c6b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi - 88h], ebx
        mov ecx, dword ptr [esi]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100b8c79
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi], ebx
        mov ecx, dword ptr [esi + 80h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 0C: je 0x100b8c8f
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 80h], ebx
        add esi, 4
        dec ebp
        ; Exact mapped bytes 75 C0: jne 0x100b8c55
        __asm _emit 0x75
        __asm _emit 0xc0
        mov ecx, dword ptr [edi + 11ch]
        pop esi
        cmp ecx, ebx
        pop ebp
        ; Exact mapped bytes 74 0C: je 0x100b8cad
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
        ; Exact mapped bytes 74 0C: je 0x100b8cc3
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 120h], ebx
        mov ecx, edi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 2E E9 F8 FF: call 0x10047600
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe9
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
