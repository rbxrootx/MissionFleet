// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848D270 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_5848d270_5848D270() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 10ch], 0
        imul edx, dword ptr [ebp + 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 109h]
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 244h]
        add eax, ecx
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 244h], al
        imul edx, dword ptr [ebp + 8], 14h
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + edx + 114h], 0
        imul ecx, dword ptr [ebp + 8], 14h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 108h]
        add eax, 1bh
        and al, 1fh
        mov cl, byte ptr [ebp - 8]
        and cl, 0e0h
        or cl, al
        mov byte ptr [ebp - 8], cl
        mov dl, byte ptr [ebp - 8]
        and dl, 1fh
        mov byte ptr [ebp - 8], dl
        imul eax, dword ptr [ebp + 8], 14h
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ecx + eax + 109h]
        mov byte ptr [ebp - 7], dl
        mov al, byte ptr [ebp + 8]
        mov byte ptr [ebp - 6], al
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes E8 37 F1 FF FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        imul edx, dword ptr [ebp + 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + edx + 108h]
        add ecx, 1bh
        mov dword ptr [ebp - 10h], ecx
        imul edx, dword ptr [ebp + 8], 14h
        mov eax, dword ptr [ebp - 4]
        movzx esi, byte ptr [eax + edx + 109h]
        push 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 D2 FC FF FF: call 0x5848d010
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, ax
        xor edx, 55h
        sub edx, esi
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 79 07: jns 0x5848d352
        __asm _emit 0x79
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 0ch]
        xor eax, 55h
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 18h], edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 20 22 2E 00: call 0x5876f590
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x22
        __asm _emit 0x2e
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
