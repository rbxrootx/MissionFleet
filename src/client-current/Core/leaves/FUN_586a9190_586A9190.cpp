// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586A9190 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_586a9190_586A9190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 0F B6 48 10: movzx cx, byte ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x48
        __asm _emit 0x10
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 42 12: mov ax, word ptr [edx + 0x12]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x12
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 18h], edx
        push 99h
        ; Exact mapped bytes 8B 0D 80 07 96 58: mov ecx, dword ptr [0x58960780]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 B9 DD FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 58 CD DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xcd
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes 66 0F B6 45 FC: movzx ax, byte ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x45
        __asm _emit 0xfc
        movzx ecx, ax
        push ecx
        movzx edx, byte ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 09 B2 E3 FF: call 0x584e4400
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xb2
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 97 CE DD FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xce
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 6ch]
        mov dword ptr [ebp - 24h], edx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 14 CD DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xcd
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 01 CD DD FF: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xcd
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586a9242
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 8
        ; Exact mapped bytes 7D 71: jge 0x586a92b9
        __asm _emit 0x7d
        __asm _emit 0x71
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + eax*4 + 6dh]
        test edx, edx
        ; Exact mapped bytes 74 42: je 0x586a9299
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + eax*4 + 140h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 8]
        movzx edx, word ptr [ecx + eax*4 + 6eh]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 8]
        movzx edx, byte ptr [ecx + eax*4 + 6ch]
        push edx
        ; Exact mapped bytes E8 7C B1 E3 FF: call 0x584e4400
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xb1
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0A CE DD FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xce
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 1E: jmp 0x586a92b7
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + ecx*4 + 140h]
        mov dword ptr [ebp - 34h], eax
        push 588b0a66h
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 EA CD DD FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xcd
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 80: jmp 0x586a9239
        __asm _emit 0xeb
        __asm _emit 0x80
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
