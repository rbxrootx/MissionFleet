// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C3D30 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_100c3d30_100C3D30() {
    __asm {
        push -1
        push 101725e8h
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
        mov dword ptr [edi], 101762d0h
        mov ecx, dword ptr [edi + 60h]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr [esp + 14h], ebp
        ; Exact mapped bytes 74 09: je 0x100c3d6a
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 60h], ebp
        mov ecx, dword ptr [edi + 64h]
        cmp ecx, ebp
        ; Exact mapped bytes 74 09: je 0x100c3d7a
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [edi + 64h], ebp
        push ebx
        push esi
        lea esi, [edi + 68h]
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100c3d92
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
        ; Exact mapped bytes 75 EC: jne 0x100c3d84
        __asm _emit 0x75
        __asm _emit 0xec
        lea esi, [edi + 70h]
        mov ebx, 2
        mov ecx, dword ptr [esi]
        cmp ecx, ebp
        ; Exact mapped bytes 74 08: je 0x100c3dae
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
        ; Exact mapped bytes 75 EC: jne 0x100c3da0
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [edi + 78h]
        pop esi
        cmp ecx, ebp
        pop ebx
        ; Exact mapped bytes 74 09: je 0x100c3dc6
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
        ; Exact mapped bytes E8 CB F0 03 00: call 0x10102ea0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf0
        __asm _emit 0x03
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
