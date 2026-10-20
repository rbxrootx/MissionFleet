// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B3B30 .. +0x143 bytes.
extern "C" __declspec(naked) void FUN_584b3b30_584B3B30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 174h], 0
        ; Exact mapped bytes 7F 07: jg 0x584b3b4c
        __asm _emit 0x7f
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x584b3c71
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        push edx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF D6 0A 00: call 0x58561220
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 0F 87 E2 00 00 00: ja 0x584b3c50
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 24 85 78 3C 4B 58: jmp dword ptr [eax*4 + 0x584b3c78]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x3c
        __asm _emit 0x4b
        __asm _emit 0x58
        mov al, 1
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x584b3c71
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 6C 36 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        push 0
        push 320h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D6 51 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x584b3c71
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 4A 36 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 0
        push 0
        push 0
        push 321h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B4 51 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x584b3c71
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 28 36 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        push 0
        push 322h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 92 51 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x584b3c71
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 06 36 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x36
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 0
        push 323h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 70 51 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 6D: jmp 0x584b3c71
        __asm _emit 0xeb
        __asm _emit 0x6d
        ; Exact mapped bytes E8 E7 35 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 174h]
        push edx
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8F D4 0A 00: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xd4
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 18 0E FD FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x0e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 0
        lea edx, [eax + ecx + 40h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 0
        push 0
        push 325h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 24 51 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 21: jmp 0x584b3c71
        __asm _emit 0xeb
        __asm _emit 0x21
        ; Exact mapped bytes E8 9B 35 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x35
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 324h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 05 51 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b3c71
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
    }
}
