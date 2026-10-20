// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848B350 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_5848b350_5848B350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 98h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 94h], ecx
        mov byte ptr [ebp - 88h], 1
        mov byte ptr [ebp - 87h], 5
        movzx eax, byte ptr [ebp + 0ch]
        mov byte ptr [ebp - 86h], al
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 90h], 4
        mov ecx, dword ptr [ebp - 90h]
        add ecx, dword ptr [ebp - 8ch]
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ebp + ecx - 84h], dl
        mov eax, dword ptr [ebp - 8ch]
        add eax, 1
        mov dword ptr [ebp - 8ch], eax
        mov ecx, dword ptr [ebp - 90h]
        add ecx, dword ptr [ebp - 8ch]
        mov byte ptr [ebp - 85h], cl
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 84h], edx
        mov eax, dword ptr [ebp - 94h]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 98h], ecx
        ; Exact mapped bytes 66 0F B6 95 7B FF FF FF: movzx dx, byte ptr [ebp - 0x85]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x95
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, dx
        push eax
        lea ecx, [ebp - 84h]
        push ecx
        push 0ch
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 D9 F0 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf0
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 3E 5C 3A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x5c
        __asm _emit 0x3a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
