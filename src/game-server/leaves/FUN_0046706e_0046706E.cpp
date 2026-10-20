// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046706E .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_0046706e_0046706E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 14ch]
        ; Exact mapped bytes 0F 85 C3 00 00 00: jne 0x46715b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4670aa
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x46714f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax*8 + 150h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x46714a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + edx*8 + 26ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + edx*8 + 150h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + edx*8 + 26ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + ecx*8 + 270h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        add eax, dword ptr [edx + ecx*8 + 154h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + ecx*8 + 270h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 8]
        mov edx, dword ptr [esi + edx*8 + 150h]
        mov dword ptr [ecx + eax*8 + 1f9ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 8]
        mov edx, dword ptr [esi + edx*8 + 154h]
        mov dword ptr [ecx + eax*8 + 1fa0h], edx
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x4670a1
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BD 0E 00 00: call 0x468018
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 7A 16 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x16
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
