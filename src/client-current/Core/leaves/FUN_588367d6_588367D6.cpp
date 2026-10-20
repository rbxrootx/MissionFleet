// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588367D6 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_588367d6_588367D6() {
    __asm {
        ; Exact mapped bytes 80 3D 30 84 96 58 00: cmp byte ptr [0x58968430], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x30
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 03: je 0x588367e2
        __asm _emit 0x74
        __asm _emit 0x03
        mov al, 1
        ret
        push esi
        push 588f1360h
        ; Exact mapped bytes E8 66 5B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes FF 15 E0 42 89 58: call dword ptr [0x588942e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58836886
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588f1374h
        ; Exact mapped bytes E8 4A 5B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 85 03 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 90 7A 96 58: mov dword ptr [0x58967a90], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 6C: je 0x58836886
        __asm _emit 0x74
        __asm _emit 0x6c
        push 588f1394h
        ; Exact mapped bytes E8 2F 5B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 6A 03 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 94 7A 96 58: mov dword ptr [0x58967a94], eax
        __asm _emit 0xa3
        __asm _emit 0x94
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 51: je 0x58836886
        __asm _emit 0x74
        __asm _emit 0x51
        push 588f13a8h
        ; Exact mapped bytes E8 14 5B 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x5b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 4F 03 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 98 7A 96 58: mov dword ptr [0x58967a98], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x58836886
        __asm _emit 0x74
        __asm _emit 0x36
        push 588f13bch
        ; Exact mapped bytes E8 F9 5A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 34 03 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 9C 7A 96 58: mov dword ptr [0x58967a9c], eax
        __asm _emit 0xa3
        __asm _emit 0x9c
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x58836886
        __asm _emit 0x74
        __asm _emit 0x1b
        push 588f13d0h
        ; Exact mapped bytes E8 DE 5A 00 00: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        push esi
        ; Exact mapped bytes E8 19 03 00 00: call 0x58836b96
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A3 A0 7A 96 58: mov dword ptr [0x58967aa0], eax
        __asm _emit 0xa3
        __asm _emit 0xa0
        __asm _emit 0x7a
        __asm _emit 0x96
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x5883688a
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        pop esi
        ret
        ; Exact mapped bytes C6 05 30 84 96 58 01: mov byte ptr [0x58968430], 1
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        mov al, 1
        pop esi
        ret
    }
}
