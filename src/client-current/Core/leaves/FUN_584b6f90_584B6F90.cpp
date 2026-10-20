// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B6F90 .. +0x1CF bytes.
extern "C" __declspec(naked) void FUN_584b6f90_584B6F90() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e65ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        push 40h
        push 0
        push 0
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9E B2 FC FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588958e0h
        push 7fbch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 91 EE FC FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xee
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 74h], edx
        push 32h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4E FE FF FF: call 0x584b6e50
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 84 EF FC FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 64h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ecx + 74h]
        mov edx, 4
        mul edx
        mov ecx, 0ffffffffh
        cmovb eax, ecx
        push eax
        ; Exact mapped bytes E8 11 A0 37 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xa0
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 20h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [edx + 60h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584b7052
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 74h]
        ; Exact mapped bytes 0F 8D 98 00 00 00: jge 0x584b70f9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 70h
        ; Exact mapped bytes E8 9C 9F 37 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x9f
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 42: je 0x584b70ba
        __asm _emit 0x74
        __asm _emit 0x42
        push 0
        push 0
        push 0ffffffh
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 1ah
        push ecx
        mov edx, dword ptr [ebp + 10h]
        add edx, 96h
        push edx
        mov eax, dword ptr [ebp + 14h]
        add eax, 7
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 0ah
        push ecx
        ; Exact mapped bytes 8B 15 28 20 96 58: mov edx, dword ptr [0x58962028]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FB B2 FC FF: call 0x584823b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x584b70c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 24h], ecx
        mov byte ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 60h]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [eax + ecx*4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 60h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 28h], eax
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 ED EF FC FF: call 0x584860e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x584b7049
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 70h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 68h], 64h
        xor eax, eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 89 41 7C: mov word ptr [ecx + 0x7c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 84h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
