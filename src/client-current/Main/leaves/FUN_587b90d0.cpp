// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B90D0 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_587b90d0() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 134h], 0
        ; Exact mapped bytes 75 2E: jne 0x587b910a
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [esp + 8]
        movzx ecx, word ptr [esp + 10h]
        movzx edx, word ptr [esp + 0ch]
        push 0
        push 0c4h
        push eax
        push ecx
        push edx
        push 80020111h
        mov ecx, esi
        ; Exact mapped bytes E8 70 7B 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x7b
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 1
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
