// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868D680 .. +0x427 bytes.
extern "C" __declspec(naked) void FUN_5868d680_5868D680() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 654h]
        mov ecx, 4
        shl ecx, 0
        mov eax, dword ptr [eax + ecx]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cmp eax, 6
        ; Exact mapped bytes 0F 8E E9 03 00 00: jle 0x5868daa2
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 148h], 1
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 11ch], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 5e0h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 11ch], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 244h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 5e0h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 03 EC FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 11ch], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 5e0h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        xor edx, 55h
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 15ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 11ch], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 708h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EC D9 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 11ch], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + edx + 244h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4 + 5e0h], eax
        mov edx, dword ptr [ebp - 8]
        xor edx, 55h
        push edx
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 11ch], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 244h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 5e0h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF 05 EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 0fch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + ecx + 110h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 120h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 15ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 15ch]
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx], 0
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 120h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 18 05 EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 184h]
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 184h]
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [edx + ecx]
        xor edx, 0a0e6b2d0h
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 11ch]
        mov esi, dword ptr [ebp - 4]
        lea eax, [esi + eax*8 + 184h]
        mov dword ptr [eax + ecx], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 184h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        xor eax, 0a0e6b2d0h
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 11ch]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 184h]
        mov dword ptr [edx + ecx], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 654h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 654h]
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 6c0h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6D 1E E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x1e
        __asm _emit 0xe1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 6ach]
        ; Exact mapped bytes E8 45 73 EA FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x73
        __asm _emit 0xea
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 614h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 11ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 67ch]
        mov dword ptr [ebp - 14h], eax
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6E 85 DF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 11ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 698h], 0
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 11ch], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 25ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax*4 + 134h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 704h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 11ch]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 15ch]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [edx + eax]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F9 D6 12 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xd6
        __asm _emit 0x12
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 32 00 00: call 0x58690d70
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
