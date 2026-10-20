// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58681EA0 .. +0x444 bytes.
extern "C" __declspec(naked) void FUN_58681ea0_58681EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 92ch]
        mov ecx, 4
        shl ecx, 0
        mov eax, dword ptr [eax + ecx]
        cdq
        mov ecx, 3e8h
        idiv ecx
        cmp eax, 6
        ; Exact mapped bytes 0F 8E 06 04 00 00: jle 0x586822df
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x06
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 138h], 1
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0f4h], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 270h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 894h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0f4h], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 270h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 894h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9F BB EC FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xbb
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0f4h], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 270h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 894h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        xor edx, 55h
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 158h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + edx]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0f4h], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 270h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0a4ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CC 91 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x91
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        xor eax, 55h
        mov ecx, dword ptr [ebp - 4]
        imul edx, dword ptr [ecx + 0f4h], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + edx + 270h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4 + 894h], eax
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0f4h], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 270h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 894h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 0f4h], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 270h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4 + 894h]
        push ecx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 83 BD EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0a8h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + eax + 0c8h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0f8h], 0
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 0f8h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 20 BD EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xbd
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 158h]
        mov ecx, 4
        imul edx, ecx, 0
        mov dword ptr [eax + edx], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 158h]
        mov ecx, 4
        shl ecx, 0
        mov dword ptr [eax + ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 198h]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 198h]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        xor ecx, 3a9e2b0dh
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea edx, [esi + edx*8 + 198h]
        mov dword ptr [edx + eax], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 198h]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [eax + ecx]
        xor edx, 3a9e2b0dh
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f4h]
        mov esi, dword ptr [ebp - 4]
        lea ecx, [esi + ecx*8 + 198h]
        mov dword ptr [ecx + eax], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 92ch]
        mov eax, 4
        imul ecx, eax, 0
        mov dword ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*8 + 92ch]
        mov eax, 4
        shl eax, 0
        mov dword ptr [edx + eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 9e0h]
        mov dword ptr [ebp - 10h], ecx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 D6 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd6
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 9c0h]
        ; Exact mapped bytes E8 08 2B EB FF: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x2b
        __asm _emit 0xeb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 8c8h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 978h]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 3D E0 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 9a0h], 0
        mov eax, dword ptr [ebp - 4]
        imul ecx, dword ptr [eax + 0f4h], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 288h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx*4 + 118h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a48h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0f4h]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 158h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BC 8E 13 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x8e
        __asm _emit 0x13
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 12 2A 00 00: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
