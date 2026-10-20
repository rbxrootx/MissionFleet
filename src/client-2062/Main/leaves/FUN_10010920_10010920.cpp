// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10010920 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_10010920_10010920() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D F8 56 1C 10: mov ecx, dword ptr [0x101c56f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 8B 81 D8 00 00 00: mov ax, word ptr [ecx + 0xd8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 42 B0 05 00: call 0x1006b980
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xb0
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 E7 53 04 00: call 0x10055d30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x53
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x10010958
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes 8B 0D FC 56 1C 10: mov ecx, dword ptr [0x101c56fc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xfc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 38 54 04 00: call 0x10055d90
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x00
        mov dl, byte ptr [esi + 114h]
        mov eax, dword ptr [esi + 0b0h]
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        and edx, 7fh
        push 3
        push edx
        push eax
        ; Exact mapped bytes E8 3A BF 03 00: call 0x1004c8b0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        pop esi
        mov dword ptr [ecx + 134h], 1
        ret
    }
}
