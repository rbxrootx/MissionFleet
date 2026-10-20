// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848B5D0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_5848b5d0_5848B5D0() {
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
        mov byte ptr [ebp - 87h], 7
        mov byte ptr [ebp - 86h], 0
        mov dword ptr [ebp - 8ch], 0
        mov dword ptr [ebp - 90h], 4
        mov eax, dword ptr [ebp - 90h]
        add eax, dword ptr [ebp - 8ch]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [ebp + eax - 84h], cl
        mov edx, dword ptr [ebp - 8ch]
        add edx, 1
        mov dword ptr [ebp - 8ch], edx
        mov eax, dword ptr [ebp - 90h]
        add eax, dword ptr [ebp - 8ch]
        mov byte ptr [ebp - 85h], al
        mov ecx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 84h], ecx
        mov edx, dword ptr [ebp - 94h]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 98h], eax
        ; Exact mapped bytes 66 0F B6 8D 7B FF FF FF: movzx cx, byte ptr [ebp - 0x85]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x8d
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, cx
        push edx
        lea eax, [ebp - 84h]
        push eax
        push 0ch
        mov ecx, dword ptr [ebp - 98h]
        ; Exact mapped bytes E8 5C EE 2D 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xee
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 C1 59 3A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x59
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
