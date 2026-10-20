// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58736F70 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_58736f70() {
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
        mov byte ptr [esp + 2], cl
        mov ecx, dword ptr [esp + 8ch]
        mov byte ptr [esp + 0ah], cl
        lea ecx, [ecx + ecx*4]
        mov byte ptr [esp + 1], 2
        mov byte ptr [esp + 3], 7
        mov edx, dword ptr [esp]
        mov dword ptr [esp + 4], edx
        mov edx, dword ptr [eax + ecx*4 + 110h]
        ; Exact mapped bytes 66 8B 8A 50 03 00 00: mov cx, word ptr [edx + 0x350]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8a
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 7
        lea edx, [esp + 8]
        push edx
        ; Exact mapped bytes 66 89 4C 24 10: mov word ptr [esp + 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0ch]
        push 0ch
        ; Exact mapped bytes E8 8E D2 1A 00: call 0x588e4260
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 84h]
        xor ecx, esp
        ; Exact mapped bytes E8 FA 5B 24 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xfa
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
