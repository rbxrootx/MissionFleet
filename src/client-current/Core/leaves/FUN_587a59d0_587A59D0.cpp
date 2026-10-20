// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A59D0 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_587a59d0_587A59D0() {
    __asm {
        sub esp, 0ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 8], eax
        push esi
        mov esi, dword ptr [esp + 14h]
        mov eax, 8
        mov dword ptr [esp + 4], 474e5089h
        mov dword ptr [esp + 8], 0a1a0a0dh
        movzx ecx, byte ptr [esi + 159h]
        sub eax, ecx
        mov dword ptr [esi + 2dch], 12h
        push eax
        lea eax, [esp + 8]
        add eax, ecx
        push eax
        push esi
        ; Exact mapped bytes E8 A7 0E 00 00: call 0x587a68c0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp byte ptr [esi + 159h], 3
        ; Exact mapped bytes 73 07: jae 0x587a5a2c
        __asm _emit 0x73
        __asm _emit 0x07
        or dword ptr [esi + 74h], 1000h
        mov ecx, dword ptr [esp + 0ch]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 18 B6 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb6
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        ret
    }
}
