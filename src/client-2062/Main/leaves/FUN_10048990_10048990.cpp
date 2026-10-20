// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10048990 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_10048990_10048990() {
    __asm {
        mov eax, dword ptr [esp + 4]
        sub esp, 10h
        cmp eax, 0fffffd80h
        push esi
        mov esi, ecx
        ; Exact mapped bytes 7E 6C: jle 0x10048a0d
        __asm _emit 0x7e
        __asm _emit 0x6c
        cmp eax, 280h
        ; Exact mapped bytes 7D 65: jge 0x10048a0d
        __asm _emit 0x7d
        __asm _emit 0x65
        mov eax, dword ptr [esp + 1ch]
        cmp eax, 0fffffe00h
        ; Exact mapped bytes 7E 5A: jle 0x10048a0d
        __asm _emit 0x7e
        __asm _emit 0x5a
        cmp eax, 200h
        ; Exact mapped bytes 7D 53: jge 0x10048a0d
        __asm _emit 0x7d
        __asm _emit 0x53
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        sub esp, 0ch
        xor eax, eax
        mov ecx, esp
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
        ; Exact mapped bytes E8 4C B0 0B 00: call 0x10103a50
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb0
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        push 0
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop esi
        add esp, 10h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
