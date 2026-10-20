// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004CA90 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_1004ca90_1004CA90() {
    __asm {
        ; Exact mapped bytes A1 18 57 1C 10: mov eax, dword ptr [0x101c5718]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [eax + 1c8h]
        ; Exact mapped bytes 66 83 BA 9C 01 00 00 03: cmp word ptr [edx + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xba
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 20: jne 0x1004cac5
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [esp + 0ch]
        push 0
        push eax
        mov eax, dword ptr [esp + 10h]
        push edx
        mov edx, dword ptr [esp + 10h]
        push eax
        push edx
        push 80010d03h
        ; Exact mapped bytes E8 8B F4 11 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf4
        __asm _emit 0x11
        __asm _emit 0x00
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
