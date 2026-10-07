// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 106 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58880F00 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_58880f00_segment_00() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        mov eax, dword ptr [esi + 24h]
        push edi
        mov edi, ecx
        ; Exact mapped bytes 8B 0D 1C 48 A2 58: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 09 7C EF FF: call 0x58778b20
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x7c
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov dl, byte ptr [ecx + 0d54h]
        and dl, 0fh
        cmp dl, byte ptr [eax + 35ch]
        ; Exact mapped bytes 75 1D: jne 0x58880f4b
        __asm _emit 0x75
        __asm _emit 0x1d
        mov eax, dword ptr [eax]
        push esi
        push 1
        push eax
        push 1
        push 1
        push 0
        ; Exact mapped bytes E8 51 F1 F5 FF: call 0x587e0090
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xf1
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, edi
        ; Exact mapped bytes E8 AA FE FF FF: call 0x58880df0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [esi + 0b8h]
        push ecx
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        ; Exact mapped bytes E8 12 2F 07 00: call 0x588f3e70
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x2f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, edi
        ; Exact mapped bytes E8 8B FE FF FF: call 0x58880df0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
