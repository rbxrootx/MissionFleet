// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C96A0 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_587c96a0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, ecx
        test esi, esi
        ; Exact mapped bytes 7D 02: jge 0x587c96ae
        __asm _emit 0x7d
        __asm _emit 0x02
        xor esi, esi
        cmp byte ptr [esp + 10h], 1
        mov ecx, dword ptr [edi + 0e8h]
        ; Exact mapped bytes 75 1D: jne 0x587c96d8
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [ecx + 64h]
        cmp eax, esi
        ; Exact mapped bytes 7D 0C: jge 0x587c96ce
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, esi
        sub edx, eax
        push edx
        ; Exact mapped bytes E8 D4 DB 13 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xdb
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 10: jmp 0x587c96de
        __asm _emit 0xeb
        __asm _emit 0x10
        sub eax, esi
        push eax
        ; Exact mapped bytes E8 2A DC 13 00: call 0x58907300
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xdc
        __asm _emit 0x13
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x587c96de
        __asm _emit 0xeb
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 82 DC 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xdc
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov edx, dword ptr [eax + 28h]
        push esi
        mov ecx, edi
        mov dword ptr [edi + 60h], esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test al, al
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 41: jne 0x587c9735
        __asm _emit 0x75
        __asm _emit 0x41
        cmp dword ptr [eax + 160h], 2ch
        ; Exact mapped bytes 7E 25: jle 0x587c9722
        __asm _emit 0x7e
        __asm _emit 0x25
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 1C: je 0x587c9722
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [eax + 190h]
        mov ecx, dword ptr [edi + 0e8h]
        add eax, 0b00h
        pop edi
        mov dword ptr [ecx + 0f8h], eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0e8h]
        xor eax, eax
        pop edi
        mov dword ptr [ecx + 0f8h], eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [eax + 160h], 2dh
        ; Exact mapped bytes 7E 25: jle 0x587c9763
        __asm _emit 0x7e
        __asm _emit 0x25
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 1C: je 0x587c9763
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [eax + 190h]
        mov edx, dword ptr [edi + 0e8h]
        add eax, 0b40h
        pop edi
        mov dword ptr [edx + 0f8h], eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, dword ptr [edi + 0e8h]
        xor eax, eax
        pop edi
        mov dword ptr [edx + 0f8h], eax
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
