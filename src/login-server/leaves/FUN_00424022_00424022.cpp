// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00424022 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00424022_00424022() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push 8000h
        push 0
        push dword ptr [esi + 10h]
        ; Exact mapped bytes FF 15 A4 C2 43 00: call dword ptr [0x43c2a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 39 35 38 D0 44 00: cmp dword ptr [0x44d038], esi
        __asm _emit 0x39
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 75 08: jne 0x424047
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [esi + 4]
        ; Exact mapped bytes A3 38 D0 44 00: mov dword ptr [0x44d038], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        cmp esi, 44b018h
        ; Exact mapped bytes 74 20: je 0x42406f
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi]
        push esi
        push 0
        mov dword ptr [eax], ecx
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [esi + 4]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes FF 35 68 10 45 00: push dword ptr [0x451068]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 2C C1 43 00: call dword ptr [0x43c12c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        ret
        ; Exact mapped bytes 83 0D 28 B0 44 00 FF: or dword ptr [0x44b028], 0xffffffff
        __asm _emit 0x83
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0xb0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0xff
        pop esi
        ret
    }
}
