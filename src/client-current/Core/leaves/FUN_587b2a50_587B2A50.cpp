// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2A50 .. +0x18C bytes.
extern "C" __declspec(naked) void FUN_587b2a50_587B2A50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 118h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 06: je 0x587b2a6f
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x587b2a77
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 57 01 00 00: jmp 0x587b2bce
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp - 118h], eax
        lea ecx, [ebp - 118h]
        push ecx
        lea edx, [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 3D 49 CD FF: call 0x584873d0
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x49
        __asm _emit 0xcd
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 110h], eax
        ; Exact mapped bytes E8 CD CF D1 FF: call 0x584cfa70
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcf
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 3D: jne 0x587b2ae7
        __asm _emit 0x75
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 110h]
        add edx, 1
        mov dword ptr [ebp - 114h], edx
        mov eax, dword ptr [ebp - 114h]
        add eax, dword ptr [ebp + 18h]
        cmp eax, 10h
        ; Exact mapped bytes 72 20: jb 0x587b2ae7
        __asm _emit 0x72
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp - 114h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 01 FD FF FF: call 0x587b27e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x587b2bce
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 7E C2 D1 FF: call 0x584ced70
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc2
        __asm _emit 0xd1
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [ebp + 14h]
        lea ecx, [eax + edx*2]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 24 17 00 00: call 0x587b4230
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x587b2b71
        __asm _emit 0x74
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ebp + 8]
        lea eax, [edx + ecx*2]
        mov dword ptr [ebp - 108h], eax
        ; Exact mapped bytes EB 0F: jmp 0x587b2b36
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 108h]
        sub ecx, 2
        mov dword ptr [ebp - 108h], ecx
        mov edx, dword ptr [ebp - 108h]
        movzx eax, word ptr [edx]
        push eax
        lea ecx, [ebp - 104h]
        ; Exact mapped bytes E8 35 17 00 00: call 0x587b4280
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x587b2b5f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 108h]
        sub eax, dword ptr [ebp + 8]
        sar eax, 1
        ; Exact mapped bytes EB 6F: jmp 0x587b2bce
        __asm _emit 0xeb
        __asm _emit 0x6f
        mov edx, dword ptr [ebp - 108h]
        cmp edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x587b2b6f
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 5F: jmp 0x587b2bce
        __asm _emit 0xeb
        __asm _emit 0x5f
        ; Exact mapped bytes EB B6: jmp 0x587b2b27
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [ebp + 8]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp - 10ch], edx
        ; Exact mapped bytes EB 0F: jmp 0x587b2b94
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 10ch]
        sub eax, 2
        mov dword ptr [ebp - 10ch], eax
        mov ecx, dword ptr [ebp - 10ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 48 17 00 00: call 0x587b42f0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x587b2bbc
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 10ch]
        sub eax, dword ptr [ebp + 8]
        sar eax, 1
        ; Exact mapped bytes EB 12: jmp 0x587b2bce
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 10ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 05: jne 0x587b2bcc
        __asm _emit 0x75
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x587b2bce
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B7: jmp 0x587b2b85
        __asm _emit 0xeb
        __asm _emit 0xb7
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 78 E4 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
