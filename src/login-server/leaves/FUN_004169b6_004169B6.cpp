// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004169B6 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_004169b6_004169B6() {
    __asm {
        push esi
        push edi
        ; Exact mapped bytes E8 21 FF FF FF: call 0x4168de
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x4169d1
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [esp + 10h]
        push dword ptr [esp + 10h]
        ; Exact mapped bytes FF 15 00 F6 44 00: call dword ptr [0x44f600]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xf6
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes EB 36: jmp 0x416a07
        __asm _emit 0xeb
        __asm _emit 0x36
        test byte ptr [esp + 10h], 3
        ; Exact mapped bytes 75 2A: jne 0x416a02
        __asm _emit 0x75
        __asm _emit 0x2a
        mov esi, dword ptr [esp + 0ch]
        xor eax, eax
        cmp dword ptr [esi + 8], eax
        ; Exact mapped bytes 7E 1B: jle 0x4169fe
        __asm _emit 0x7e
        __asm _emit 0x1b
        cmp dword ptr [esi + 0ch], eax
        ; Exact mapped bytes 7E 16: jle 0x4169fe
        __asm _emit 0x7e
        __asm _emit 0x16
        ; Exact mapped bytes 8B 3D 44 C5 43 00: mov edi, dword ptr [0x43c544]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x44
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp dword ptr [esi], eax
        ; Exact mapped bytes 7D 09: jge 0x4169fe
        __asm _emit 0x7d
        __asm _emit 0x09
        push 1
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp dword ptr [esi + 4], eax
        ; Exact mapped bytes 7C 04: jl 0x416a02
        __asm _emit 0x7c
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x416a07
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 12340042h
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
