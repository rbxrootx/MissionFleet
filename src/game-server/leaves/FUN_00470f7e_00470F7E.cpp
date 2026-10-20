// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470F7E .. +0x1E4 bytes.
extern "C" __declspec(naked) void FUN_00470f7e_00470F7E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C1 01 00 00: call 0x471162
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x470fac
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A6 01 00 00: jmp 0x471152
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1a4h
        ; Exact mapped bytes E8 16 95 F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 10h]
        sub edx, 1ch
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1a4h
        ; Exact mapped bytes E8 F0 FF F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 66 C7 45 FC 7C 00: mov word ptr [ebp - 4], 0x7c
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0x7c
        __asm _emit 0x00
        push 2
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1a4h
        ; Exact mapped bytes E8 D6 FF F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        push 1dch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 48h]
        mov ecx, dword ptr [eax + 40ca8h]
        add ecx, 1ch
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1a4h
        ; Exact mapped bytes E8 B3 FF F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1a4h
        ; Exact mapped bytes E8 6D 94 F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1a4h
        ; Exact mapped bytes E8 3E 94 F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x94
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        push 8002h
        push 0
        push 80000002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 61 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 80025000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 61 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 28 F9 FF: call 0x403950
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x28
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 86 28 F9 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x28
        __asm _emit 0xf9
        __asm _emit 0xff
        push 0
        push 1ch
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        add eax, 78h
        push eax
        push 0
        push 0
        push 8002f008h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 86 61 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp dword ptr [ecx + 40ce8h], 0
        ; Exact mapped bytes 74 51: je 0x47110c
        __asm _emit 0x74
        __asm _emit 0x51
        push 0
        ; Exact mapped bytes 8B 15 7C CB 5D 00: mov edx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 40ce8h]
        ; Exact mapped bytes E8 C2 93 F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40ce8h]
        ; Exact mapped bytes E8 91 93 F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40ce8h]
        ; Exact mapped bytes E8 9D 93 F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        cdq
        and edx, 0fh
        add eax, edx
        sar eax, 4
        push eax
        push 80020fa2h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 28 61 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 17: jmp 0x471123
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80020fa2h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0F 61 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        add edx, 150h
        cmp edx, 5dcb50h
        ; Exact mapped bytes 74 1C: je 0x471150
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 7C CB 5D 00: mov ecx, dword ptr [0x5dcb7c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ecx + 40c98h]
        ; Exact mapped bytes E8 E7 AC FC FF: call 0x43be30
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xac
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x471152
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 84 76 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
