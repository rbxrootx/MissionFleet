// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585FA410 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_585fa410_585FA410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 181h
        mov dword ptr [ebp - 8], ecx
        imul edx, dword ptr [ebp + 8], 18h
        imul eax, dword ptr [ebp + 8], 18h
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + edx + 440h]
        cmp edx, dword ptr [esi + eax + 444h]
        ; Exact mapped bytes 74 56: je 0x585fa49d
        __asm _emit 0x74
        __asm _emit 0x56
        imul eax, dword ptr [ebp + 8], 18h
        imul ecx, dword ptr [ebp + 8], 18h
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + eax + 444h]
        sub eax, dword ptr [esi + ecx + 440h]
        imul eax, eax, 64h
        imul ecx, dword ptr [ebp + 8], 18h
        imul edx, dword ptr [ebp + 8], 18h
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [esi + ecx + 444h]
        mov esi, dword ptr [ebp - 4]
        add ecx, dword ptr [esi + edx + 440h]
        xor edx, edx
        div ecx
        mov dword ptr [ebp - 0ch], eax
        imul eax, dword ptr [ebp - 0ch], 68h
        cdq
        mov ecx, 64h
        idiv ecx
        add eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 25: jmp 0x585fa4c2
        __asm _emit 0xeb
        __asm _emit 0x25
        imul edx, dword ptr [ebp + 8], 18h
        imul eax, dword ptr [ebp + 8], 18h
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + edx + 440h]
        cmp edx, dword ptr [esi + eax + 444h]
        ; Exact mapped bytes 75 07: jne 0x585fa4c2
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3f8h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D6 B1 1B 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb1
        __asm _emit 0x1b
        __asm _emit 0x00
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
