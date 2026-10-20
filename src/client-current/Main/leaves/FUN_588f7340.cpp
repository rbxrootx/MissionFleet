// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F7340 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_588f7340() {
    __asm {
        ; Exact mapped bytes A1 F4 45 A2 58: mov eax, dword ptr [0x58a245f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [esp + 4]
        cmp eax, 0bh
        ; Exact mapped bytes 0F 87 89 00 00 00: ja 0x588f73de
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 00 74 8F 58: jmp dword ptr [eax*4 + 0x588f7400]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0x8f
        __asm _emit 0x58
        mov dword ptr [esp + 4], 589a1ce8h
        ; Exact mapped bytes E9 C7 FE FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 4], 589a1ca0h
        ; Exact mapped bytes E9 BA FE FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 4], 589a1c58h
        ; Exact mapped bytes E9 AD FE FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 4], 589a1c00h
        ; Exact mapped bytes E9 A0 FE FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 4], 589a1bb8h
        ; Exact mapped bytes E9 93 FE FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 4], 589a1ba4h
        ; Exact mapped bytes E9 86 FE FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 4], 589a1b80h
        ; Exact mapped bytes E9 79 FE FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 4], 589a1b64h
        ; Exact mapped bytes E9 6C FE FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 4], 589a1b20h
        ; Exact mapped bytes E9 5F FE FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esp + 4], 589a1ad0h
        ; Exact mapped bytes E9 52 FE FF FF: jmp 0x588f7230
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ecx + 4]
        push ecx
        push 23h
        push 589a1a18h
        push 2711h
        ; Exact mapped bytes E8 FD 46 E7 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x46
        __asm _emit 0xe7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 36 D9 E6 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xd9
        __asm _emit 0xe6
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
