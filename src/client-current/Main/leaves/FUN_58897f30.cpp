// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58897F30 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_58897f30() {
    __asm {
        mov eax, dword ptr [esp + 10h]
        push esi
        mov esi, ecx
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x58897f40
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 1
        cmp dword ptr [esp + 10h], 0
        push edi
        ; Exact mapped bytes 74 65: je 0x58897fad
        __asm _emit 0x74
        __asm _emit 0x65
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 74 3A: je 0x58897f89
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [esi + 148h]
        add ecx, eax
        cmp ecx, 80h
        ; Exact mapped bytes 0F 8F A8 00 00 00: jg 0x5889800b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + edx*4 + 0f4h]
        mov edi, dword ptr [ecx + 64h]
        cmp edi, dword ptr [esi + edx*4 + 188h]
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x5889800b
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 1C F3 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf3
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x5889800b
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + edx*4 + 0d8h]
        mov edi, dword ptr [ecx + 64h]
        mov edx, dword ptr [esi + edx*4 + 0f4h]
        add edi, eax
        cmp edi, dword ptr [edx + 64h]
        ; Exact mapped bytes 7F 66: jg 0x5889800b
        __asm _emit 0x7f
        __asm _emit 0x66
        push eax
        ; Exact mapped bytes E8 F5 F2 06 00: call 0x589072a0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 5E: jmp 0x5889800b
        __asm _emit 0xeb
        __asm _emit 0x5e
        cmp dword ptr [esp + 0ch], 0
        ; Exact mapped bytes 74 46: je 0x58897ffa
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [esp + 10h]
        mov edi, dword ptr [esi + 184h]
        mov ecx, dword ptr [esi + edx*4 + 0f4h]
        cmp edx, edi
        mov edx, dword ptr [esi + edx*4 + 0d8h]
        ; Exact mapped bytes 74 0D: je 0x58897fdd
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edi, dword ptr [ecx + 64h]
        sub edi, eax
        cmp edi, dword ptr [edx + 64h]
        ; Exact mapped bytes 7C 31: jl 0x5889800b
        __asm _emit 0x7c
        __asm _emit 0x31
        push eax
        ; Exact mapped bytes EB 29: jmp 0x58898006
        __asm _emit 0xeb
        __asm _emit 0x29
        push ebx
        mov ebx, dword ptr [ecx + 64h]
        sub ebx, eax
        cmp ebx, dword ptr [edx + 64h]
        pop ebx
        ; Exact mapped bytes 7C 22: jl 0x5889800b
        __asm _emit 0x7c
        __asm _emit 0x22
        mov edx, dword ptr [esi + edi*4 + 0f4h]
        mov edx, dword ptr [edx + 64h]
        sub edx, eax
        ; Exact mapped bytes 74 14: je 0x5889800b
        __asm _emit 0x74
        __asm _emit 0x14
        push eax
        ; Exact mapped bytes EB 0C: jmp 0x58898006
        __asm _emit 0xeb
        __asm _emit 0x0c
        push eax
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + eax*4 + 0d8h]
        ; Exact mapped bytes E8 F5 F2 06 00: call 0x58907300
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [esi + 1ach], 1
        pop edi
        ; Exact mapped bytes 75 07: jne 0x5889801c
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 84 F7 FF FF: call 0x588977a0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
