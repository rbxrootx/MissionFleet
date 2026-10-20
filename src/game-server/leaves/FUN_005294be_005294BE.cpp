// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005294BE .. +0x16E bytes.
extern "C" __declspec(naked) void FUN_005294be_005294BE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AC 5F FC FF: call 0x4ef47b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 16 FE FF FF: call 0x5292f9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D2 F1 FF FF: call 0x5286c4
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x5294fb
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x529626
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 40h], 2
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x529612
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 40h], 5
        ; Exact mapped bytes 0F 84 FD 00 00 00: je 0x529612
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x529612
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 12 3B 01 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 228h
        push 5c8f88h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 23 1C FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x1c
        __asm _emit 0xfd
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
        ; Exact mapped bytes E8 C7 EF FF FF: call 0x528522
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 0B: jne 0x529571
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 10h]
        sub edx, 1
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 06: jmp 0x529577
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
        ; Exact mapped bytes E8 44 EE FF FF: call 0x5283de
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 B8 FC FF FF: call 0x52925e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 50 58 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 808h
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x5295d5
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7B 57 01 00: call 0x53ed3e
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5295d5
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 41 FE FF FF: call 0x529414
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 14: jmp 0x5295e9
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 E8 45 01 00: call 0x53dbd1
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2A 5B FC FF: call 0x4ef122
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x5b
        __asm _emit 0xfc
        __asm _emit 0xff
        and eax, 0ffffh
        or eax, 280000h
        push eax
        push 111h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 C9 25 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 14: jmp 0x529626
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 AB 45 01 00: call 0x53dbd1
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x45
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
