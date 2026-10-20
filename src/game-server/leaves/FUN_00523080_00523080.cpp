// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523080 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_00523080_00523080() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d8c0h
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
        ; Exact mapped bytes 0F 84 E0 00 00 00: je 0x523192
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 2
        ; Exact mapped bytes 74 05: je 0x5230bd
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x523197
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 28h
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 8C CD FA FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xcd
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5230df
        __asm _emit 0x75
        __asm _emit 0x11
        push 23h
        push 5c8174h
        ; Exact mapped bytes E8 26 19 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5230df
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x5230bd
        __asm _emit 0x75
        __asm _emit 0xd8
        push 1
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 60 CD FA FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xcd
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x52310b
        __asm _emit 0x75
        __asm _emit 0x11
        push 24h
        push 5c8174h
        ; Exact mapped bytes E8 FA 18 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52310b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x5230e5
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 584d10h
        ; Exact mapped bytes E8 03 80 FD FF: call 0x4fb125
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        push 27h
        push 5c8174h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 28 80 FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x80
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 E7 F1 FC FF: call 0x4f232f
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 3A: jmp 0x523184
        __asm _emit 0xeb
        __asm _emit 0x3a
        push 584850h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 39 7F FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x52316c
        __asm _emit 0x75
        __asm _emit 0x11
        push 2ch
        push 5c8174h
        ; Exact mapped bytes E8 99 18 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52316c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x52314a
        __asm _emit 0x75
        __asm _emit 0xd8
    }
}
