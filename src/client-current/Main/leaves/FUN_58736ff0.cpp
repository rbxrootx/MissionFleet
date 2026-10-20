// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58736FF0 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_58736ff0() {
    __asm {
        sub esp, 88h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 84h], eax
        mov eax, ecx
        mov cl, 1
        mov byte ptr [esp], cl
        mov byte ptr [esp + 1], cl
        mov ecx, dword ptr [esp + 8ch]
        mov byte ptr [esp + 0ch], cl
        lea ecx, [ecx + ecx*4]
        mov ecx, dword ptr [eax + ecx*4 + 110h]
        movzx edx, word ptr [ecx + 4]
        movzx ecx, word ptr [ecx + 8]
        push esi
        ; Exact mapped bytes 66 89 54 24 0C: mov word ptr [esp + 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        push 9
        lea edx, [esp + 0ch]
        push edx
        mov byte ptr [esp + 0eh], 0
        mov byte ptr [esp + 0fh], 9
        mov esi, dword ptr [esp + 0ch]
        ; Exact mapped bytes 66 89 4C 24 16: mov word ptr [esp + 0x16], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x16
        mov ecx, dword ptr [eax + 0ch]
        push 0ch
        mov dword ptr [esp + 14h], esi
        ; Exact mapped bytes E8 06 D2 1A 00: call 0x588e4260
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xd2
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 88h]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 71 5B 24 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x5b
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 88h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
