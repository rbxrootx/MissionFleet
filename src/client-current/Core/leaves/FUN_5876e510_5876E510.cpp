// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876E510 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_5876e510_5876E510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        xor eax, eax
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes EB 0C: jmp 0x5876e52d
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes 66 8B 4D FC: mov cx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 83 C1 01: add cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp edx, dword ptr [eax + 1284h]
        ; Exact mapped bytes 0F 8D 87 00 00 00: jge 0x5876e5c7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx*4 + 17ch], 0
        ; Exact mapped bytes 74 71: je 0x5876e5c2
        __asm _emit 0x74
        __asm _emit 0x71
        movzx eax, word ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4 + 17ch]
        mov dword ptr [ebp - 0ch], edx
        movzx eax, word ptr [ebp - 4]
        imul ecx, eax, 120h
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 1b78h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 5eb8h]
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [eax + edx*8 + 4]
        movzx edx, word ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        sub ecx, dword ptr [eax + edx*4 + 1af8h]
        push ecx
        movzx ecx, word ptr [ebp - 4]
        imul edx, ecx, 120h
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx + 1b78h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 5eb8h]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + eax*8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5F 70 04 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 5A FF FF FF: jmp 0x5876e521
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0xff
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
