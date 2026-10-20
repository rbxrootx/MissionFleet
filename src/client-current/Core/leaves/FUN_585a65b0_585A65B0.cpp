// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585A65B0 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_585a65b0_585A65B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, word ptr [eax + 64h]
        cmp ecx, 0a9h
        ; Exact mapped bytes 75 08: jne 0x585a65d0
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x585a6695
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585a65e2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        movzx eax, word ptr [ebp + 8]
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x585a6692
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp - 8], 14h
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 64h]
        push eax
        ; Exact mapped bytes 8B 0D 24 06 96 58: mov ecx, dword ptr [0x58960624]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0D 7A F6 FF: call 0x5850e020
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x7a
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 24 06 96 58: mov ecx, dword ptr [0x58960624]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 75 F6 FF: call 0x5850db40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x75
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx]
        cmp edx, 1
        ; Exact mapped bytes 74 2C: je 0x585a6658
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        cmp ecx, 5
        ; Exact mapped bytes 74 21: je 0x585a6658
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx]
        cmp eax, 3
        ; Exact mapped bytes 74 16: je 0x585a6658
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx]
        cmp edx, 2
        ; Exact mapped bytes 74 0B: je 0x585a6658
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax]
        cmp ecx, 6
        ; Exact mapped bytes 75 35: jne 0x585a668d
        __asm _emit 0x75
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 3B 15 30 05 96 58: cmp edx, dword ptr [0x58960530]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 2A: jne 0x585a668d
        __asm _emit 0x75
        __asm _emit 0x2a
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 76 24: jbe 0x585a668d
        __asm _emit 0x76
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 8]
        imul eax, dword ptr [ecx + 10h]
        xor edx, edx
        mov ecx, 64h
        div ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        sub ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes E9 47 FF FF FF: jmp 0x585a65d9
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
