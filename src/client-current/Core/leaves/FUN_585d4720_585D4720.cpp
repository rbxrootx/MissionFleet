// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D4720 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_585d4720_585D4720() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10724h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10724h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10728h]
        xor ecx, 55555555h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10728h], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10720h], 0
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x585d4826
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 10724h]
        ; Exact mapped bytes 0F 8D A2 00 00 00: jge 0x585d4826
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cdq
        mov ecx, 64h
        idiv ecx
        test eax, eax
        ; Exact mapped bytes 0F 8E 8F 00 00 00: jle 0x585d4826
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 56h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 10728h]
        ; Exact mapped bytes 7D 79: jge 0x585d4826
        __asm _emit 0x7d
        __asm _emit 0x79
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 56h
        idiv ecx
        test eax, eax
        ; Exact mapped bytes 7E 6A: jle 0x585d4826
        __asm _emit 0x7e
        __asm _emit 0x6a
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 56h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, eax
        imul ecx, dword ptr [edx + 10724h]
        mov eax, dword ptr [ebp + 8]
        cdq
        mov esi, 64h
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10724h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10724h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10728h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10728h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10720h]
        mov ecx, dword ptr [ebp - 8]
        movzx eax, byte ptr [eax + ecx]
        and eax, 1
        ; Exact mapped bytes EB 30: jmp 0x585d4856
        __asm _emit 0xeb
        __asm _emit 0x30
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10724h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10724h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10728h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10728h], eax
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
