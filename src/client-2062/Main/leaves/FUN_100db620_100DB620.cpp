// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DB620 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_100db620_100DB620() {
    __asm {
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [ebp + 0e0h]
        push esi
        push edi
        lea edi, [ebp + 0e0h]
        mov esi, dword ptr [ecx + 88h]
        cmp esi, 8
        ; Exact mapped bytes 0F 8E 85 00 00 00: jle 0x100db6c5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        push ebx
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x100db671
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes E8 F2 87 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 48: jle 0x100db69a
        __asm _emit 0x7e
        __asm _emit 0x48
        mov esi, edi
        mov ebx, 3
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 E0 87 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        dec eax
        push eax
        ; Exact mapped bytes E8 F7 87 02 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 EA: jne 0x100db659
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes EB 29: jmp 0x100db69a
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes E8 CA 87 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        add esi, -8
        cmp eax, esi
        ; Exact mapped bytes 7D 1D: jge 0x100db69a
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov esi, edi
        mov ebx, 3
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 B5 87 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        inc eax
        push eax
        ; Exact mapped bytes E8 CC 87 02 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 EA: jne 0x100db684
        __asm _emit 0x75
        __asm _emit 0xea
        mov ecx, dword ptr [edi]
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 99 87 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        add esi, -8
        shl ecx, 5
        add ecx, eax
        lea eax, [ecx + ecx*2]
        mov ecx, ebp
        cdq
        idiv esi
        add eax, 0dfh
        push eax
        ; Exact mapped bytes E8 DC 00 00 00: call 0x100db7a0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        mov ecx, ebp
        ; Exact mapped bytes E8 74 05 00 00: call 0x100dbc40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
