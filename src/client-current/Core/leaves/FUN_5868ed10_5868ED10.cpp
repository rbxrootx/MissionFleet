// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868ED10 .. +0x163 bytes.
extern "C" __declspec(naked) void FUN_5868ed10_5868ED10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 8], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 244h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 5f0h]
        xor ecx, 55h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 0F 8E 9D 00 00 00: jle 0x5868edde
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 244h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 5f0h]
        push eax
        imul ecx, dword ptr [ebp + 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 244h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 5f0h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5A ED EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xed
        __asm _emit 0xeb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        xor eax, 55h
        imul ecx, dword ptr [ebp + 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx + 244h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 5f0h], eax
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        xor eax, 55h
        push eax
        imul ecx, dword ptr [ebp + 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 244h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 5f0h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E3 EF EB FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xef
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 614h]
        sub edx, 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 614h], edx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 614h], 0
        ; Exact mapped bytes 75 62: jne 0x5868ee6d
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 148h], 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A 1F 00 00: call 0x58690d70
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0B BE F3 FF: call 0x585cac40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xbe
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 11ch]
        ; Exact mapped bytes 75 29: jne 0x5868ee6d
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 72ch]
        mov dword ptr [ebp - 10h], ecx
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 5C DF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x5c
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F4 7D DF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
