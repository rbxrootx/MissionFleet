// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515900 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_00515900_00515900() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d420h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 1
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x515a12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 74 05: je 0x51593d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x515a17
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 28h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 1C DB F8 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xdb
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51595f
        __asm _emit 0x75
        __asm _emit 0x11
        push 23h
        push 674cach
        ; Exact mapped bytes E8 E6 33 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51595f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x51593d
        __asm _emit 0x75
        __asm _emit 0xd8
        push 1
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 F0 DA F8 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xda
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x51598b
        __asm _emit 0x75
        __asm _emit 0x11
        push 24h
        push 674cach
        ; Exact mapped bytes E8 BA 33 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51598b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x515965
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 6378d8h
        ; Exact mapped bytes E8 83 48 FC FF: call 0x4da225
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        push 27h
        push 674cach
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 A8 48 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x48
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 97 A8 FB FF: call 0x4d025f
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa8
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 3A: jmp 0x515a04
        __asm _emit 0xeb
        __asm _emit 0x3a
        push 636e20h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 B9 47 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x47
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5159ec
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ch
        push 674cach
        ; Exact mapped bytes E8 59 33 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x33
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5159ec
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x5159ca
        __asm _emit 0x75
        __asm _emit 0xd8
    }
}
