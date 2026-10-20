// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004380BF .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_004380bf_004380BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 BE FC FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp eax, 502h
        ; Exact mapped bytes 0F 85 87 00 00 00: jne 0x438179
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax + 0ca8h]
        mov byte ptr [ebp - 4], cl
        mov edx, dword ptr [ebp + 8]
        mov al, byte ptr [edx + 0ca9h]
        mov byte ptr [ebp - 8], al
        mov ecx, dword ptr [ebp - 4]
        and ecx, 0ffh
        imul ecx, ecx, 0ab4h
        mov edx, dword ptr [ebp - 0ch]
        lea eax, [edx + ecx + 4]
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffh
        imul ecx, ecx, 112h
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 92 A4 0C 00 00: mov dx, word ptr [edx + 0xca4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0xa4
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 14 08: mov word ptr [eax + ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B B8 FC FF: call 0x403970
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ebx, eax
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffh
        imul eax, eax, 0ab4h
        mov ecx, dword ptr [ebp - 0ch]
        lea esi, [ecx + eax + 4]
        mov edx, dword ptr [ebp - 8]
        and edx, 0ffh
        imul edx, edx, 112h
        add esi, edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B BE FC FF: call 0x403ff0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xbe
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [esi + eax + 1], bl
        pop esi
        pop ebx
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 5B 06 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x06
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
