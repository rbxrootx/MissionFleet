// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586ACF60 .. +0x14B bytes.
extern "C" __declspec(naked) void FUN_586acf60_586ACF60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC F4 FF FF: call 0x586ac460
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FE F4 FF FF: call 0x586ac480
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 190h]
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 190h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x586acfae
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 05 F1 DD FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf1
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 74: je 0x586ad028
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 24 EF DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xef
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        imul eax, dword ptr [ebp + 8], 43h
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 74 82 10 00: call 0x587b5240
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x82
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 190h]
        add edx, 7
        cmp dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 7D 26: jge 0x586ad004
        __asm _emit 0x7d
        __asm _emit 0x26
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 190h]
        ; Exact mapped bytes 7C 18: jl 0x586ad004
        __asm _emit 0x7c
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EC EE DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xee
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8F 8F DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x8f
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 16: jmp 0x586ad01a
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D4 EE DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xee
        __asm _emit 0xdd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 77 8F DD FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x8f
        __asm _emit 0xdd
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes E9 7B FF FF FF: jmp 0x586acfa3
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 75 19: jne 0x586ad04d
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d0h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F6 27 DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x27
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586ad064
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 20h], ecx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 DD 27 DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x27
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 24h]
        sub edx, 7
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 190h], edx
        ; Exact mapped bytes 7C 19: jl 0x586ad08e
        __asm _emit 0x7c
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0d4h]
        mov dword ptr [ebp - 28h], edx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B5 27 DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x27
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 17: jmp 0x586ad0a5
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d4h]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 9C 27 DF FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x27
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
