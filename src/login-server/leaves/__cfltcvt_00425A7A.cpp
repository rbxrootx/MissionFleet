// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425A7A .. +0x51 bytes.
extern "C" __declspec(naked) void __cfltcvt_00425A7A() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 10h], 65h
        ; Exact mapped bytes 74 32: je 0x425ab5
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [ebp + 10h], 45h
        ; Exact mapped bytes 74 2C: je 0x425ab5
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp dword ptr [ebp + 10h], 66h
        ; Exact mapped bytes 75 13: jne 0x425aa2
        __asm _emit 0x75
        __asm _emit 0x13
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4E FE FF FF: call 0x4258eb
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop ebp
        ret
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 34 FF FF FF: call 0x4259e7
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 11: jmp 0x425ac6
        __asm _emit 0xeb
        __asm _emit 0x11
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 02 FD FF FF: call 0x4257c8
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop ebp
        ret
    }
}
