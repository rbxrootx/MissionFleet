// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849C770 .. +0xDC bytes.
extern "C" __declspec(naked) void FUN_5849c770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x5849c846
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x5849c846
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        cdq
        idiv dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + 0ch]
        cdq
        idiv ecx
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax]
        add eax, dword ptr [ecx + edx]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        cdq
        idiv dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + 0ch]
        cdq
        idiv ecx
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov eax, dword ptr [eax + 4]
        add eax, dword ptr [ecx + edx + 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 14h]
        cdq
        idiv dword ptr [ecx + 8]
        mov edx, dword ptr [ebp - 4]
        movzx ecx, word ptr [edx + 0ch]
        cdq
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EB DF 31 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xdf
        __asm _emit 0x31
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret 18h
    }
}
