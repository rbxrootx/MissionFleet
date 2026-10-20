// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA7C0 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_587ba7c0() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 134h], 0
        ; Exact mapped bytes 75 54: jne 0x587ba820
        __asm _emit 0x75
        __asm _emit 0x54
        movzx eax, byte ptr [esp + 0ch]
        movzx ecx, byte ptr [esp + 10h]
        mov edx, dword ptr [esp + 8]
        push 0
        push 0
        push 0
        shl eax, 4
        or eax, ecx
        push eax
        push edx
        push 80010018h
        mov ecx, esi
        ; Exact mapped bytes E8 7D 64 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x64
        __asm _emit 0x1b
        __asm _emit 0x00
        mov al, byte ptr [esp + 14h]
        mov dword ptr [esi + 134h], 2
        test al, al
        ; Exact mapped bytes 74 12: je 0x587ba817
        __asm _emit 0x74
        __asm _emit 0x12
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0a00h]
        mov byte ptr [edx + 2a8h], al
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
