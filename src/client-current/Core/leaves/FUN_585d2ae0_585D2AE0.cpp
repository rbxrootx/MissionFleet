// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D2AE0 .. +0x109 bytes.
extern "C" __declspec(naked) void FUN_585d2ae0_585D2AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 87 E6 00 00 00: ja 0x585d2be0
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 8D EC 2B 5D 58: jmp dword ptr [ecx*4 + 0x585d2bec]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0x2b
        __asm _emit 0x5d
        __asm _emit 0x58
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 21e50h]
        xor ecx, dword ptr [edx + eax + 21e68h]
        mov eax, ecx
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x585d2be2
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 21e54h]
        xor eax, dword ptr [ecx + edx + 21e68h]
        ; Exact mapped bytes E9 9C 00 00 00: jmp 0x585d2be2
        __asm _emit 0xe9
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax + 21e58h]
        xor eax, dword ptr [esi + ecx + 21e68h]
        ; Exact mapped bytes EB 77: jmp 0x585d2be2
        __asm _emit 0xeb
        __asm _emit 0x77
        mov eax, 4
        shl eax, 0
        mov ecx, 4
        imul edx, ecx, 3
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax + 21e58h]
        xor eax, dword ptr [esi + edx + 21e68h]
        ; Exact mapped bytes EB 51: jmp 0x585d2be2
        __asm _emit 0xeb
        __asm _emit 0x51
        mov edx, 4
        shl edx, 1
        mov eax, 4
        shl eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + edx + 21e58h]
        xor edx, dword ptr [esi + eax + 21e68h]
        mov eax, edx
        ; Exact mapped bytes EB 2A: jmp 0x585d2be2
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, 4
        imul ecx, eax, 3
        mov edx, 4
        imul eax, edx, 5
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 21e58h]
        xor ecx, dword ptr [esi + eax + 21e68h]
        mov eax, ecx
        ; Exact mapped bytes EB 02: jmp 0x585d2be2
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
