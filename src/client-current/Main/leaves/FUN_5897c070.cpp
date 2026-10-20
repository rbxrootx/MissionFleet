// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897C070 .. +0x1CA bytes.
extern "C" __declspec(naked) void FUN_5897c070() {
    __asm {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        mov ebx, 1
        push edi
        mov eax, dword ptr [esi + 0e4h]
        cmp eax, ebx
        ; Exact mapped bytes 75 53: jne 0x5897c0da
        __asm _emit 0x75
        __asm _emit 0x53
        mov ecx, dword ptr [esi + 0e8h]
        mov eax, dword ptr [ecx + 1ch]
        mov dword ptr [esi + 0f8h], eax
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [esi + 0fch], edx
        mov edi, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ecx + 20h]
        xor edx, edx
        div edi
        mov dword ptr [ecx + 34h], ebx
        mov dword ptr [ecx + 38h], ebx
        mov dword ptr [ecx + 3ch], ebx
        mov dword ptr [ecx + 40h], 8
        mov dword ptr [ecx + 44h], ebx
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x5897c0c2
        __asm _emit 0x75
        __asm _emit 0x02
        mov edx, edi
        mov dword ptr [ecx + 48h], edx
        mov dword ptr [esi + 100h], ebx
        mov dword ptr [esi + 104h], 0
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x5897c212
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor edi, edi
        cmp eax, edi
        ; Exact mapped bytes 7E 05: jle 0x5897c0e5
        __asm _emit 0x7e
        __asm _emit 0x05
        cmp eax, 4
        ; Exact mapped bytes 7E 25: jle 0x5897c10a
        __asm _emit 0x7e
        __asm _emit 0x25
        mov eax, dword ptr [esi]
        push esi
        mov dword ptr [eax + 14h], 1ah
        mov ecx, dword ptr [esi]
        mov edx, dword ptr [esi + 0e4h]
        mov dword ptr [ecx + 18h], edx
        mov eax, dword ptr [esi]
        mov dword ptr [eax + 1ch], 4
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        add esp, 4
        mov edx, dword ptr [esi + 0d8h]
        mov eax, dword ptr [esi + 1ch]
        shl edx, 3
        push edx
        push eax
        ; Exact mapped bytes E8 F3 AA FF FF: call 0x58976c10
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 0dch]
        mov edx, dword ptr [esi + 20h]
        shl ecx, 3
        push ecx
        push edx
        mov dword ptr [esi + 0f8h], eax
        ; Exact mapped bytes E8 DA AA FF FF: call 0x58976c10
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 0fch], eax
        mov eax, dword ptr [esi + 0e4h]
        add esp, 10h
        cmp eax, edi
        mov dword ptr [esi + 100h], edi
        mov dword ptr [esp + 14h], edi
        ; Exact mapped bytes 0F 8E BB 00 00 00: jle 0x5897c212
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 0e8h]
        push ebp
        mov dword ptr [esp + 10h], eax
        mov ecx, dword ptr [esp + 10h]
        mov ecx, dword ptr [ecx]
        mov edi, dword ptr [ecx + 8]
        mov eax, dword ptr [ecx + 1ch]
        mov ebp, dword ptr [ecx + 0ch]
        mov dword ptr [ecx + 34h], edi
        lea edx, [edi*8]
        mov ebx, ebp
        mov dword ptr [ecx + 40h], edx
        xor edx, edx
        div edi
        imul ebx, edi
        mov dword ptr [ecx + 38h], ebp
        mov dword ptr [ecx + 3ch], ebx
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x5897c193
        __asm _emit 0x75
        __asm _emit 0x02
        mov edx, edi
        mov eax, dword ptr [ecx + 20h]
        mov dword ptr [ecx + 44h], edx
        xor edx, edx
        div ebp
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x5897c1a3
        __asm _emit 0x75
        __asm _emit 0x02
        mov edx, ebp
        mov dword ptr [ecx + 48h], edx
        mov eax, dword ptr [esi + 100h]
        add eax, ebx
        cmp eax, 0ah
        ; Exact mapped bytes 7E 11: jle 0x5897c1c4
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [esi]
        push esi
        mov dword ptr [ecx + 14h], 0dh
        mov edx, dword ptr [esi]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov eax, ebx
        dec ebx
        test eax, eax
        ; Exact mapped bytes 7E 24: jle 0x5897c1ef
        __asm _emit 0x7e
        __asm _emit 0x24
        lea eax, [ebx + 1]
        mov ecx, dword ptr [esi + 100h]
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [esi + ecx*4 + 104h], edx
        mov edx, dword ptr [esi + 100h]
        inc edx
        dec eax
        mov dword ptr [esi + 100h], edx
        ; Exact mapped bytes 75 DF: jne 0x5897c1ce
        __asm _emit 0x75
        __asm _emit 0xdf
        mov eax, dword ptr [esp + 18h]
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + 0e4h]
        inc eax
        add edx, 4
        cmp eax, ecx
        mov dword ptr [esp + 18h], eax
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 0F 8C 51 FF FF FF: jl 0x5897c162
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        mov eax, dword ptr [esi + 0c0h]
        test eax, eax
        ; Exact mapped bytes 7E 19: jle 0x5897c235
        __asm _emit 0x7e
        __asm _emit 0x19
        imul eax, dword ptr [esi + 0f8h]
        cmp eax, 0ffffh
        ; Exact mapped bytes 7C 05: jl 0x5897c22f
        __asm _emit 0x7c
        __asm _emit 0x05
        mov eax, 0ffffh
        mov dword ptr [esi + 0bch], eax
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret
    }
}
