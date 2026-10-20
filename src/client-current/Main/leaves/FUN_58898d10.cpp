// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58898D10 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_58898d10() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 128h]
        mov edx, dword ptr [esi + eax*4 + 11ch]
        mov ecx, dword ptr [esi + 118h]
        lea eax, [esi + eax*4 + 11ch]
        sub edx, 0fh
        cmp ecx, edx
        ; Exact mapped bytes 7D 50: jge 0x58898d85
        __asm _emit 0x7d
        __asm _emit 0x50
        inc ecx
        mov dword ptr [esi + 118h], ecx
        mov eax, dword ptr [eax]
        sub eax, 0fh
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes DB 44 24 04: fild dword ptr [esp + 4]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes DC 3D 38 01 9A 58: fdivr qword ptr [0x589a0138]
        __asm _emit 0xdc
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        ; Exact mapped bytes D8 86 EC 00 00 00: fadd dword ptr [esi + 0xec]
        __asm _emit 0xd8
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D9 5C 24 04: fstp dword ptr [esp + 4]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes D9 44 24 04: fld dword ptr [esp + 4]
        __asm _emit 0xd9
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes D9 96 EC 00 00 00: fst dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x96
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 38 3F 0E 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x3f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push eax
        ; Exact mapped bytes E8 EC A5 06 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 128h]
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 EE F8 FF FF: call 0x58898670
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ecx
        ret
        ; Exact mapped bytes D9 05 40 01 9A 58: fld dword ptr [0x589a0140]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0e8h]
        push 213h
        ; Exact mapped bytes D9 9E EC 00 00 00: fstp dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 BF A5 06 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        pop esi
        pop ecx
        ret
    }
}
