// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B95F0 .. +0xB9 bytes.
extern "C" __declspec(naked) void FUN_588b95f0() {
    __asm {
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr [ebp + 0f0h]
        cmp dword ptr [ecx + 88h], 8
        lea ebx, [ebp + 0f0h]
        ; Exact mapped bytes 0F 8E 90 00 00 00: jle 0x588b969d
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 0ch], 0
        push esi
        push edi
        ; Exact mapped bytes 74 2A: je 0x588b9640
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes E8 55 EB 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 59: jle 0x588b9678
        __asm _emit 0x7e
        __asm _emit 0x59
        mov esi, ebx
        mov edi, 3
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 43 EB 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        dec eax
        push eax
        ; Exact mapped bytes E8 5A EB 04 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E8: jne 0x588b9626
        __asm _emit 0x75
        __asm _emit 0xe8
        ; Exact mapped bytes EB 38: jmp 0x588b9678
        __asm _emit 0xeb
        __asm _emit 0x38
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 25 EB 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, -8
        cmp eax, esi
        ; Exact mapped bytes 7D 26: jge 0x588b9678
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
        ; Exact mapped bytes E8 09 EB 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        inc eax
        push eax
        ; Exact mapped bytes E8 20 EB 04 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        add esi, 4
        sub edi, 1
        ; Exact mapped bytes 75 E8: jne 0x588b9660
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [ebx]
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 EB EA 04 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xea
        __asm _emit 0x04
        __asm _emit 0x00
        imul eax, eax, 63h
        cdq
        add esi, -8
        idiv esi
        mov ecx, ebp
        add eax, 0dfh
        push eax
        ; Exact mapped bytes E8 05 EF FF FF: call 0x588b85a0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov ecx, ebp
        ; Exact mapped bytes E8 AC C9 FF FF: call 0x588b6050
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xc9
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
