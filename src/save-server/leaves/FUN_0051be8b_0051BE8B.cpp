// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BE8B .. +0x16E bytes.
extern "C" __declspec(naked) void FUN_0051be8b_0051BE8B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 6F AA FB FF: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xaa
        __asm _emit 0xfb
        __asm _emit 0xff
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 16 FE FF FF: call 0x51bcc6
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F5 F1 FF FF: call 0x51b0b4
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x51bec8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x51bff3
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 40h], 2
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x51bfdf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 40h], 5
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x51bfdf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x51bfdf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 A5 0B 01 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 228h
        push 6769f8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 56 E3 FB FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        xor edx, edx
        cmp dword ptr [ecx + 40h], 6
        sete dl
        add edx, 2
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EA EF FF FF: call 0x51af12
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0B: jne 0x51bf3e
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 06: jmp 0x51bf44
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        cdq
        idiv dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 67 EE FF FF: call 0x51adce
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B8 FC FF FF: call 0x51bc2b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 13 A3 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa3
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 808h
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x51bfa2
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0E 28 01 00: call 0x52e79e
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x51bfa2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 41 FE FF FF: call 0x51bde1
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 14: jmp 0x51bfb6
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7B 16 01 00: call 0x52d631
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 ED A5 FB FF: call 0x4d65b2
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0xff
        and eax, 0ffffh
        or eax, 280000h
        push eax
        push 111h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5C F6 00 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x51bff3
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3E 16 01 00: call 0x52d631
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
