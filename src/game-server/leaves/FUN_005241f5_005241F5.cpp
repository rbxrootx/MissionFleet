// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005241F5 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_005241f5_005241F5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 97 FD 00 00: call 0x533f9d
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 E5 00 00 00: je 0x5242f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x52424f
        __asm _emit 0x74
        __asm _emit 0x27
        push -10h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x52424f
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 54 26 5E 00: call dword ptr [0x5e2654]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 A4 00 00 00: jne 0x5242f3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x524261
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x5242f3
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax*4 + 584d28h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 D8 28 5E 00: call dword ptr [0x5e28d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        push -10h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 28 5E 00: call dword ptr [0x5e28bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x5242ee
        __asm _emit 0x74
        __asm _emit 0x53
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 54 26 5E 00: call dword ptr [0x5e2654]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 45: je 0x5242ee
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes FF 15 14 27 5E 00: call dword ptr [0x5e2714]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 54 26 5E 00: call dword ptr [0x5e2654]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x5242ca
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 0C 26 5E 00: call dword ptr [0x5e260c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax*4 + 584d28h]
        push ecx
        push 401h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x5242fb
        __asm _emit 0xeb
        __asm _emit 0x0d
        ; Exact mapped bytes E9 65 FF FF FF: jmp 0x524258
        __asm _emit 0xe9
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 77 D5 FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
