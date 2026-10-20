// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F30A0 .. +0x173 bytes.
extern "C" __declspec(naked) void FUN_585f30a0_585F30A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 80h], ecx
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 204h]
        cmp eax, 8
        ; Exact mapped bytes 74 13: je 0x585f30d7
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 204h]
        cmp edx, 9
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x585f31a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 118h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov eax, dword ptr [edx + eax*8]
        sub eax, 96h
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3A C7 EA FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xc7
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + ecx*8 + 4]
        sub ecx, 12ch
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 49 6C EC FF: call 0x584b9d80
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6c
        __asm _emit 0xec
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov eax, dword ptr [edx + eax*8]
        sub eax, 96h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f8h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0dch]
        mov eax, dword ptr [edx + eax*8 + 4]
        sub eax, 12ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0fch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov dword ptr [edx + 84h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 68h], 0
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BB 17 FF FF: call 0x585e4960
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 65: jmp 0x585f320d
        __asm _emit 0xeb
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + ecx*8]
        sub ecx, 96h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f8h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0dch]
        mov ecx, dword ptr [eax + ecx*8 + 4]
        sub ecx, 12ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0fch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov dword ptr [eax + 84h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 64h], 40000000h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
