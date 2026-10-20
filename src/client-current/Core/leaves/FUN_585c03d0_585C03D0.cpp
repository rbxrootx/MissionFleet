// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C03D0 .. +0x342 bytes.
extern "C" __declspec(naked) void FUN_585c03d0_585C03D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 87 21 03 00 00: ja 0x585c070b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 14 07 5C 58: jmp dword ptr [ecx*4 + 0x585c0714]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x14
        __asm _emit 0x07
        __asm _emit 0x5c
        __asm _emit 0x58
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 21e50h]
        xor ecx, dword ptr [edx + eax + 21e68h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21e50h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 21e50h]
        sub ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 21e50h], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 21e50h]
        xor edx, dword ptr [eax + ecx + 21e68h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e50h], edx
        ; Exact mapped bytes E9 B5 02 00 00: jmp 0x585c070b
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 21e54h]
        xor edx, dword ptr [eax + ecx + 21e68h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e54h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 21e54h]
        sub edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e54h], edx
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 21e54h]
        xor edx, dword ptr [eax + ecx + 21e68h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e54h], edx
        ; Exact mapped bytes E9 53 02 00 00: jmp 0x585c070b
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 1
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax + 21e58h]
        xor eax, dword ptr [esi + ecx + 21e68h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 21e58h], eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 21e58h]
        add edx, dword ptr [ebp + 0ch]
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 21e58h], edx
        mov ecx, 4
        shl ecx, 1
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax + 21e58h]
        xor eax, dword ptr [esi + ecx + 21e68h]
        mov ecx, 4
        imul edx, ecx, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 21e58h], eax
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x585c070b
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 3
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 21e58h]
        xor ecx, dword ptr [esi + eax + 21e68h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx + 21e58h], ecx
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 21e58h]
        add eax, dword ptr [ebp + 0ch]
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 21e58h], eax
        mov eax, 4
        imul ecx, eax, 3
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx + 21e58h]
        xor edx, dword ptr [esi + ecx + 21e68h]
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 21e58h], edx
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x585c070b
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 2
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax + 21e58h]
        xor eax, dword ptr [esi + edx + 21e68h]
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 21e58h], eax
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 21e58h]
        add edx, dword ptr [ebp + 0ch]
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 21e58h], edx
        mov edx, 4
        shl edx, 2
        mov eax, 4
        shl eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax + 21e58h]
        xor eax, dword ptr [esi + edx + 21e68h]
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx + 21e58h], eax
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x585c070b
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        imul ecx, eax, 5
        mov edx, 4
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax + 21e58h]
        xor eax, dword ptr [esi + ecx + 21e68h]
        mov ecx, 4
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + edx + 21e58h], eax
        mov edx, 4
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 21e58h]
        add edx, dword ptr [ebp + 0ch]
        mov eax, 4
        imul ecx, eax, 3
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + ecx + 21e58h], edx
        mov ecx, 4
        imul edx, ecx, 5
        mov eax, 4
        imul ecx, eax, 3
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + ecx + 21e58h]
        xor ecx, dword ptr [esi + edx + 21e68h]
        mov edx, 4
        imul eax, edx, 3
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax + 21e58h], ecx
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
