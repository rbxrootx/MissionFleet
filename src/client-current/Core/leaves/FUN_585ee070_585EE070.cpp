// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EE070 .. +0x1E7 bytes.
extern "C" __declspec(naked) void FUN_585ee070_585EE070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp + 14h]
        cdq
        mov ecx, 56h
        idiv ecx
        mov dword ptr [ebp - 28h], eax
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 28h]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10724h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10724h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10728h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10728h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 34h]
        cmp edx, dword ptr [ecx + 10724h]
        ; Exact mapped bytes 7C 16: jl 0x585ee0fb
        __asm _emit 0x7c
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 34h]
        sub ecx, dword ptr [eax + 10724h]
        mov edx, dword ptr [ebp + 0ch]
        sub edx, ecx
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 06: jmp 0x585ee101
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 30h]
        cmp eax, dword ptr [edx + 10728h]
        ; Exact mapped bytes 7C 16: jl 0x585ee12b
        __asm _emit 0x7c
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 30h]
        sub edx, dword ptr [ecx + 10728h]
        mov eax, dword ptr [ebp + 0ch]
        sub eax, edx
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 06: jmp 0x585ee131
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 28h]
        imul ecx, dword ptr [eax + 10724h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10720h]
        add eax, ecx
        add eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10724h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10724h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10728h]
        xor edx, 55555555h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10728h], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585ee19d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes 0F 8D A8 00 00 00: jge 0x585ee251
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        add ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 78 55: js 0x585ee206
        __asm _emit 0x78
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x585ee1cf
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 7D 2F: jge 0x585ee206
        __asm _emit 0x7d
        __asm _emit 0x2f
        mov eax, dword ptr [ebp - 2ch]
        add eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 78 13: js 0x585ee1f2
        __asm _emit 0x78
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax]
        or ecx, edx
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB C0: jmp 0x585ee1c6
        __asm _emit 0xeb
        __asm _emit 0xc0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10724h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10724h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [edx + 10724h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10724h]
        xor eax, 55555555h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10724h], eax
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x585ee194
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
