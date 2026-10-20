// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00495470 .. +0x21E bytes.
extern "C" __declspec(naked) void FUN_00495470_00495470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 4]
        mov ecx, dword ptr [ecx + 24h]
        ; Exact mapped bytes E8 87 F7 05 00: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 59 72 0A 00: call 0x53c6eb
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x72
        __asm _emit 0x0a
        __asm _emit 0x00
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 AF 08 0A 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 54: je 0x4954fc
        __asm _emit 0x74
        __asm _emit 0x54
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 A1 08 0A 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        lea edx, [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 8B 76 0A 00: call 0x53cb44
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EF 6B 0A 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E3 6B 0A 00: call 0x53c0af
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x6b
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov eax, dword ptr [ebp - 24h]
        sub eax, dword ptr [ebp - 2ch]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov eax, dword ptr [ebp - 28h]
        sub eax, dword ptr [ebp - 30h]
        cdq
        sub eax, edx
        sar eax, 1
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 0C 9D 05 00: call 0x4ef1fe
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 33 9E 05 00: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 48h
        push ecx
        push 586cb8h
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax + 4ch]
        mov eax, dword ptr [edx]
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7C 76: jl 0x49559e
        __asm _emit 0x7c
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 4ch
        push ecx
        push 58db50h
        push 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 48h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 75 07: jne 0x49555b
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 80004003h
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7D 38: jge 0x495599
        __asm _emit 0x7d
        __asm _emit 0x38
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2A: je 0x495591
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 77 9C 05 00: call 0x4ef1fe
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9E 9D 05 00: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x9d
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x49568a
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x49564c
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 1ch]
        push ecx
        push 586cc8h
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov edx, dword ptr [eax + 4ch]
        mov eax, dword ptr [edx]
        push ecx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7D 08: jge 0x4955cf
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes E9 BB 00 00 00: jmp 0x49568a
        __asm _emit 0xe9
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 34h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 75 0A: jne 0x4955fb
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004005h
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x49568a
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        add edx, 8
        push edx
        push 58e560h
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 34h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 7D 05: jge 0x49562c
        __asm _emit 0x7d
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes EB 5E: jmp 0x49568a
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp - 38h]
        add eax, 0ch
        push eax
        push 58e550h
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 8]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 3D 01 00 00: call 0x495791
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 2A: je 0x495687
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        mov ecx, dword ptr [ebp - 4]
        sub ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 81 9B 05 00: call 0x4ef1fe
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A8 9C 05 00: call 0x4ef32f
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov esp, ebp
        pop ebp
        ret
    }
}
