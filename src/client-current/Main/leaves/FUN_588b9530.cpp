// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B9530 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_588b9530() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [ebp + 0e4h]
        cmp dword ptr [ecx + 88h], 8
        lea ebx, [ebp + 0e4h]
        ; Exact mapped bytes 0F 8E 90 00 00 00: jle 0x588b95dd
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 0ch], 0
        push esi
        push edi
        ; Exact mapped bytes 74 2A: je 0x588b9580
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes E8 15 EC 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 59: jle 0x588b95b8
        __asm _emit 0x7e
        __asm _emit 0x59
        mov esi, ebx
        mov edi, 3
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 03 EC 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        dec eax
        push eax
        ; Exact mapped bytes E8 1A EC 04 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E8: jne 0x588b9566
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes EB 38: jmp 0x588b95b8
        __asm _emit 0xeb
        __asm _emit 0x38
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 E5 EB 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, -8
        cmp eax, esi
        ; Exact mapped bytes 7D 26: jge 0x588b95b8
        __asm _emit 0x7d
        __asm _emit 0x26
        mov esi, ebx
        mov edi, 3
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 C9 EB 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        inc eax
        push eax
        ; Exact mapped bytes E8 E0 EB 04 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E8: jne 0x588b95a0
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [ebx]
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 AB EB 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        imul eax, eax, 63h
        cdq
        add esi, -8
        idiv esi
        mov ecx, ebp
        add eax, 0dfh
        push eax
        ; Exact mapped bytes E8 D5 EE FF FF: call 0x588b84b0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov ecx, ebp
        ; Exact mapped bytes E8 BC C8 FF FF: call 0x588b5ea0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
