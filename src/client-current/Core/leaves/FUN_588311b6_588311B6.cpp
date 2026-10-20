// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588311B6 .. +0xD0 bytes.
extern "C" __declspec(naked) void FUN_588311b6_588311B6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 31ch
        push 17h
        ; Exact mapped bytes FF 15 B8 43 89 58: call dword ptr [0x588943b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588311d0
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 8]
        int 29h
        ; Exact mapped bytes A3 C8 64 96 58: mov dword ptr [0x589664c8], eax
        __asm _emit 0xa3
        __asm _emit 0xc8
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 0D C4 64 96 58: mov dword ptr [0x589664c4], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 15 C0 64 96 58: mov dword ptr [0x589664c0], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 1D BC 64 96 58: mov dword ptr [0x589664bc], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0xbc
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 35 B8 64 96 58: mov dword ptr [0x589664b8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 89 3D B4 64 96 58: mov dword ptr [0x589664b4], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0xb4
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8C 15 E0 64 96 58: mov word ptr [0x589664e0], ss
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8C 0D D4 64 96 58: mov word ptr [0x589664d4], cs
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8C 1D B0 64 96 58: mov word ptr [0x589664b0], ds
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x1d
        __asm _emit 0xb0
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8C 05 AC 64 96 58: mov word ptr [0x589664ac], es
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0xac
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8C 25 A8 64 96 58: mov word ptr [0x589664a8], fs
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x25
        __asm _emit 0xa8
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 66 8C 2D A4 64 96 58: mov word ptr [0x589664a4], gs
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x2d
        __asm _emit 0xa4
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        pushfd
        ; Exact mapped bytes 8F 05 D8 64 96 58: pop dword ptr [0x589664d8]
        __asm _emit 0x8f
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes A3 CC 64 96 58: mov dword ptr [0x589664cc], eax
        __asm _emit 0xa3
        __asm _emit 0xcc
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 4]
        ; Exact mapped bytes A3 D0 64 96 58: mov dword ptr [0x589664d0], eax
        __asm _emit 0xa3
        __asm _emit 0xd0
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        lea eax, [ebp + 8]
        ; Exact mapped bytes A3 DC 64 96 58: mov dword ptr [0x589664dc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 31ch]
        ; Exact mapped bytes A1 D0 64 96 58: mov eax, dword ptr [0x589664d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x64
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 D4 63 96 58: mov dword ptr [0x589663d4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes C7 05 C8 63 96 58 09 04 00 C0: mov dword ptr [0x589663c8], 0xc0000409
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0xc0
        ; Exact mapped bytes C7 05 CC 63 96 58 01 00 00 00: mov dword ptr [0x589663cc], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xcc
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 D8 63 96 58 01 00 00 00: mov dword ptr [0x589663d8], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0xd8
        __asm _emit 0x63
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        pop eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 589663dch], ecx
        push 588c1c60h
        ; Exact mapped bytes E8 03 FE FF FF: call 0x58831086
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        leave
        ret
    }
}
