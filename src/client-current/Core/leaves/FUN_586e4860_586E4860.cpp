// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E4860 .. +0x1D2 bytes.
extern "C" __declspec(naked) void FUN_586e4860_586E4860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 21 DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x21
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 2
        cmp eax, edx
        ; Exact mapped bytes 7C 1B: jl 0x586e489d
        __asm _emit 0x7c
        __asm _emit 0x1b
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 21 DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x21
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 0cah
        cmp eax, edx
        ; Exact mapped bytes 7C 38: jl 0x586e48d5
        __asm _emit 0x7c
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 08 78 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x78
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        sub edx, 4
        cmp eax, edx
        ; Exact mapped bytes 0F 8C 74 01 00 00: jl 0x586e4a2d
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC 77 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x77
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 60h
        cmp eax, edx
        ; Exact mapped bytes 0F 8D 58 01 00 00: jge 0x586e4a2d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E0 20 DA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        mov esi, eax
        mov eax, dword ptr [ebp - 4]
        sub esi, dword ptr [eax + 4]
        add esi, 4
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA 20 DA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 13 11 DB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x11
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 3e80h
        cdq
        idiv ecx
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        shl esi, 6
        sub esi, 200h
        mov dword ptr [ebp - 0ch], esi
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B 77 DA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x77
        __asm _emit 0xda
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        sub esi, dword ptr [edx + 8]
        add esi, 0ch
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A5 20 DA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CE 10 DB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x10
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 2ee0h
        cdq
        idiv ecx
        cdq
        sub eax, edx
        sar eax, 1
        sub esi, eax
        shl esi, 6
        sub esi, 180h
        mov dword ptr [ebp - 8], esi
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7D 09: jge 0x586e496e
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 4E: jmp 0x586e49bc
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 20 DA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 10 DB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x10
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0fa000h
        cdq
        idiv ecx
        mov edx, 3200h
        sub edx, eax
        cmp dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 7E 26: jle 0x586e49bc
        __asm _emit 0x7e
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3F 20 DA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 68 10 DB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0fa000h
        cdq
        idiv ecx
        mov edx, 3200h
        sub edx, eax
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 09: jge 0x586e49cb
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 4E: jmp 0x586e4a19
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 0A 20 DA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x20
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 33 10 DB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x10
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0bb800h
        cdq
        idiv ecx
        mov edx, 1900h
        sub edx, eax
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7E 26: jle 0x586e4a19
        __asm _emit 0x7e
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 1F DA FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x1f
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 0B 10 DB FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x10
        __asm _emit 0xdb
        __asm _emit 0xff
        mov ecx, eax
        mov eax, 0bb800h
        cdq
        idiv ecx
        mov edx, 1900h
        sub edx, eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 74 75 E7 FF: call 0x5855bfa0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
