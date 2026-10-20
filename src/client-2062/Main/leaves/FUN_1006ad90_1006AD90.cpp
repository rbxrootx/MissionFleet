// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1006AD90 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_1006ad90_1006AD90() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 10h]
        mov esi, ecx
        test edi, edi
        ; Exact mapped bytes 74 30: je 0x1006adcc
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 0ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 20: jne 0x1006adcc
        __asm _emit 0x75
        __asm _emit 0x20
        ; Exact mapped bytes E8 0F 38 08 00: call 0x100ee5c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x1006adcc
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [edi + 138h]
        push ecx
        mov ecx, dword ptr [esi + 20b00h]
        push edx
        ; Exact mapped bytes E8 04 58 FD FF: call 0x100405d0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
