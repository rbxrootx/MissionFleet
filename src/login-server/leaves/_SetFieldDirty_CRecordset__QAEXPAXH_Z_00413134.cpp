// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413134 .. +0x46 bytes.
extern "C" __declspec(naked) void _SetFieldDirty_CRecordset__QAEXPAXH_Z_00413134() {
    __asm {
        push ebx
        push esi
        push edi
        xor edi, edi
        cmp dword ptr [esp + 10h], edi
        mov ebx, ecx
        ; Exact mapped bytes 74 12: je 0x413153
        __asm _emit 0x74
        __asm _emit 0x12
        push dword ptr [esp + 10h]
        ; Exact mapped bytes E8 A5 1A 00 00: call 0x414bef
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        dec edi
        ; Exact mapped bytes 78 25: js 0x413174
        __asm _emit 0x78
        __asm _emit 0x25
        mov esi, edi
        ; Exact mapped bytes EB 06: jmp 0x413159
        __asm _emit 0xeb
        __asm _emit 0x06
        mov esi, dword ptr [ebx + 14h]
        dec esi
        ; Exact mapped bytes 78 1B: js 0x413174
        __asm _emit 0x78
        __asm _emit 0x1b
        cmp dword ptr [esp + 14h], 0
        push edi
        mov ecx, ebx
        ; Exact mapped bytes 74 07: je 0x41316a
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 89 1B 00 00: call 0x414cf1
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x41316f
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 94 1B 00 00: call 0x414d03
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        inc edi
        cmp edi, esi
        ; Exact mapped bytes 7E E5: jle 0x413159
        __asm _emit 0x7e
        __asm _emit 0xe5
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
