// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58882120 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_58882120() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 264h]
        cmp dword ptr [eax + 64h], 0
        ; Exact mapped bytes 0F 8E D1 00 00 00: jle 0x58882204
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov ecx, dword ptr [edi]
        push ecx
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 1F 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x588821e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 DA BB EF FF: call 0x5877dd30
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xbb
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [edi]
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 2C 1F 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x1f
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 274h]
        ; Exact mapped bytes 66 83 49 24 01: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        mov eax, dword ptr [eax + 278h]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov eax, dword ptr [esi + 80h]
        push 1
        mov ecx, esi
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 E1 ED FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 264h]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 7E 25: jle 0x588821c0
        __asm _emit 0x7e
        __asm _emit 0x25
        mov ecx, esi
        ; Exact mapped bytes E8 8E 9E FF FF: call 0x5887c030
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 7E 14: jle 0x588821c0
        __asm _emit 0x7e
        __asm _emit 0x14
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 79 9B FF FF: call 0x5887bd30
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        cmp edi, dword ptr [esi + 84h]
        ; Exact mapped bytes 7C F0: jl 0x588821b0
        __asm _emit 0x7c
        __asm _emit 0xf0
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 17: je 0x588821dd
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 1133h
        ; Exact mapped bytes E8 1A 99 EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x99
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 53 2B EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x2b
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 F5: je 0x588821dd
        __asm _emit 0x74
        __asm _emit 0xf5
        push 0
        push 0
        push 0
        push 1135h
        ; Exact mapped bytes E8 F8 98 EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 31 2B EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x2b
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 D4: je 0x588821de
        __asm _emit 0x74
        __asm _emit 0xd4
        push 0
        push 0
        push 0
        push 1135h
        ; Exact mapped bytes E8 D6 98 EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x98
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0F 2B EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x2b
        __asm _emit 0xee
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
