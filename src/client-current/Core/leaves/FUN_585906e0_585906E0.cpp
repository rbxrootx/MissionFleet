// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585906E0 .. +0x15C bytes.
extern "C" __declspec(naked) void FUN_585906e0_585906E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 2
        ; Exact mapped bytes 0F 85 42 01 00 00: jne 0x58590838
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 72 1A: jb 0x58590719
        __asm _emit 0x72
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 136h
        ; Exact mapped bytes 73 0E: jae 0x58590719
        __asm _emit 0x73
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5D FF FF FF: call 0x58590670
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 10 01 00 00: jmp 0x58590829
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 136h
        ; Exact mapped bytes 75 79: jne 0x5859079e
        __asm _emit 0x75
        __asm _emit 0x79
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 8]
        mov dword ptr [ebp - 8], ecx
        push 186a0h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        sub eax, 1a4h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        sub edx, 1eh
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 26 AF FF FF: call 0x5858b680
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 8]
        mov dword ptr [ebp - 0ch], edx
        push 186a0h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        sub ecx, 1a4h
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 46h
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F0 AE FF FF: call 0x5858b680
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xae
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 FE FF FF: call 0x58590670
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x58590829
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 136h
        ; Exact mapped bytes 76 17: jbe 0x585907c1
        __asm _emit 0x76
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1ch], 1a4h
        ; Exact mapped bytes 73 0B: jae 0x585907c1
        __asm _emit 0x73
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B2 FE FF FF: call 0x58590670
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 68: jmp 0x58590829
        __asm _emit 0xeb
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 1a4h
        ; Exact mapped bytes 75 5C: jne 0x58590829
        __asm _emit 0x75
        __asm _emit 0x5c
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8B FD FF FF: call 0x58590560
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 3
        ; Exact mapped bytes 83 3D BC 35 90 58 00: cmp dword ptr [0x589035bc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xbc
        __asm _emit 0x35
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 28: je 0x58590810
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5D FE FF FF: call 0x58590650
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x58590810
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E FE FF FF: call 0x58590650
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 56 EF FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x56
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F5 4F F0 FF: call 0x58495810
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x4f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        push 5
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 48 00 00 00: call 0x58590870
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 1ch], eax
        mov esp, ebp
        pop ebp
        ret
    }
}
