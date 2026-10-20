// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C2B10 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_586c2b10_586C2B10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 98h
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 50 55 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x55
        __asm _emit 0xdc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586c2b41
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 02 5B FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x5b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        add eax, 98h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 38 56 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x56
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 6F 4E DC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x586c2c6e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 BC 4E DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 2]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        movzx ecx, word ptr [edx + 2]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x586c2c69
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 24ch]
        ; Exact mapped bytes E8 18 2C DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x2c
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x586c2c67
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 88 4E DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, word ptr [eax + 8]
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7E 0F: jle 0x586c2bc0
        __asm _emit 0x7e
        __asm _emit 0x0f
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 77 4E DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 8]
        mov dword ptr [ebp + 8], ecx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 68 4E DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx edx, word ptr [eax + 8]
        test edx, edx
        ; Exact mapped bytes 7E 1D: jle 0x586c2bed
        __asm _emit 0x7e
        __asm _emit 0x1d
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 58 4E DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0xff
        add eax, 8
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax]
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 89 0A: mov word ptr [edx], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 24ch]
        ; Exact mapped bytes E8 A9 2B DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x2b
        __asm _emit 0xdd
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 77 85 0F 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x85
        __asm _emit 0x0f
        __asm _emit 0x00
        nop
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 0E 4E DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x4e
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 8]
        test ecx, ecx
        ; Exact mapped bytes 7F 34: jg 0x586c2c5e
        __asm _emit 0x7f
        __asm _emit 0x34
        mov edx, dword ptr [ebp - 4]
        add edx, 98h
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E4 5F 00 00: call 0x586c8c30
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 6ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 23 59 00 00: call 0x586c8580
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BA 2D 00 00: call 0x586c5a20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x586c2c6e
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 C5 FE FF FF: jmp 0x586c2b33
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
