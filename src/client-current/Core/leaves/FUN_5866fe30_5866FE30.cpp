// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866FE30 .. +0x122 bytes.
extern "C" __declspec(naked) void FUN_5866fe30_5866FE30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        movzx eax, byte ptr [ebp + 8]
        mov ecx, dword ptr [eax*4 + 589605ach]
        push ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 14 11 00: call 0x58781300
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x14
        __asm _emit 0x11
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5866fe65
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D D4 00 00 00: jge 0x5866ff43
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5866fe81
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 0F 8D B3 00 00 00: jge 0x5866ff3e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 D1 E1 FF: call 0x5848d060
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd1
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, ax
        cmp edx, 5
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x5866ff39
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5D FE E3 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xe3
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 7D: je 0x5866ff39
        __asm _emit 0x74
        __asm _emit 0x7d
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 62: jne 0x5866ff24
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 16 4B E1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4b
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        movzx eax, word ptr [eax + edx*2 + 0dah]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 5C D1 E1 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd1
        __asm _emit 0xe1
        __asm _emit 0xff
        movzx edx, word ptr [eax + 1eh]
        mov eax, dword ptr [ebp - 14h]
        sub eax, edx
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 7E 2C: jle 0x5866ff22
        __asm _emit 0x7e
        __asm _emit 0x2c
        imul eax, dword ptr [ebp - 14h], 0ah
        mov ecx, dword ptr [ebp - 18h]
        movzx ecx, word ptr [ecx + 1eh]
        cdq
        idiv ecx
        mov byte ptr [ebp - 1], al
        push 1
        movzx edx, byte ptr [ebp - 1]
        xor edx, 55h
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EF 45 0E 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x45
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 15: jmp 0x5866ff39
        __asm _emit 0xeb
        __asm _emit 0x15
        push 1
        push 55h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D8 45 0E 00: call 0x58754510
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x45
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3A FF FF FF: jmp 0x5866fe78
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 19 FF FF FF: jmp 0x5866fe5c
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E5 02 00 00: call 0x58670230
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
