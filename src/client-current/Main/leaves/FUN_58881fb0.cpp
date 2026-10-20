// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881FB0 .. +0x170 bytes.
extern "C" __declspec(naked) void FUN_58881fb0() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test dword ptr [esi + 64h], 10000000h
        push edi
        mov edi, ecx
        ; Exact mapped bytes 0F 84 39 01 00 00: je 0x588820fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 264h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 0F 8E 07 01 00 00: jle 0x588820dc
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push ecx
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD 20 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x20
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x588820ba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 10h]
        mov dword ptr [eax + 60h], edx
        mov ecx, dword ptr [esi + 6ch]
        add eax, 50h
        mov dword ptr [eax + 6ch], ecx
        mov edx, dword ptr [esi + 70h]
        mov dword ptr [eax + 70h], edx
        mov ecx, dword ptr [esi + 74h]
        mov dword ptr [eax + 74h], ecx
        mov edx, dword ptr [esi + 78h]
        mov dword ptr [eax + 78h], edx
        mov ecx, dword ptr [esi + 7ch]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [esi + 80h]
        mov dword ptr [eax + 80h], edx
        mov ecx, dword ptr [esi + 84h]
        mov dword ptr [eax + 84h], ecx
        mov edx, dword ptr [esi + 88h]
        mov dword ptr [eax + 88h], edx
        lea ecx, [eax + 0c0h]
        sub esi, eax
        mov eax, 20h
        ; Exact mapped bytes 66 8B 14 0E: mov dx, word ptr [esi + ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x14
        __asm _emit 0x0e
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        add ecx, 2
        sub eax, 1
        ; Exact mapped bytes 75 F1: jne 0x58882043
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [edi + 80h]
        push 1
        mov ecx, edi
        mov dword ptr [edi + 84h], eax
        ; Exact mapped bytes E8 09 EF FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [edi + 264h]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 7E 21: jle 0x58882094
        __asm _emit 0x7e
        __asm _emit 0x21
        mov ecx, edi
        ; Exact mapped bytes E8 F6 9A FF FF: call 0x5887bb70
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        xor esi, esi
        cmp dword ptr [edi + 84h], esi
        ; Exact mapped bytes 7E 10: jle 0x58882094
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, edi
        ; Exact mapped bytes E8 A5 9C FF FF: call 0x5887bd30
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        inc esi
        cmp esi, dword ptr [edi + 84h]
        ; Exact mapped bytes 7C F0: jl 0x58882084
        __asm _emit 0x7c
        __asm _emit 0xf0
        cmp dword ptr [edi + 68h], 0
        ; Exact mapped bytes 0F 84 7D 00 00 00: je 0x5888211b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 1130h
        ; Exact mapped bytes E8 42 9A EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9a
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7B 2C EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x2c
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 68h], 0
        ; Exact mapped bytes 74 5B: je 0x5888211b
        __asm _emit 0x74
        __asm _emit 0x5b
        push 0
        push 0
        push 0
        push 1135h
        ; Exact mapped bytes E8 20 9A EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9a
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 59 2C EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x2c
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 68h], 0
        ; Exact mapped bytes 74 39: je 0x5888211b
        __asm _emit 0x74
        __asm _emit 0x39
        push 0
        push 0
        push 0
        push 1137h
        ; Exact mapped bytes E8 FE 99 EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 37 2C EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x2c
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [edi + 68h], 0
        ; Exact mapped bytes 74 17: je 0x5888211b
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 113ch
        ; Exact mapped bytes E8 DC 99 EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 15 2C EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
