// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004D7D0 .. +0x36 bytes.
extern "C" __declspec(naked) void FUN_1004d7d0_1004D7D0() {
    __asm {
        mov eax, dword ptr [esp + 10h]
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        test eax, eax
        mov esi, ecx
        ; Exact mapped bytes 75 07: jne 0x1004d7e7
        __asm _emit 0x75
        __asm _emit 0x07
        push edi
        ; Exact mapped bytes FF 15 A8 50 17 10: call dword ptr [0x101750a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 0ch]
        push 0
        push eax
        mov eax, dword ptr [esp + 18h]
        push edi
        push eax
        push ecx
        push 80015000h
        mov ecx, esi
        ; Exact mapped bytes E8 4F E7 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xe7
        __asm _emit 0x11
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
