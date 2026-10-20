// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58881E30 .. +0x179 bytes.
extern "C" __declspec(naked) void FUN_58881e30() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 4D 22 07 00: call 0x588f4090
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 0F 84 3E 01 00 00: je 0x58881f8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ecx + 50h]
        test edx, edx
        ; Exact mapped bytes 0F 84 33 01 00 00: je 0x58881f8b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov eax, 0aah
        ; Exact mapped bytes 66 33 42 08: xor ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x08
        push ebp
        mov ebp, dword ptr [esp + 14h]
        push edi
        movzx ebx, ax
        mov eax, 0aah
        ; Exact mapped bytes 66 33 42 0A: xor ax, word ptr [edx + 0xa]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x42
        __asm _emit 0x0a
        mov edi, 0aah
        ; Exact mapped bytes 66 33 7A 0C: xor di, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x7a
        __asm _emit 0x0c
        mov edx, ebp
        sub edx, 29h
        movzx eax, ax
        movzx edi, di
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x58881f4a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub edx, 1
        ; Exact mapped bytes 0F 85 BD 00 00 00: jne 0x58881f54
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        ; Exact mapped bytes 66 3B FA: cmp di, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xfa
        ; Exact mapped bytes 0F 82 D3 00 00 00: jb 0x58881f78
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, dx
        movzx edi, di
        sub edi, edx
        movzx eax, ax
        push edi
        movzx edx, bx
        push eax
        push edx
        ; Exact mapped bytes E8 85 AC EF FF: call 0x5877cb40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [esi + 80h]
        push 1
        mov ecx, esi
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 A0 F0 FF FF: call 0x58880f70
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 264h]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 7E 4A: jle 0x58881f26
        __asm _emit 0x7e
        __asm _emit 0x4a
        push ebp
        mov ecx, esi
        ; Exact mapped bytes E8 2C 99 FF FF: call 0x5887b810
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        cmp dword ptr [esi + 84h], edi
        ; Exact mapped bytes 7E 12: jle 0x58881f00
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edi, edi
        mov ecx, esi
        ; Exact mapped bytes E8 39 9E FF FF: call 0x5887bd30
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        cmp edi, dword ptr [esi + 84h]
        ; Exact mapped bytes 7C F0: jl 0x58881ef0
        __asm _emit 0x7c
        __asm _emit 0xf0
        lea edi, [esi + 244h]
        mov ebx, 5
        ; Exact mapped bytes EB 03: jmp 0x58881f10
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [esi + 88h]
        mov ecx, dword ptr [edi]
        push edx
        ; Exact mapped bytes E8 12 69 08 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x69
        __asm _emit 0x08
        __asm _emit 0x00
        add edi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 EA: jne 0x58881f10
        __asm _emit 0x75
        __asm _emit 0xea
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 17: je 0x58881f43
        __asm _emit 0x74
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 1145h
        ; Exact mapped bytes E8 B4 9B EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x9b
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED 2D EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x2d
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop ebp
        pop ebx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov edx, 0ah
        ; Exact mapped bytes E9 48 FF FF FF: jmp 0x58881e9c
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 E9: je 0x58881f43
        __asm _emit 0x74
        __asm _emit 0xe9
        push 0
        push 0
        push 0
        push 1135h
        ; Exact mapped bytes E8 86 9B EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x9b
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BF 2D EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x2d
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop ebp
        pop ebx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 1146h
        mov ecx, esi
        ; Exact mapped bytes E8 6C 84 FF FF: call 0x5887a3f0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop ebp
        pop ebx
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [esi + 68h], 0
        ; Exact mapped bytes 74 B5: je 0x58881f46
        __asm _emit 0x74
        __asm _emit 0xb5
        push 0
        push 0
        push 0
        push 1135h
        ; Exact mapped bytes E8 4F 9B EE FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x9b
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 88 2D EE FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x2d
        __asm _emit 0xee
        __asm _emit 0xff
        pop esi
    }
}
