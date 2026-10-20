// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00432601 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00432601_00432601() {
    __asm {
        push esi
        ; Exact mapped bytes E8 AC 36 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esp + 10h]
        mov esi, dword ptr [esp + 10h]
        mov eax, dword ptr [eax + 0ch]
        push esi
        push dword ptr [esp + 10h]
        push eax
        ; Exact mapped bytes FF 15 B8 C3 43 00: call dword ptr [0x43c3b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x432624
        __asm _emit 0x75
        __asm _emit 0x02
        and byte ptr [esi], al
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
