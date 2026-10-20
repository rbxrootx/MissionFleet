// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520430 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_58520430_58520430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        and eax, 0ffffffdfh
        mov dword ptr [ebp + 10h], eax
        cmp dword ptr [ebp + 0ch], 7fffffffh
        ; Exact mapped bytes 76 06: jbe 0x58520451
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 20 E3 30 00: call 0x5882e770
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xe3
        __asm _emit 0x30
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x58520536
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 6
        cmp ecx, 6
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x58520536
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        push ecx
        ; Exact mapped bytes E8 90 8C F8 FF: call 0x584a9110
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 27 6E F6 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 50 A2 F8 FF: call 0x584aa6f0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 38h], edx
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 4
        ; Exact mapped bytes 75 18: jne 0x585204cf
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 BD FE FF: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 10h]
        and eax, 2
        ; Exact mapped bytes 75 54: jne 0x5852052b
        __asm _emit 0x75
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 10h]
        and eax, 18h
        ; Exact mapped bytes 74 0B: je 0x585204f3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 38h]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 06: jmp 0x585204f9
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 BD FE FF: call 0x5850c2b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 4
        ; Exact mapped bytes 74 15: je 0x5852052b
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 46 BD FE FF: call 0x5850c270
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 10h]
        or edx, 1
        mov dword ptr [ebp + 10h], edx
        ; Exact mapped bytes EB 0A: jmp 0x58520540
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 38h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 3ch], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
