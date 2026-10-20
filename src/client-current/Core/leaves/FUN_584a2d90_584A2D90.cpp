// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2D90 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_584a2d90_584A2D90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + eax + 0ch]
        and dl, 1fh
        movzx eax, byte ptr [ebp - 4]
        and al, 0e0h
        or al, dl
        mov byte ptr [ebp - 4], al
        mov cl, byte ptr [ebp - 4]
        and cl, 1fh
        or cl, 40h
        mov byte ptr [ebp - 4], cl
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ebp - 2], dl
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        push 4
        lea edx, [ebp - 4]
        push edx
        push 16h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 04 77 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x77
        __asm _emit 0x2c
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
