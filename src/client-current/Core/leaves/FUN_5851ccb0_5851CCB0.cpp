// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851CCB0 .. +0x1E0 bytes.
extern "C" __declspec(naked) void FUN_5851ccb0_5851CCB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a4h]
        sub ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 0F 84 B8 01 00 00: je 0x5851ce88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 0a4h], eax
        cmp dword ptr [ebp - 0ch], 708h
        ; Exact mapped bytes 7E 0E: jle 0x5851ccf3
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, 0e10h
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 15: jmp 0x5851cd08
        __asm _emit 0xeb
        __asm _emit 0x15
        cmp dword ptr [ebp - 0ch], 0fffff8f8h
        ; Exact mapped bytes 7D 0C: jge 0x5851cd08
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 0ch]
        add edx, 0e10h
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5851cd1a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 8D 64 01 00 00: jge 0x5851ce88
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 80h]
        add eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 80h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + eax*4 + 80h], 0
        ; Exact mapped bytes 7D 22: jge 0x5851cd73
        __asm _emit 0x7d
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 80h]
        add ecx, 0e10h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 80h], ecx
        ; Exact mapped bytes EB 33: jmp 0x5851cda6
        __asm _emit 0xeb
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 80h], 0e10h
        ; Exact mapped bytes 7C 20: jl 0x5851cda6
        __asm _emit 0x7c
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 80h]
        sub edx, 0e10h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 80h], edx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 0F 9C F6 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x9c
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx*4 + 80h]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [esi + eax*8 + 60h]
        imul eax, dword ptr [edx*4 + 5894c930h]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx*4 + 80h]
        mov esi, dword ptr [ebp - 8]
        mov edi, dword ptr [ebp - 4]
        mov esi, dword ptr [edi + esi*8 + 64h]
        imul esi, dword ptr [edx*4 + 589490f0h]
        sub eax, esi
        cdq
        mov esi, 3e8h
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        ; Exact mapped bytes E8 A5 F2 F6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx*4 + 80h]
        mov eax, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov eax, dword ptr [esi + eax*8 + 60h]
        imul eax, dword ptr [edx*4 + 589490f0h]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 4]
        mov edx, dword ptr [esi + edx*4 + 80h]
        mov esi, dword ptr [ebp - 8]
        mov edi, dword ptr [ebp - 4]
        mov esi, dword ptr [edi + esi*8 + 64h]
        imul esi, dword ptr [edx*4 + 5894c930h]
        add eax, esi
        imul eax, eax, 56h
        cdq
        mov esi, 64h
        idiv esi
        cdq
        mov esi, 3e8h
        idiv esi
        add ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 50h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9E 87 29 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x87
        __asm _emit 0x29
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 89 FE FF FF: jmp 0x5851cd11
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
