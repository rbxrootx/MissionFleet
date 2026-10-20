// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007F040 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_1007f040_1007F040() {
    __asm {
        push -1
        push 1016fd68h
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
        mov dword ptr [edi], 10175d9ch
        mov ecx, dword ptr [edi + 60h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 09: je 0x1007f07a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 60h], ebp
        push ebx
        push esi
        lea esi, [edi + 64h]
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1007f092
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
        ; Exact mapped bytes 75 EC: jne 0x1007f084
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [edi + 6ch]
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x1007f0ae
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
        ; Exact mapped bytes 75 EC: jne 0x1007f0a0
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [edi + 74h]
        pop esi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 09: je 0x1007f0c6
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 74h], ebp
        mov ecx, dword ptr [edi + 78h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x1007f0d6
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 78h], ebp
        mov ecx, edi
        mov dword ptr [esp + 14h], 0ffffffffh
        ; Exact mapped bytes E8 BB 3D 08 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x00
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
