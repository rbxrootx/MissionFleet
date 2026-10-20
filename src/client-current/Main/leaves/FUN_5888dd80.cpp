// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888DD80 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_5888dd80() {
    __asm {
        sub esp, 204h
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 200h], eax
        movzx eax, word ptr [esp + 20ch]
        dec eax
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 20ch]
        cmp eax, 3
        ; Exact mapped bytes 77 5B: ja 0x5888de07
        __asm _emit 0x77
        __asm _emit 0x5b
        ; Exact mapped bytes FF 24 85 58 DE 88 58: jmp dword ptr [eax*4 + 0x5888de58]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x58
        __asm _emit 0xde
        __asm _emit 0x88
        __asm _emit 0x58
        push ecx
        push 5899fee4h
        ; Exact mapped bytes EB 34: jmp 0x5888ddef
        __asm _emit 0xeb
        __asm _emit 0x34
        push ecx
        push 5899fec4h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea ecx, [esp + 0ch]
        push ecx
        ; Exact mapped bytes EB 2C: jmp 0x5888ddfe
        __asm _emit 0xeb
        __asm _emit 0x2c
        push ecx
        push 5899fea0h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea edx, [esp + 0ch]
        push edx
        ; Exact mapped bytes EB 15: jmp 0x5888ddfe
        __asm _emit 0xeb
        __asm _emit 0x15
        push ecx
        push 5899fe78h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 0ch
        mov ecx, dword ptr [esi + 118h]
        push ecx
        lea edx, [esp + 8]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 36 F4 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 39 05 80 45 A2 58: cmp dword ptr [0x58a24580], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 17: jne 0x5888de3e
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 118h]
        push ecx
        mov ecx, dword ptr [eax + 20d34h]
        lea edx, [esp + 8]
        push edx
        ; Exact mapped bytes E8 52 DF 07 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xdf
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 204h]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 8D ED 0E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xed
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 204h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
