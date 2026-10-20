// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9A10 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_587b9a10() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push esi
        push 0
        mov esi, ecx
        mov ecx, dword ptr [esp + 0ch]
        push 0
        push 0
        shl ecx, 10h
        or ecx, dword ptr [esp + 1ch]
        push eax
        push ecx
        push 80011002h
        mov ecx, esi
        ; Exact mapped bytes E8 3A 72 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x72
        __asm _emit 0x1b
        __asm _emit 0x00
        mov dword ptr [esi + 134h], 400h
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
