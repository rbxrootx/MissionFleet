// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878F880 .. +0x1AC bytes.
extern "C" __declspec(naked) void FUN_5878f880_5878F880() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 4
        ; Exact mapped bytes 74 17: je 0x5878f8b7
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 75 05: jne 0x5878f8bc
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 6A 01 00 00: jmp 0x5878fa26
        __asm _emit 0xe9
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 B9 12 00 00: call 0x58790b80
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 7ch]
        ; Exact mapped bytes E8 AE 12 00 00: call 0x58790b80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 78h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 36 11 00 00: call 0x58790a20
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 1E 11 00 00: call 0x58790a20
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        movzx eax, byte ptr [edx + 3]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        movzx edx, byte ptr [ecx + 2]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 24 41 00 00: call 0x58793a50
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5878f93f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        movzx ecx, word ptr [ebp + 0ch]
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 7D 55: jge 0x5878f99d
        __asm _emit 0x7d
        __asm _emit 0x55
        imul edx, dword ptr [ebp - 8], 38h
        add edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [edx]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 03 35 00 00: call 0x58792e70
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0F: je 0x5878f985
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BE 82 FF FF: call 0x58787c40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B1: jmp 0x5878f936
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 26 30 00 00: call 0x587929c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 99: jmp 0x5878f936
        __asm _emit 0xeb
        __asm _emit 0x99
        mov eax, dword ptr [ebp + 10h]
        movzx ecx, word ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 64 0D 00 00: call 0x58790710
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C7 0C 00 00: call 0x58790680
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        movzx ecx, word ptr [eax]
        lea edx, [ecx + ecx - 1]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp + 10h]
        movzx eax, word ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CF 22 00 00: call 0x58791cb0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 2ch]
        shl eax, 4
        add eax, dword ptr [ebp + 14h]
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        movzx ecx, word ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        movzx eax, word ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 6B 24 00 00: call 0x58791e90
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
