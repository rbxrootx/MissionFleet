// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BB230 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_584bb230_584BB230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 32 CE FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584bb260
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 30h]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 41 FF FF FF: call 0x584bb1a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 4
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 1B CF FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xcf
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 52 C7 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 43: je 0x584bb2c8
        __asm _emit 0x74
        __asm _emit 0x43
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B3 C7 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 32: jne 0x584bb2c6
        __asm _emit 0x75
        __asm _emit 0x32
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 A4 C7 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 22: jne 0x584bb2c6
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        add edx, 4
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8D 0F 00 00: call 0x584bc250
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 02: jmp 0x584bb2c8
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 89: jmp 0x584bb251
        __asm _emit 0xeb
        __asm _emit 0x89
        mov eax, dword ptr [ebp - 4]
        add eax, 10h
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A3 CD FC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xcd
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584bb2ef
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 3ch]
        push edx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 82 FE FF FF: call 0x584bb170
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 10h
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8C CE FC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xce
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 C3 C6 FC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 43: je 0x584bb357
        __asm _emit 0x74
        __asm _emit 0x43
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 24 C7 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 32: jne 0x584bb355
        __asm _emit 0x75
        __asm _emit 0x32
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 15 C7 FC FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xc7
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 22: jne 0x584bb355
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        add edx, 10h
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        lea edx, [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1E 0E 00 00: call 0x584bc170
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 02: jmp 0x584bb357
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 89: jmp 0x584bb2e0
        __asm _emit 0xeb
        __asm _emit 0x89
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
