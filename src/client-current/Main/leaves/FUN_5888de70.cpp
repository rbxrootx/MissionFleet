// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888DE70 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_5888de70() {
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
        mov eax, dword ptr [esp + 208h]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 210h]
        push ecx
        push eax
        push 5899ff04h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        lea eax, [esp + 10h]
        push eax
        ; Exact mapped bytes FF 15 C4 C3 98 58: call dword ptr [0x5898c3c4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 118h]
        add esp, 10h
        push ecx
        lea edx, [esp + 8]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 89 F3 FF FF: call 0x5888d250
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf3
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
        ; Exact mapped bytes 75 17: jne 0x5888deeb
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 118h]
        push ecx
        mov ecx, dword ptr [eax + 20d34h]
        lea edx, [esp + 8]
        push edx
        ; Exact mapped bytes E8 A5 DE 07 00: call 0x5890bd90
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xde
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 204h]
        pop esi
        xor ecx, esp
        ; Exact mapped bytes E8 E0 EC 0E 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xec
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 204h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
