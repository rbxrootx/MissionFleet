// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864A7A0 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_5864a7a0_5864A7A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax + 309h]
        cmp ecx, 5
        ; Exact mapped bytes 0F 85 60 01 00 00: jne 0x5864a91c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5864a7ce
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x5864a883
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864a7ec
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 23: jge 0x5864a815
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 150h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CE B6 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xb6
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5864a7e3
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 14h], eax
        imul ecx, dword ptr [ebp - 4], 54h
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 67 B8 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xb8
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 0F BF 0D 38 05 96 58: movsx ecx, word ptr [0x58960538]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        cmp ecx, 6
        ; Exact mapped bytes 75 1D: jne 0x5864a863
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 1b0h]
        mov dword ptr [ebp - 18h], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E0 4F E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x4f
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1B: jmp 0x5864a87e
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + edx*4 + 1b0h]
        mov dword ptr [ebp - 1ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 C3 4F E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x4f
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 42 FF FF FF: jmp 0x5864a7c5
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 09: jmp 0x5864a894
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 5
        ; Exact mapped bytes 74 78: je 0x5864a912
        __asm _emit 0x74
        __asm _emit 0x78
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5864a8ac
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 23: jge 0x5864a8d5
        __asm _emit 0x7d
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx*8 + 150h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 20h], eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0E B6 E3 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xb6
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB CE: jmp 0x5864a8a3
        __asm _emit 0xeb
        __asm _emit 0xce
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 17ch]
        mov dword ptr [ebp - 24h], eax
        push 588af2d2h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AE B7 E3 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xb7
        __asm _emit 0xe3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx*4 + 1b0h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 34 4F E5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x4f
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x5864a88b
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov byte ptr [ecx + 309h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
