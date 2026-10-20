// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10094B90 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_10094b90_10094B90() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        sub esp, 18h
        test eax, eax
        push ebp
        mov ebp, ecx
        ; Exact mapped bytes 75 1C: jne 0x10094bba
        __asm _emit 0x75
        __asm _emit 0x1c
        ; Exact mapped bytes E8 6D 04 00 00: call 0x10095010
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 30h]
        push 1
        push 0ee49h
        push ebp
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        pop ebp
        add esp, 18h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
