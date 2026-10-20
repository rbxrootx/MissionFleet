// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E2ED0 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_100e2ed0_100E2ED0() {
    __asm {
        push -1
        push 10173b88h
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
        mov dword ptr [edi], 10176554h
        xor ebp, ebp
        lea esi, [edi + 0e4h]
        mov dword ptr [esp + 1ch], ebp
        mov ebx, 4
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100e2f15
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
        ; Exact mapped bytes 75 EC: jne 0x100e2f07
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [edi + 0cch]
        mov ebx, 4
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100e2f34
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
        ; Exact mapped bytes 75 EC: jne 0x100e2f26
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [edi + 0bch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100e2f50
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 0bch], ebp
        mov ecx, dword ptr [edi + 0c0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100e2f66
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 0c0h], ebp
        mov ecx, dword ptr [edi + 0c4h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100e2f7c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 0c4h], ebp
        mov ecx, dword ptr [edi + 0c8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100e2f92
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 0c8h], ebp
        mov ecx, dword ptr [edi + 0dch]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100e2fa8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 0dch], ebp
        mov ecx, dword ptr [edi + 0e0h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100e2fbe
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 0e0h], ebp
        mov ecx, dword ptr [edi + 0b8h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 0C: je 0x100e2fd4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 0b8h], ebp
        mov ecx, edi
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes E8 AD BB 01 00: call 0x100feb90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbb
        __asm _emit 0x01
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
