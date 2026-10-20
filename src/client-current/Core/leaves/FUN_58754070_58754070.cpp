// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58754070 .. +0x265 bytes.
extern "C" __declspec(naked) void FUN_58754070_58754070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5875408b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1f4h]
        shr edx, 1
        and edx, 1fh
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 0F 84 2D 02 00 00: je 0x587542cf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 4], 18h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 2c4h]
        movzx eax, byte ptr [edx + eax + 0eh]
        movzx ecx, byte ptr [ebp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 0A 02 00 00: jne 0x587542ca
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2c4h]
        add ecx, edx
        mov edx, 1
        imul eax, edx, 0
        movzx ecx, byte ptr [ecx + eax + 0ch]
        xor ecx, 55555555h
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 2c4h]
        movzx edx, byte ptr [eax + edx + 0eh]
        mov eax, dword ptr [ebp - 8]
        lea edx, [eax + edx*4 + 0c6ch]
        mov eax, 2
        imul eax, eax, 0
        ; Exact mapped bytes 66 89 0C 02: mov word ptr [edx + eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x02
        imul ecx, dword ptr [ebp - 4], 18h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2c4h]
        add eax, ecx
        mov ecx, 1
        shl ecx, 0
        movzx edx, byte ptr [eax + ecx + 0ch]
        xor edx, 55555555h
        imul eax, dword ptr [ebp - 4], 18h
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 2c4h]
        movzx eax, byte ptr [ecx + eax + 0eh]
        mov ecx, dword ptr [ebp - 8]
        lea eax, [ecx + eax*4 + 0c6ch]
        mov ecx, 2
        shl ecx, 0
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 6A 01 00 00: je 0x587542c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2c4h]
        mov edx, dword ptr [ecx + edx]
        push edx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 96 27 DA FF: call 0x584f6910
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x27
        __asm _emit 0xda
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 41 01 00 00: je 0x587542c8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E 18 D4 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x18
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        imul eax, dword ptr [ebp - 4], 18h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 2c4h]
        add edx, eax
        mov eax, 1
        imul ecx, eax, 0
        movzx edx, byte ptr [edx + ecx + 0ch]
        xor edx, 55h
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 98h]
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 69 0F F3 FF: call 0x58685140
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x0f
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE 17 D4 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x17
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        imul ecx, dword ptr [ebp - 4], 18h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2c4h]
        add eax, ecx
        mov ecx, 1
        shl ecx, 0
        movzx edx, byte ptr [eax + ecx + 0ch]
        xor edx, 55h
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 0ch]
        movzx ecx, word ptr [eax + 98h]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 09 1C F3 FF: call 0x58685e30
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x1c
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BE 17 D4 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x17
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        imul ecx, dword ptr [ebp - 4], 18h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2c4h]
        add eax, ecx
        mov ecx, 1
        imul edx, ecx, 0
        movzx eax, byte ptr [eax + edx + 0ch]
        xor eax, 55h
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 98h]
        sub edx, 1
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 19 D0 F3 FF: call 0x58691290
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xd0
        __asm _emit 0xf3
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 17 D4 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x17
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        imul edx, dword ptr [ebp - 4], 18h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 2c4h]
        add ecx, edx
        mov edx, 1
        shl edx, 0
        movzx eax, byte ptr [ecx + edx + 0ch]
        xor eax, 55h
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 98h]
        sub edx, 1
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 09 DC F3 FF: call 0x58691ed0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xdc
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 05: jmp 0x587542cf
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 B3 FD FF FF: jmp 0x58754082
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
