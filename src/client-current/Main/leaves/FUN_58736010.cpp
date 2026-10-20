// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58736010 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_58736010() {
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
        mov al, byte ptr [esp + 8ch]
        mov ecx, dword ptr [ecx + 0ch]
        mov byte ptr [esp + 8], al
        push 5
        lea eax, [esp + 8]
        push eax
        mov byte ptr [esp + 8], 1
        mov byte ptr [esp + 9], 7
        mov byte ptr [esp + 0ah], 0
        mov byte ptr [esp + 0bh], 5
        mov edx, dword ptr [esp + 8]
        push 0ch
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes E8 04 E2 1A 00: call 0x588e4260
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xe2
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 84h]
        xor ecx, esp
        ; Exact mapped bytes E8 70 6B 24 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x6b
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 88h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
