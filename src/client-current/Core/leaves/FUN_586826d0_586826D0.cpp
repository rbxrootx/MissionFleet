// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586826D0 .. +0x203 bytes.
extern "C" __declspec(naked) void FUN_586826d0_586826D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586826fd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 1ch]
        cmp edx, dword ptr [ecx + 0f0h]
        ; Exact mapped bytes 7D 20: jge 0x5868272b
        __asm _emit 0x7d
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 18h]
        lea edx, [ecx + eax*8 + 158h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [edx + eax]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB C9: jmp 0x586826f4
        __asm _emit 0xeb
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 908h], 1
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7D 42 E0 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x42
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F6 9C E0 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F 22 E0 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x22
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, 0ffh
        ; Exact mapped bytes 66 23 48 10: and cx, word ptr [eax + 0x10]
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0x48
        __asm _emit 0x10
        movzx edx, cx
        cmp dword ptr [ebp - 24h], edx
        ; Exact mapped bytes 7D 40: jge 0x586827a2
        __asm _emit 0x7d
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 18h]
        lea eax, [edx + ecx*8 + 158h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 18h]
        mov edx, dword ptr [edx + 0f4h]
        mov esi, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + ecx]
        cmp eax, dword ptr [esi + edx*4 + 8e8h]
        ; Exact mapped bytes 7D 0D: jge 0x586827a2
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + 908h], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x586827d0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [eax + 0f0h]
        ; Exact mapped bytes 7D 40: jge 0x5868281e
        __asm _emit 0x7d
        __asm _emit 0x40
        imul edx, dword ptr [ebp - 1ch], 0d4h
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + edx + 270h]
        sub ecx, 1
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 18h]
        lea ecx, [eax + edx*8 + 158h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 28h]
        mov eax, dword ptr [ebp + eax*4 - 14h]
        add eax, dword ptr [ecx + edx]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp + ecx*4 - 14h], eax
        ; Exact mapped bytes EB A9: jmp 0x586827c7
        __asm _emit 0xeb
        __asm _emit 0xa9
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 09: jmp 0x58682830
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 1ch]
        add edx, 1
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [eax + 0f0h]
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x586828c4
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp - 1ch], 0d4h
        mov eax, dword ptr [ebp - 18h]
        movzx ecx, word ptr [eax + edx + 270h]
        sub ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4 + 898h]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        lea ecx, [eax + edx*4 + 898h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5F B2 EC FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xb2
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + edx*4 + 898h]
        xor ecx, 55h
        mov edx, dword ptr [ebp - 20h]
        cmp dword ptr [ebp + edx*4 - 14h], ecx
        ; Exact mapped bytes 7C 13: jl 0x586828ae
        __asm _emit 0x7c
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ecx + eax*4 + 90ch], 1
        ; Exact mapped bytes EB 11: jmp 0x586828bf
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax + edx*4 + 90ch], 0
        ; Exact mapped bytes E9 63 FF FF FF: jmp 0x58682827
        __asm _emit 0xe9
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 81 E7 1A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xe7
        __asm _emit 0x1a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
