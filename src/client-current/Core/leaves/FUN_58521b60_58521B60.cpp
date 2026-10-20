// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521B60 .. +0x114 bytes.
extern "C" __declspec(naked) void FUN_58521b60_58521B60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 74 19: je 0x58521b8b
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A AE FE FF: call 0x5850c9d0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x58521c6e
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 81 FE FF: call 0x58509ca0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7C 75: jl 0x58521c20
        __asm _emit 0x7c
        __asm _emit 0x75
        ; Exact mapped bytes 7F 06: jg 0x58521bb3
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 6D: jbe 0x58521c20
        __asm _emit 0x76
        __asm _emit 0x6d
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 67: jl 0x58521c20
        __asm _emit 0x7c
        __asm _emit 0x67
        ; Exact mapped bytes 7F 06: jg 0x58521bc1
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 76 5F: jbe 0x58521c20
        __asm _emit 0x76
        __asm _emit 0x5f
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7F 16: jg 0x58521bdf
        __asm _emit 0x7f
        __asm _emit 0x16
        ; Exact mapped bytes 7C 08: jl 0x58521bd3
        __asm _emit 0x7c
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 73 0C: jae 0x58521bdf
        __asm _emit 0x73
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 9E FE FF: call 0x5850ba40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 FB 8A F8 FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 10h]
        sbb edx, dword ptr [ebp - 8]
        mov dword ptr [ebp + 0ch], ecx
        mov dword ptr [ebp + 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 9D FE FF: call 0x5850b9d0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7C 3C: jl 0x58521c62
        __asm _emit 0x7c
        __asm _emit 0x3c
        ; Exact mapped bytes 7F 06: jg 0x58521c2e
        __asm _emit 0x7f
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 76 34: jbe 0x58521c62
        __asm _emit 0x76
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 2B: je 0x58521c62
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 DF 8D 33 00: call 0x5885aa2c
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x8d
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 10h
        xor ecx, ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, eax
        mov eax, dword ptr [ebp + 10h]
        sbb eax, ecx
        mov dword ptr [ebp + 0ch], edx
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [ebp - 14h]
        sub eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        sbb edx, dword ptr [ebp + 10h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
