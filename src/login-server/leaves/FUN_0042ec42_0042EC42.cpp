// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042EC42 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_0042ec42_0042EC42() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 4ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x42ec54
        __asm _emit 0x74
        __asm _emit 0x08
        push eax
        ; Exact mapped bytes E8 43 26 00 00: call 0x431295
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x42ec5e
        __asm _emit 0xeb
        __asm _emit 0x0a
        push dword ptr [esi + 40h]
        mov ecx, esi
        ; Exact mapped bytes E8 E7 25 00 00: call 0x431245
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x42ec6f
        __asm _emit 0x74
        __asm _emit 0x0d
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 6D 23 00 00: call 0x430fd8
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x42ec7c
        __asm _emit 0x75
        __asm _emit 0x0d
        push -1
        mov ecx, esi
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x42eb1d
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ret
        push 0e146h
        mov ecx, esi
        ; Exact mapped bytes E8 49 F4 FF FF: call 0x42e0d1
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 14: je 0x42eca2
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes E8 59 FF FF FF: call 0x42ebec
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        mov ecx, esi
        and eax, 5
        push eax
        ; Exact mapped bytes E8 85 F6 FF FF: call 0x42e327
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        pop eax
        pop esi
        ret
    }
}
