// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051D230 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_0051d230_0051D230() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 54h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 54h], ecx
        push 0
        push 3ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 1D 62 F8 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x62
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51d261
        __asm _emit 0x75
        __asm _emit 0x14
        push 108h
        push 6778d4h
        ; Exact mapped bytes E8 E4 BA 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d261
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x51d23c
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 41: je 0x51d2ae
        __asm _emit 0x74
        __asm _emit 0x41
        push 10ch
        push 6778d4h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 E0 CF FB FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xcf
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x51d29d
        __asm _emit 0x75
        __asm _emit 0x14
        push 10dh
        push 6778d4h
        ; Exact mapped bytes E8 A8 BA 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51d29d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x51d280
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 0B: jmp 0x51d2b9
        __asm _emit 0xeb
        __asm _emit 0x0b
        push 0
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov esi, dword ptr [ebp + 8]
        mov ecx, 0fh
        lea edi, [ebp - 3ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        push 5ah
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        ; Exact mapped bytes FF 15 30 B4 68 00: call dword ptr [0x68b430]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 4ch], eax
        mov eax, dword ptr [ebp - 4ch]
        cdq
        mov ecx, 2d0h
        idiv ecx
        mov dword ptr [ebp - 4ch], eax
        push 1
        lea edx, [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes FF 15 7C B4 68 00: call dword ptr [0x68b47c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], 0
        mov dword ptr [ebp - 44h], 0
        push 1
        lea ecx, [ebp - 48h]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        push edx
        ; Exact mapped bytes FF 15 7C B4 68 00: call dword ptr [0x68b47c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
        sub eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 0F D4 F4 FF: call 0x46a730
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xd4
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 4
        neg eax
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 0C: jne 0x51d33b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        push 0
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ebp - 3ch]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 67 5D 01 00: call 0x5330ae
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x5d
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
