// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Ghidra shows ordered field copies from the host table into fixed renderer globals,
// followed by return 1; the table's field meanings remain unresolved. The exact
// native instruction form is retained because MSVC's high-level byte/word-store
// code generation differs from this captured function.
// Indexed function extent: 0x58907CE0 .. +0x24A bytes.
extern "C" __declspec(naked) void FUN_58907ce0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 89 0D C4 84 A2 58: mov dword ptr [0x58a284c4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes 89 15 C0 84 A2 58: mov dword ptr [0x58a284c0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 89 0D F0 DF 9C 58: mov dword ptr [0x589cdff0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 89 15 04 85 A2 58: mov dword ptr [0x58a28504], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 89 0D 08 85 A2 58: mov dword ptr [0x58a28508], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x08
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes 89 15 0C 85 A2 58: mov dword ptr [0x58a2850c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 18h]
        ; Exact mapped bytes 89 0D 34 85 A2 58: mov dword ptr [0x58a28534], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 89 15 38 85 A2 58: mov dword ptr [0x58a28538], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 89 0D 30 85 A2 58: mov dword ptr [0x58a28530], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 24h]
        ; Exact mapped bytes 89 15 3C 85 A2 58: mov dword ptr [0x58a2853c], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 28h]
        ; Exact mapped bytes 89 0D 40 85 A2 58: mov dword ptr [0x58a28540], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x40
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 2ch]
        ; Exact mapped bytes 89 15 44 85 A2 58: mov dword ptr [0x58a28544], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes 89 0D 14 85 A2 58: mov dword ptr [0x58a28514], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 34h]
        ; Exact mapped bytes 89 15 18 85 A2 58: mov dword ptr [0x58a28518], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 38h]
        ; Exact mapped bytes 89 0D F4 DF 9C 58: mov dword ptr [0x589cdff4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [eax + 3ch]
        ; Exact mapped bytes 89 15 F8 DF 9C 58: mov dword ptr [0x589cdff8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 40h]
        ; Exact mapped bytes 89 0D FC DF 9C 58: mov dword ptr [0x589cdffc], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x9c
        __asm _emit 0x58
        mov edx, dword ptr [eax + 44h]
        ; Exact mapped bytes 89 15 00 E0 9C 58: mov dword ptr [0x589ce000], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xe0
        __asm _emit 0x9c
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 48h]
        ; Exact mapped bytes 89 0D 04 E0 9C 58: mov dword ptr [0x589ce004], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0xe0
        __asm _emit 0x9c
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 4ch]
        ; Exact mapped bytes 88 15 FC 84 A2 58: mov byte ptr [0x58a284fc], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 4dh]
        ; Exact mapped bytes 88 0D FD 84 A2 58: mov byte ptr [0x58a284fd], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xfd
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 4eh]
        ; Exact mapped bytes 88 15 FE 84 A2 58: mov byte ptr [0x58a284fe], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 4fh]
        ; Exact mapped bytes 88 0D FF 84 A2 58: mov byte ptr [0x58a284ff], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 50h]
        ; Exact mapped bytes 88 15 00 85 A2 58: mov byte ptr [0x58a28500], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 51h]
        ; Exact mapped bytes 88 0D 01 85 A2 58: mov byte ptr [0x58a28501], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 52h]
        ; Exact mapped bytes 88 15 02 85 A2 58: mov byte ptr [0x58a28502], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0x02
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 53h]
        ; Exact mapped bytes 88 0D 03 85 A2 58: mov byte ptr [0x58a28503], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 54h]
        ; Exact mapped bytes 88 15 F4 84 A2 58: mov byte ptr [0x58a284f4], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 55h]
        ; Exact mapped bytes 88 0D F5 84 A2 58: mov byte ptr [0x58a284f5], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xf5
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 56h]
        ; Exact mapped bytes 88 15 F6 84 A2 58: mov byte ptr [0x58a284f6], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xf6
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 57h]
        ; Exact mapped bytes 88 0D F7 84 A2 58: mov byte ptr [0x58a284f7], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xf7
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 58h]
        ; Exact mapped bytes 88 15 F8 84 A2 58: mov byte ptr [0x58a284f8], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 59h]
        ; Exact mapped bytes 88 0D F9 84 A2 58: mov byte ptr [0x58a284f9], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xf9
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 5ah]
        ; Exact mapped bytes 88 15 FA 84 A2 58: mov byte ptr [0x58a284fa], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xfa
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 5bh]
        ; Exact mapped bytes 88 0D FB 84 A2 58: mov byte ptr [0x58a284fb], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xfb
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 5ch]
        ; Exact mapped bytes 88 15 EC 84 A2 58: mov byte ptr [0x58a284ec], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 5dh]
        ; Exact mapped bytes 88 0D ED 84 A2 58: mov byte ptr [0x58a284ed], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xed
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 5eh]
        ; Exact mapped bytes 88 15 EE 84 A2 58: mov byte ptr [0x58a284ee], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xee
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 5fh]
        ; Exact mapped bytes 88 0D EF 84 A2 58: mov byte ptr [0x58a284ef], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xef
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 60h]
        ; Exact mapped bytes 88 15 F0 84 A2 58: mov byte ptr [0x58a284f0], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 61h]
        ; Exact mapped bytes 88 0D F1 84 A2 58: mov byte ptr [0x58a284f1], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xf1
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, byte ptr [eax + 62h]
        ; Exact mapped bytes 88 15 F2 84 A2 58: mov byte ptr [0x58a284f2], dl
        __asm _emit 0x88
        __asm _emit 0x15
        __asm _emit 0xf2
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, byte ptr [eax + 63h]
        ; Exact mapped bytes 88 0D F3 84 A2 58: mov byte ptr [0x58a284f3], cl
        __asm _emit 0x88
        __asm _emit 0x0d
        __asm _emit 0xf3
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 64h]
        ; Exact mapped bytes 89 15 E4 84 A2 58: mov dword ptr [0x58a284e4], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 89 0D E8 84 A2 58: mov dword ptr [0x58a284e8], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 6ch]
        ; Exact mapped bytes 89 15 DC 84 A2 58: mov dword ptr [0x58a284dc], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 70h]
        ; Exact mapped bytes 89 0D E0 84 A2 58: mov dword ptr [0x58a284e0], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xe0
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [eax + 74h]
        ; Exact mapped bytes 66 89 15 D4 84 A2 58: mov word ptr [0x58a284d4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [eax + 76h]
        ; Exact mapped bytes 66 89 0D D6 84 A2 58: mov word ptr [0x58a284d6], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd6
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [eax + 78h]
        ; Exact mapped bytes 66 89 15 D8 84 A2 58: mov word ptr [0x58a284d8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [eax + 7ah]
        ; Exact mapped bytes 66 89 0D DA 84 A2 58: mov word ptr [0x58a284da], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xda
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [eax + 7ch]
        ; Exact mapped bytes 66 89 15 CC 84 A2 58: mov word ptr [0x58a284cc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [eax + 7eh]
        ; Exact mapped bytes 66 89 0D CE 84 A2 58: mov word ptr [0x58a284ce], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xce
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, word ptr [eax + 80h]
        ; Exact mapped bytes 66 89 15 D0 84 A2 58: mov word ptr [0x58a284d0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx ecx, word ptr [eax + 82h]
        ; Exact mapped bytes 66 89 0D D2 84 A2 58: mov word ptr [0x58a284d2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 84h]
        ; Exact mapped bytes 89 15 20 85 A2 58: mov dword ptr [0x58a28520], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes 89 0D 24 85 A2 58: mov dword ptr [0x58a28524], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [eax + 1cch]
        ; Exact mapped bytes 89 15 C8 84 A2 58: mov dword ptr [0x58a284c8], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, 1
        ret
    }
}
