// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58898C80 .. +0x90 bytes.
extern "C" __declspec(naked) void FUN_58898c80() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 118h]
        test eax, eax
        ; Exact mapped bytes 7E 63: jle 0x58898cf1
        __asm _emit 0x7e
        __asm _emit 0x63
        ; Exact mapped bytes D9 86 EC 00 00 00: fld dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x86
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        mov dword ptr [esi + 118h], eax
        mov eax, dword ptr [esi + 128h]
        mov ecx, dword ptr [esi + eax*4 + 11ch]
        sub ecx, 0fh
        mov dword ptr [esp + 4], ecx
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
        ; Exact mapped bytes D9 5C 24 04: fstp dword ptr [esp + 4]
        __asm _emit 0xd9
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes D8 64 24 04: fsub dword ptr [esp + 4]
        __asm _emit 0xd8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x04
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
        ; Exact mapped bytes E8 CC 3F 0E 00: call 0x5897cca0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e8h]
        push eax
        ; Exact mapped bytes E8 80 A6 06 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa6
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [esi + 128h]
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 82 F9 FF FF: call 0x58898670
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ecx
        ret
        ; Exact mapped bytes D9 05 30 01 9A 58: fld dword ptr [0x589a0130]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0e8h]
        push 0feh
        ; Exact mapped bytes D9 9E EC 00 00 00: fstp dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 53 A6 06 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xa6
        __asm _emit 0x06
        __asm _emit 0x00
        pop esi
        pop ecx
        ret
    }
}
