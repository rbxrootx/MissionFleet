// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1005CCB0 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_1005ccb0_1005CCB0() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016f24eh
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 84h
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 8ch]
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x1005cce8
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [edi + 8ch], 0
        xor ecx, ecx
        push ebp
        ; Exact mapped bytes 66 8B 8F E8 0C 00 00: mov cx, word ptr [edi + 0xce8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8f
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, ecx
        mov ebp, 0ah
        shr esi, 4
        and esi, 0fh
        and ecx, 0fh
        mov eax, esi
        cdq
        idiv ebp
        mov eax, 66666667h
        push edx
        imul esi
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        push edx
        push ecx
        lea ecx, [esp + 1ch]
        push 101aac04h
        push ecx
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push 198h
        ; Exact mapped bytes E8 6A FA 10 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfa
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 18h
        mov dword ptr [esp + 0ch], eax
        pop esi
        mov dword ptr [esp + 94h], 0
        test eax, eax
        pop ebp
        ; Exact mapped bytes 74 10: je 0x1005cd5e
        __asm _emit 0x74
        __asm _emit 0x10
        lea edx, [esp + 8]
        push 0
        push edx
        mov ecx, eax
        ; Exact mapped bytes E8 64 2D 0A 00: call 0x100ffac0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x2d
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x1005cd60
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esp + 88h]
        mov dword ptr [edi + 8ch], eax
        pop edi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 90h
        ret
    }
}
