// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58524E40 .. +0x18D bytes.
extern "C" __declspec(naked) void FUN_58524e40_58524E40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 134h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 84 59 01 00 00: je 0x58524fba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x59
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 128h], ecx
        mov edx, dword ptr [ebp - 128h]
        add edx, 11ch
        mov dword ptr [ebp - 128h], edx
        mov eax, dword ptr [ebp - 128h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 84 2F 01 00 00: je 0x58524fba
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 128h]
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 128h]
        push edx
        ; Exact mapped bytes E8 0D 24 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
        mov esi, eax
        lea edi, [ebp - 120h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 130h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 95 D0 FE FF FF: call dword ptr [ebp - 0x130]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x58524f25
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 11ch
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp - 124h]
        push edx
        mov eax, dword ptr [ebp - 128h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 1E 02 00 00: call 0x58525120
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes E8 9F 23 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x23
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
        mov esi, eax
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x58524fb5
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [ebp - 12ch], eax
        ; Exact mapped bytes EB 0C: jmp 0x58524f3f
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 12ch]
        mov dword ptr [ebp - 124h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 134h], edx
        mov eax, dword ptr [ebp - 12ch]
        sub eax, 11ch
        mov dword ptr [ebp - 12ch], eax
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes FF 95 CC FE FF FF: call dword ptr [ebp - 0x134]
        __asm _emit 0xff
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x58524f97
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 12ch]
        push ecx
        ; Exact mapped bytes E8 2D 23 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x23
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
        mov esi, eax
        mov edi, dword ptr [ebp - 124h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes EB 9C: jmp 0x58524f33
        __asm _emit 0xeb
        __asm _emit 0x9c
        lea edx, [ebp - 120h]
        push edx
        ; Exact mapped bytes E8 0D 23 F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x23
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov ecx, 47h
        mov esi, eax
        mov edi, dword ptr [ebp - 124h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes E9 B0 FE FF FF: jmp 0x58524e6a
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 87 C0 30 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xc0
        __asm _emit 0x30
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
