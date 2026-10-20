// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E79A0 .. +0x1C9 bytes.
extern "C" __declspec(naked) void FUN_585e79a0_585E79A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 87 A8 01 00 00: ja 0x585e7b62
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D 6C 7B 5E 58: jmp dword ptr [ecx*4 + 0x585e7b6c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0x7b
        __asm _emit 0x5e
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 21e50h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 21e50h]
        xor eax, dword ptr [ecx + edx + 21e68h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 21e50h], eax
        ; Exact mapped bytes E9 69 01 00 00: jmp 0x585e7b62
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 21e54h], eax
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx + 21e54h]
        xor edx, dword ptr [eax + ecx + 21e68h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 21e54h], edx
        ; Exact mapped bytes E9 34 01 00 00: jmp 0x585e7b62
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + edx + 21e58h], ecx
        mov edx, 4
        shl edx, 1
        mov eax, 4
        imul ecx, eax, 0
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + ecx + 21e58h]
        xor ecx, dword ptr [esi + edx + 21e68h]
        mov edx, 4
        imul eax, edx, 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + eax + 21e58h], ecx
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x585e7b62
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + eax + 21e58h], edx
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
        ; Exact mapped bytes E9 95 00 00 00: jmp 0x585e7b62
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + edx + 21e58h], ecx
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
        ; Exact mapped bytes EB 4B: jmp 0x585e7b62
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, 4
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + ecx + 21e58h], eax
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
