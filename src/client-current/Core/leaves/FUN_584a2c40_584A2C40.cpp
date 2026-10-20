// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A2C40 .. +0x14D bytes.
extern "C" __declspec(naked) void FUN_584a2c40_584A2C40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 8E 33 01 00 00: jle 0x584a2d89
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 18 00 00: call 0x584a4530
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584a2c71
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 8D 09 01 00 00: jge 0x584a2d89
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6C 90 FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 20h], 0
        ; Exact mapped bytes 7E 1B: jle 0x584a2cc0
        __asm _emit 0x7e
        __asm _emit 0x1b
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 20h]
        sub edx, 1
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 20h], edx
        ; Exact mapped bytes EB A8: jmp 0x584a2c68
        __asm _emit 0xeb
        __asm _emit 0xa8
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 3C FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 69: je 0x584a2d3a
        __asm _emit 0x74
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F3 50 FE FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 710h], 19h
        ; Exact mapped bytes 7C 2C: jl 0x584a2d16
        __asm _emit 0x7c
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1A 11 00 00: call 0x584a3e10
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x584a2d07
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A 19 00 00: call 0x584a4610
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 710h], 0
        ; Exact mapped bytes EB 15: jmp 0x584a2d2b
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 710h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 710h], edx
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 14 00 00: call 0x584a4220
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4A: jmp 0x584a2d84
        __asm _emit 0xeb
        __asm _emit 0x4a
        imul edx, dword ptr [ebp - 8], 38h
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx + 18h], 0
        ; Exact mapped bytes 7E 3C: jle 0x584a2d84
        __asm _emit 0x7e
        __asm _emit 0x3c
        imul ecx, dword ptr [ebp - 8], 38h
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx + 1ch], 0
        ; Exact mapped bytes 75 2E: jne 0x584a2d84
        __asm _emit 0x75
        __asm _emit 0x2e
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 18h]
        mov dword ptr [ebp - 18h], edx
        imul eax, dword ptr [ebp - 8], 38h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax + 18h], 0
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CD 0D 00 00: call 0x584a3b50
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 DF FE FF FF: jmp 0x584a2c68
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
