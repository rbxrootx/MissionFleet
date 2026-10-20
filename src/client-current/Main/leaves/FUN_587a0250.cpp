// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A0250 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_587a0250() {
    __asm {
        movzx eax, byte ptr [esp + 8]
        sub eax, 0
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 74 27: je 0x587a0285
        __asm _emit 0x74
        __asm _emit 0x27
        sub eax, 1
        ; Exact mapped bytes 75 3F: jne 0x587a02a2
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edi, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esi + edi*4 + 18h]
        push 1eh
        ; Exact mapped bytes E8 AE 2A 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x2a
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + edi*4 + 18h]
        push 0ffh
        ; Exact mapped bytes E8 60 2A 16 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x2a
        __asm _emit 0x16
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edi, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esi + edi*4 + 18h]
        push -5fh
        ; Exact mapped bytes E8 8C 2A 16 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esi + edi*4 + 18h]
        push 96h
        ; Exact mapped bytes E8 3E 2A 16 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x2a
        __asm _emit 0x16
        __asm _emit 0x00
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
