// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004350BD .. +0x70 bytes.
extern "C" __declspec(naked) void FUN_004350bd_004350BD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov ecx, esi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CB FE FF FF: call 0x434f9d
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi], 0
        mov edi, eax
        ; Exact mapped bytes 74 35: je 0x43510e
        __asm _emit 0x74
        __asm _emit 0x35
        lea eax, [ebp - 20h]
        push 20h
        push eax
        push edi
        ; Exact mapped bytes FF 15 E8 C4 43 00: call dword ptr [0x43c4e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp + 18h]
        push eax
        lea eax, [ebp - 20h]
        push dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 22 FF FF FF: call 0x435018
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x435129
        __asm _emit 0x75
        __asm _emit 0x2f
        push -1
        push eax
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 4A FC FF FF: call 0x434d4f
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 D7 FE FF FF: call 0x434fe3
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1B: jmp 0x435129
        __asm _emit 0xeb
        __asm _emit 0x1b
        lea eax, [ebp + 18h]
        push eax
        lea eax, [ebp - 20h]
        push dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes FF 15 BC C3 43 00: call dword ptr [0x43c3bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xc3
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        push edi
        ; Exact mapped bytes E8 DB F8 FF FF: call 0x434a04
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        leave
        ret
    }
}
