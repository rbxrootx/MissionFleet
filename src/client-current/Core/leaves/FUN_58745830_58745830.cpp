// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58745830 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_58745830_58745830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5874584b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A A4 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xa4
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 F1 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf1
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E9 0A: shr cx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x58745910
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58745895
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 7D 70: jge 0x5874590b
        __asm _emit 0x7d
        __asm _emit 0x70
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA A3 D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xa3
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 57 A4 D6 FF: call 0x584afd10
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa4
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 47: je 0x58745909
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, byte ptr [eax]
        cmp ecx, 0bh
        ; Exact mapped bytes 75 3C: jne 0x58745909
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 88 9A 00 00 00: mov cx, word ptr [eax + 0x9a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 0F: and cx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x0f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 75 1C: jne 0x58745909
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 FE 18 D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x18
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 2eh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 6B 34 D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x34
        __asm _emit 0xd9
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 0C: jmp 0x58745915
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes EB 81: jmp 0x5874588c
        __asm _emit 0xeb
        __asm _emit 0x81
        ; Exact mapped bytes E9 32 FF FF FF: jmp 0x58745842
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
