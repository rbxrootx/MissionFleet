// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E5940 .. +0x2AD bytes.
extern "C" __declspec(naked) void FUN_586e5940_586E5940() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 09: jne 0x586e5959
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0c8h
        ; Exact mapped bytes EB 06: jmp 0x586e595f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 09: jne 0x586e5974
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 64h
        ; Exact mapped bytes EB 06: jmp 0x586e597a
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp + 8]
        xor edx, edx
        div dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 570h], eax
        mov eax, dword ptr [ebp + 0ch]
        xor edx, edx
        div dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 574h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 570h]
        mov edx, dword ptr [eax + 574h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 578h], ecx
        mov dword ptr [eax + 57ch], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 598h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 59ch], ecx
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4d8h], eax
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4dch], eax
        mov edx, dword ptr [ebp + 8]
        imul edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0d4h], edx
        push 400h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0d8h
        push ecx
        ; Exact mapped bytes E8 F0 73 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x73
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4e0h], 0
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 578h]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 400h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 578h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], eax
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 57ch]
        cdq
        sub eax, edx
        sar eax, 1
        add eax, 300h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 57ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 64h], eax
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0ach], 0
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 0b0h], 0
        mov eax, 8
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 0ach]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 60h]
        mov edx, 8
        shl edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 0ach], eax
        mov edx, 8
        imul eax, edx, 0
        mov ecx, 8
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [esi + eax + 0b0h]
        mov dword ptr [edx + ecx + 0b0h], eax
        mov ecx, 8
        shl ecx, 0
        mov edx, 8
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + ecx + 0ach]
        mov dword ptr [eax + edx + 0ach], ecx
        mov edx, 8
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0b0h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 64h]
        mov eax, 8
        shl eax, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax + 0b0h], ecx
        mov eax, 8
        imul ecx, eax, 0
        mov edx, 8
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + ecx + 0ach]
        mov dword ptr [edx + eax + 0ach], ecx
        mov edx, 8
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0b0h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 64h]
        mov ecx, 8
        imul eax, ecx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 0b0h], edx
        mov edx, 8
        imul eax, edx, 0
        mov ecx, 8
        shl ecx, 2
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [esi + eax + 0ach]
        mov dword ptr [edx + ecx + 0ach], eax
        mov ecx, 8
        imul edx, ecx, 0
        mov eax, 8
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx + 0b0h]
        mov dword ptr [ecx + eax + 0b0h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 70h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6ch], 8
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
