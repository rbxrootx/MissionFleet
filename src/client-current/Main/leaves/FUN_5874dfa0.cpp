// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874DFA0 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_5874dfa0() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 174h]
        test eax, eax
        ; Exact mapped bytes 0F 8E D2 00 00 00: jle 0x5874e083
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 33 0F 06 00: call 0x587aeef0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        cmp eax, 5
        ; Exact mapped bytes 0F 87 A6 00 00 00: ja 0x5874e06c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 88 E0 74 58: jmp dword ptr [eax*4 + 0x5874e088]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0xe0
        __asm _emit 0x74
        __asm _emit 0x58
        mov al, 1
        pop esi
        ret
        push 0
        push 0
        push 0
        push 320h
        ; Exact mapped bytes E8 0F DB 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 48 6D 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        push 0
        push 0
        push 0
        push 321h
        ; Exact mapped bytes E8 F4 DA 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2D 6D 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        push 0
        push 0
        push 0
        push 322h
        ; Exact mapped bytes E8 D9 DA 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 12 6D 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        push 0
        push 0
        push 0
        push 323h
        ; Exact mapped bytes E8 BE DA 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F7 6C 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        mov eax, dword ptr [esi + 174h]
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 F1 0D 06 00: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0d
        __asm _emit 0x06
        __asm _emit 0x00
        add eax, 74h
        push eax
        push 0
        push 0
        push 325h
        ; Exact mapped bytes E8 8F DA 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C8 6C 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        push 0
        push 0
        push 0
        push 324h
        ; Exact mapped bytes E8 74 DA 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 AD 6C 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
    }
}
