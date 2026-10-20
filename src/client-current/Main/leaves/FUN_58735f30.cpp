// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58735F30 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_58735f30() {
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
        mov dl, byte ptr [esp + 90h]
        mov ecx, dword ptr [ecx + 0ch]
        mov eax, 5
        push eax
        mov byte ptr [esp + 5], al
        mov byte ptr [esp + 6], dl
        mov dl, byte ptr [esp + 90h]
        mov byte ptr [esp + 7], al
        lea eax, [esp + 8]
        mov byte ptr [esp + 0ch], dl
        push eax
        mov byte ptr [esp + 8], 1
        mov edx, dword ptr [esp + 8]
        push 0ch
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes E8 DC E2 1A 00: call 0x588e4260
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe2
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 84h]
        xor ecx, esp
        ; Exact mapped bytes E8 48 6C 24 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 88h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
