// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544295 .. +0x1C7 bytes.
extern "C" __declspec(naked) void FUN_00544295_00544295() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov ecx, 6870ach
        ; Exact mapped bytes E8 58 02 00 00: call 0x544500
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 0F 85 68 01 00 00: jne 0x544424
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 11: je 0x5442d6
        __asm _emit 0x74
        __asm _emit 0x11
        push 50h
        push 677acch
        ; Exact mapped bytes E8 6F 4A FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5442d6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5442bc
        __asm _emit 0x75
        __asm _emit 0xe0
        push 677ad8h
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 F3 00 00 00: je 0x5443e7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 66 C7 45 E8 00 00: mov word ptr [ebp - 0x18], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        push 677ae8h
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push 677af8h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 32: je 0x544359
        __asm _emit 0x74
        __asm _emit 0x32
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 66 89 45 E0: mov word ptr [ebp - 0x20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 20h]
        and edx, 0ffffh
        and edx, 3ffh
        cmp edx, 11h
        ; Exact mapped bytes 75 17: jne 0x544359
        __asm _emit 0x75
        __asm _emit 0x17
        push 677b14h
        ; Exact mapped bytes E8 10 01 00 00: call 0x54445c
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x544359
        __asm _emit 0x74
        __asm _emit 0x06
        ; Exact mapped bytes 66 C7 45 E8 11 FC: mov word ptr [ebp - 0x18], 0xfc11
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfc
        mov eax, dword ptr [ebp - 18h]
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 2B: je 0x544390
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 66 8B 4D E8: mov cx, word ptr [ebp - 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe8
        push ecx
        mov edx, dword ptr [ebp + 10h]
        neg edx
        sbb edx, edx
        and edx, 0eh
        add edx, 3eeh
        and edx, 0ffffh
        push edx
        push 5
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 40 B9 68 00: call dword ptr [0x68b940]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 26: jne 0x5443bc
        __asm _emit 0x75
        __asm _emit 0x26
        push 5
        mov ecx, dword ptr [ebp + 10h]
        neg ecx
        sbb ecx, ecx
        and ecx, 0eh
        add ecx, 3eeh
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 08 BA 68 00: call dword ptr [0x68ba08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 0C BA 68 00: call dword ptr [0x68ba0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 14: je 0x5443e7
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 EE 70 F9 FF: call 0x4db4d2
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x70
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 09 FE FF: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, 1
        push eax
        push 40h
        ; Exact mapped bytes FF 15 C8 B9 68 00: call dword ptr [0x68b9c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 09 FE FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4A 08: mov word ptr [edx + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6A 87 F8 FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x87
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        xor eax, eax
        cmp edx, 0ffffh
        setne al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
