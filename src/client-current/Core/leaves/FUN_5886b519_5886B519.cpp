// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B519 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_5886b519_5886B519() {
    __asm {
        push ebp
        mov ebp, esp
        add esp, 0fffffd30h
        push ebx
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD 01 00 00: call 0x5886b6db
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 9F 01 00 00: call 0x5886b6db
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        wait
        ; Exact mapped bytes D9 BD 5C FF FF FF: fnstcw word ptr [ebp - 0xa4]
        __asm _emit 0xd9
        __asm _emit 0xbd
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        or byte ptr [ebp - 2c8h], 2
        ; Exact mapped bytes E8 83 CD 00 00: call 0x588782d5
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 03 00 00 00: call 0x5886b55a
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        leave
        ret
    }
}
