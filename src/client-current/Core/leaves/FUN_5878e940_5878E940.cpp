// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5878E940 .. +0x152 bytes.
extern "C" __declspec(naked) void FUN_5878e940_5878E940() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0a0h], 1
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0b8h
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F0 2B FF FF: call 0x58781560
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 24h]
        push ecx
        ; Exact mapped bytes 8B 0D 2C 7C 94 58: mov ecx, dword ptr [0x58947c2c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x7c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B 82 D6 FF: call 0x584f6bf0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x82
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4D D5 CF FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd5
        __asm _emit 0xcf
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 2A: jle 0x5878e9c1
        __asm _emit 0x7e
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 0ch]
        movzx esi, byte ptr [edx + 35ch]
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 88 D4 FF: call 0x584d71d0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx eax, ax
        cmp esi, eax
        ; Exact mapped bytes 75 0C: jne 0x5878e9bf
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C2 A1 E2 FF: call 0x585b8b80
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa1
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 32: jmp 0x5878e9f3
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 0ch]
        movzx esi, byte ptr [ecx + 35ch]
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FA 87 D4 FF: call 0x584d71d0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x87
        __asm _emit 0xd4
        __asm _emit 0xff
        movzx edx, ax
        cmp esi, edx
        ; Exact mapped bytes 75 16: jne 0x5878e9f3
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 10: je 0x5878e9f3
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E 84 E2 FF: call 0x585b6e60
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x84
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 0ach]
        ; Exact mapped bytes E8 CF 84 F9 FF: call 0x58726ed0
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        movzx edx, word ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 7E 75: jle 0x5878ea7f
        __asm _emit 0x7e
        __asm _emit 0x75
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        shr edx, 1
        and edx, 1fh
        imul eax, edx, 18h
        mov ecx, dword ptr [ebp + 10h]
        lea edx, [ecx + eax + 0b8h]
        mov dword ptr [ebp + 10h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5878ea3c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        movzx ecx, word ptr [ebp + 0ch]
        cmp dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 7D 19: jge 0x5878ea5e
        __asm _emit 0x7d
        __asm _emit 0x19
        imul edx, dword ptr [ebp - 4], 180h
        add edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C5 23 FF FF: call 0x58780e20
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB D5: jmp 0x5878ea33
        __asm _emit 0xeb
        __asm _emit 0xd5
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C7 86 D4 FF: call 0x584d7130
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 CF F1 FF: call 0x586aba50
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcf
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0a8h]
        ; Exact mapped bytes E8 92 59 F9 FF: call 0x58724410
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 26 6A E2 FF: call 0x585b54b0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6a
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
