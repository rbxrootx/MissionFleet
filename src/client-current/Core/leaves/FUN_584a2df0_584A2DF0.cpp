// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2DF0 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_584a2df0_584A2DF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB 1A 00 00: call 0x584a48d0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70ch]
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + ecx + 18h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70ch], eax
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [eax + edx + 0ch]
        and cl, 1fh
        mov dl, byte ptr [ebp - 8]
        and dl, 0e0h
        or dl, cl
        mov byte ptr [ebp - 8], dl
        mov al, byte ptr [ebp - 8]
        and al, 1fh
        mov byte ptr [ebp - 8], al
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + ecx + 18h]
        mov byte ptr [ebp - 7], al
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 6], cl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        push 4
        lea ecx, [ebp - 8]
        push ecx
        push 16h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 70 76 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x76
        __asm _emit 0x2c
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 16 00 00: call 0x584a44c0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
