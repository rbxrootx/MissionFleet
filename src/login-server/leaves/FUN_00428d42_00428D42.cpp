// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00428D42 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_00428d42_00428D42() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        push esi
        ; Exact mapped bytes E8 D0 EA FF FF: call 0x42781e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, -1
        pop ecx
        ; Exact mapped bytes 74 3C: je 0x428d90
        __asm _emit 0x74
        __asm _emit 0x3c
        cmp esi, 1
        ; Exact mapped bytes 74 05: je 0x428d5e
        __asm _emit 0x74
        __asm _emit 0x05
        cmp esi, 2
        ; Exact mapped bytes 75 16: jne 0x428d74
        __asm _emit 0x75
        __asm _emit 0x16
        push 2
        ; Exact mapped bytes E8 B9 EA FF FF: call 0x42781e
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        mov edi, eax
        ; Exact mapped bytes E8 B0 EA FF FF: call 0x42781e
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        cmp eax, edi
        pop ecx
        ; Exact mapped bytes 74 1C: je 0x428d90
        __asm _emit 0x74
        __asm _emit 0x1c
        push esi
        ; Exact mapped bytes E8 A4 EA FF FF: call 0x42781e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 58 C2 43 00: call dword ptr [0x43c258]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x428d90
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes EB 02: jmp 0x428d92
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push esi
        ; Exact mapped bytes E8 07 EA FF FF: call 0x42779f
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        and esi, 1fh
        sar eax, 5
        pop ecx
        mov eax, dword ptr [eax*4 + 451080h]
        lea ecx, [esi + esi*8]
        and byte ptr [eax + ecx*4 + 4], 0
        test edi, edi
        ; Exact mapped bytes 74 0C: je 0x428dc0
        __asm _emit 0x74
        __asm _emit 0x0c
        push edi
        ; Exact mapped bytes E8 AD 8D FF FF: call 0x421b67
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x8d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x428dc2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        ret
    }
}
