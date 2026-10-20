// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58523280 .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_58523280_58523280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 02 01 00 00: je 0x585233a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1E 25 F7 FF: call 0x584957d0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x25
        __asm _emit 0xf7
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x58523395
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CD 03 00 00: call 0x58523690
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        movzx edx, byte ptr [ebp + 0ch]
        cmp edx, 9
        ; Exact mapped bytes 74 68: je 0x58523337
        __asm _emit 0x74
        __asm _emit 0x68
        movzx eax, byte ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, 1
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 10h], 7
        ; Exact mapped bytes 77 50: ja 0x58523335
        __asm _emit 0x77
        __asm _emit 0x50
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 24 95 B0 33 52 58: jmp dword ptr [edx*4 + 0x585233b0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xb0
        __asm _emit 0x33
        __asm _emit 0x52
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 4]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 4], cl
        ; Exact mapped bytes EB 2E: jmp 0x58523335
        __asm _emit 0xeb
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 0eh]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 0eh], cl
        ; Exact mapped bytes EB 16: jmp 0x58523335
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 18h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 18h], cl
        ; Exact mapped bytes EB 34: jmp 0x5852336b
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 8], 10h
        ; Exact mapped bytes 73 18: jae 0x58523355
        __asm _emit 0x73
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 4]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 4], cl
        ; Exact mapped bytes EB 16: jmp 0x5852336b
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax - 2]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 8]
        mov byte ptr [edx - 2], cl
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F7 FC FF FF: call 0x58523070
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB FD FF FF: call 0x58523180
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 0B: jmp 0x585233a0
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 93 46 F6 FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x46
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 F4 FE FF FF: jmp 0x58523299
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
