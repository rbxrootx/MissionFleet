// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B9B90 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_587b9b90() {
    __asm {
        mov eax, dword ptr [esp + 10h]
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        mov esi, ecx
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x587b9ba7
        __asm _emit 0x75
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes FF 15 A8 C1 98 58: call dword ptr [0x5898c1a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esp + 0ch]
        push 0
        push eax
        mov eax, dword ptr [esp + 18h]
        push edi
        push eax
        push ecx
        push 80015000h
        mov ecx, esi
        ; Exact mapped bytes E8 AF 70 1B 00: call 0x58970c70
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x70
        __asm _emit 0x1b
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
