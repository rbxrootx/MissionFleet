// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420283 .. +0x160 bytes.
extern "C" __declspec(naked) void FUN_00420283_00420283() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 7D 07: jge 0x420296
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x4203a8
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 55 58 00 00: call 0x425af0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        cmp eax, 3f480h
        ; Exact mapped bytes 7E 58: jle 0x4202fc
        __asm _emit 0x7e
        __asm _emit 0x58
        cmp eax, 7ffc0b7fh
        ; Exact mapped bytes 7D 51: jge 0x4202fc
        __asm _emit 0x7d
        __asm _emit 0x51
        ; Exact mapped bytes 2B 05 68 D0 44 00: sub eax, dword ptr [0x44d068]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp + 8], eax
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BC FE FF FF: call 0x420179
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 6C D0 44 00 00: cmp dword ptr [0x44d06c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esi, eax
        ; Exact mapped bytes 0F 84 D9 00 00 00: je 0x4203a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 D2 5A 00 00: call 0x425da5
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 0F 84 CA 00 00 00: je 0x4203a6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 70 D0 44 00: mov eax, dword ptr [0x44d070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        sub dword ptr [ebp + 8], eax
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 8C FE FF FF: call 0x420179
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        mov dword ptr [esi + 20h], 1
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x4203a6
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes E8 77 FE FF FF: call 0x420179
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        push esi
        ; Exact mapped bytes E8 9B 5A 00 00: call 0x425da5
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        mov eax, dword ptr [esi]
        pop ecx
        ; Exact mapped bytes 74 06: je 0x420318
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 2B 05 70 D0 44 00: sub eax, dword ptr [0x44d070]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 2B 05 68 D0 44 00: sub eax, dword ptr [0x44d068]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        push 3ch
        mov dword ptr [ebp + 8], eax
        pop ecx
        cdq
        mov edi, ecx
        idiv edi
        test edx, edx
        mov dword ptr [esi], edx
        ; Exact mapped bytes 7D 07: jge 0x420337
        __asm _emit 0x7d
        __asm _emit 0x07
        add edx, ecx
        mov dword ptr [esi], edx
        sub dword ptr [ebp + 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov edi, ecx
        cdq
        idiv edi
        add eax, dword ptr [esi + 4]
        mov dword ptr [ebp + 8], eax
        cdq
        idiv edi
        pop edi
        test edx, edx
        mov dword ptr [esi + 4], edx
        ; Exact mapped bytes 7D 09: jge 0x420359
        __asm _emit 0x7d
        __asm _emit 0x09
        add edx, 3ch
        mov dword ptr [esi + 4], edx
        sub dword ptr [ebp + 8], ecx
        mov eax, dword ptr [ebp + 8]
        push 18h
        cdq
        idiv ecx
        pop ecx
        add eax, dword ptr [esi + 8]
        mov dword ptr [ebp + 8], eax
        cdq
        idiv ecx
        test edx, edx
        mov dword ptr [esi + 8], edx
        ; Exact mapped bytes 7D 08: jge 0x42037a
        __asm _emit 0x7d
        __asm _emit 0x08
        add edx, ecx
        mov dword ptr [esi + 8], edx
        sub dword ptr [ebp + 8], ecx
        mov eax, dword ptr [ebp + 8]
        push 18h
        cdq
        pop ecx
        idiv ecx
        mov ecx, eax
        test ecx, ecx
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 7E 1F: jle 0x4203ab
        __asm _emit 0x7e
        __asm _emit 0x1f
        mov eax, dword ptr [esi + 18h]
        push 7
        add eax, ecx
        pop ecx
        cdq
        idiv ecx
        mov dword ptr [esi + 18h], edx
        mov eax, dword ptr [ebp + 8]
        add dword ptr [esi + 0ch], eax
        mov eax, dword ptr [ebp + 8]
        add dword ptr [esi + 1ch], eax
        mov eax, esi
        pop esi
        pop ebp
        ret
        ; Exact mapped bytes 7D F9: jge 0x4203a6
        __asm _emit 0x7d
        __asm _emit 0xf9
        mov eax, dword ptr [esi + 18h]
        push 7
        lea eax, [eax + ecx + 7]
        pop ecx
        cdq
        idiv ecx
        mov dword ptr [esi + 18h], edx
        mov eax, dword ptr [ebp + 8]
        add dword ptr [esi + 0ch], eax
        mov eax, dword ptr [esi + 0ch]
        test eax, eax
        ; Exact mapped bytes 7F D6: jg 0x4203a0
        __asm _emit 0x7f
        __asm _emit 0xd6
        add eax, 1fh
        dec dword ptr [esi + 14h]
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 1ch], 16ch
        mov dword ptr [esi + 10h], 0bh
        ; Exact mapped bytes EB C3: jmp 0x4203a6
        __asm _emit 0xeb
        __asm _emit 0xc3
    }
}
