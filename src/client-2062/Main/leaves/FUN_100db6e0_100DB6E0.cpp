// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DB6E0 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_100db6e0_100DB6E0() {
    __asm {
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [ebp + 0ech]
        push esi
        push edi
        lea edi, [ebp + 0ech]
        mov esi, dword ptr [ecx + 88h]
        cmp esi, 8
        ; Exact mapped bytes 0F 8E 85 00 00 00: jle 0x100db785
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 10h]
        push ebx
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x100db731
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes E8 32 87 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 48: jle 0x100db75a
        __asm _emit 0x7e
        __asm _emit 0x48
        mov esi, edi
        mov ebx, 3
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 20 87 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        dec eax
        push eax
        ; Exact mapped bytes E8 37 87 02 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 EA: jne 0x100db719
        __asm _emit 0x75
        __asm _emit 0xea
        ; Exact mapped bytes EB 29: jmp 0x100db75a
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes E8 0A 87 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        add esi, -8
        cmp eax, esi
        ; Exact mapped bytes 7D 1D: jge 0x100db75a
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov esi, edi
        mov ebx, 3
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 F5 86 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x86
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        inc eax
        push eax
        ; Exact mapped bytes E8 0C 87 02 00: call 0x10103e60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x87
        __asm _emit 0x02
        __asm _emit 0x00
        add esi, 4
        dec ebx
        ; Exact mapped bytes 75 EA: jne 0x100db744
        __asm _emit 0x75
        __asm _emit 0xea
        mov ecx, dword ptr [edi]
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 D9 86 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x86
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
        ; Exact mapped bytes E8 0C 01 00 00: call 0x100db890
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        mov ecx, ebp
        ; Exact mapped bytes E8 04 06 00 00: call 0x100dbd90
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x06
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
