// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58683C80 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_58683c80_58683C80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 8], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 270h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 8a4h]
        xor ecx, 55h
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 0F 8E B0 00 00 00: jle 0x58683d61
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 270h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 8a4h]
        push eax
        imul ecx, dword ptr [ebp + 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + ecx + 270h]
        mov ecx, dword ptr [ebp - 4]
        lea edx, [ecx + eax*4 + 8a4h]
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 9D EC FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x9d
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        xor eax, 55h
        imul ecx, dword ptr [ebp + 8], 0d4h
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + ecx + 270h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 8a4h], eax
        imul eax, dword ptr [ebp + 8], 0d4h
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + eax + 270h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 8a4h]
        push ecx
        imul edx, dword ptr [ebp + 8], 0d4h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + edx + 270h]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*4 + 8a4h]
        push eax
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 60 A0 EC FF: call 0x5854ddc0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa0
        __asm _emit 0xec
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 8c8h]
        sub eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 8c8h], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 8c8h], 0
        ; Exact mapped bytes 75 62: jne 0x58683df0
        __asm _emit 0x75
        __asm _emit 0x62
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 138h], 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 47 0F 00 00: call 0x58684cf0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 6E F4 FF: call 0x585cac40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6e
        __asm _emit 0xf4
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 0f4h]
        ; Exact mapped bytes 75 29: jne 0x58683df0
        __asm _emit 0x75
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0a7ch]
        mov dword ptr [ebp - 10h], edx
        push 17h
        ; Exact mapped bytes 8B 0D 7C 07 96 58: mov ecx, dword ptr [0x5896077c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 0C E0 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x0c
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 71 2E E0 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x2e
        __asm _emit 0xe0
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
