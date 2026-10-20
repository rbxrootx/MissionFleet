// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10048A20 .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_10048a20_10048A20() {
    __asm {
        sub esp, 10h
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        push esi
        mov esi, ecx
        sub esp, 0ch
        xor eax, eax
        ; Exact mapped bytes D9 5C 24 10: fstp dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D9 44 24 10: fld dword ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes D8 35 F8 52 17 10: fdiv dword ptr [0x101752f8]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, esp
        ; Exact mapped bytes D9 5C 24 14: fstp dword ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DB 44 24 28: fild dword ptr [esp + 0x28]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes D9 5C 24 24: fstp dword ptr [esp + 0x24]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D9 44 24 24: fld dword ptr [esp + 0x24]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes D8 35 F8 52 17 10: fdiv dword ptr [0x101752f8]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x52
        __asm _emit 0x17
        __asm _emit 0x10
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes D9 5C 24 1C: fstp dword ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [ecx + 8], eax
        mov ecx, esi
        ; Exact mapped bytes E8 E0 AF 0B 00: call 0x10103a50
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xaf
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x10048a84
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [esi]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
