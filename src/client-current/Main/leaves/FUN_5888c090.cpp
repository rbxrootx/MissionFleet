// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888C090 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_5888c090() {
    __asm {
        sub esp, 38h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 34h], eax
        ; Exact mapped bytes A1 A8 45 A2 58: mov eax, dword ptr [0x58a245a8]
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [esp], ecx
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 40: jne 0x5888c0ee
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [eax + 9ch]
        cmp eax, 7
        ; Exact mapped bytes 74 05: je 0x5888c0be
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 0ch
        ; Exact mapped bytes 75 30: jne 0x5888c0ee
        __asm _emit 0x75
        __asm _emit 0x30
        push 6464ffh
        push 5899fc7ch
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        add esp, 4
        push eax
        ; Exact mapped bytes E8 73 11 00 00: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 34h]
        xor ecx, esp
        ; Exact mapped bytes E8 F2 0A 0F 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0a
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 38h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
