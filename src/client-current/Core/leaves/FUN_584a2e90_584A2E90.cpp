// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2E90 .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_584a2e90_584A2E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 70ch], 0
        ; Exact mapped bytes 7F 08: jg 0x584a2eb4
        __asm _emit 0x7f
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x584a2fce
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 14h]
        cmp eax, 1
        ; Exact mapped bytes 74 08: je 0x584a2ecd
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x584a2fce
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 70ch]
        ; Exact mapped bytes 7E 0C: jle 0x584a2eed
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        push 0
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 04 A1 FE FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa1
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        mov dword ptr [ebp - 10h], edx
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ecx + eax + 40h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7E 1F: jle 0x584a2f47
        __asm _emit 0x7e
        __asm _emit 0x1f
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 10h]
        sub edx, dword ptr [ecx + eax + 40h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7F 08: jg 0x584a2f47
        __asm _emit 0x7f
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x584a2fce
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 7E: jle 0x584a2fcb
        __asm _emit 0x7e
        __asm _emit 0x7e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7D 73: jge 0x584a2fcb
        __asm _emit 0x7d
        __asm _emit 0x73
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 18h], 0
        ; Exact mapped bytes 75 65: jne 0x584a2fcb
        __asm _emit 0x75
        __asm _emit 0x65
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 5F: jle 0x584a2fcb
        __asm _emit 0x7e
        __asm _emit 0x5f
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 18h], edx
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A9 A0 FE FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, word ptr [eax + 0b0h]
        imul eax, dword ptr [ebp - 8]
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70ch]
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 70ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
