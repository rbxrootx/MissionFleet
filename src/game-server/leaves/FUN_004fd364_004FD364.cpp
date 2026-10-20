// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FD364 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_004fd364_004FD364() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 05: jne 0x4fd37b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 18 01 00 00: jmp 0x4fd493
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        ; Exact mapped bytes E8 9B 64 03 00: call 0x533821
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x64
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x4fd488
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        ; Exact mapped bytes E8 7D E3 FE FF: call 0x4eb727
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 44h], 1
        ; Exact mapped bytes 74 1D: je 0x4fd3d0
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 44h], 2
        ; Exact mapped bytes 74 14: je 0x4fd3d0
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e3h
        push 5ca188h
        ; Exact mapped bytes E8 35 76 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x76
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd3d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4fd3aa
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [eax + 40h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 1C: je 0x4fd408
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 14: je 0x4fd408
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e5h
        push 5ca188h
        ; Exact mapped bytes E8 FD 75 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd408
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x4fd3e2
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 44h], 2
        ; Exact mapped bytes 75 38: jne 0x4fd458
        __asm _emit 0x75
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 1D: je 0x4fd448
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 14: je 0x4fd448
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e9h
        push 5ca188h
        ; Exact mapped bytes E8 BD 75 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x75
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fd448
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4fd420
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], edx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 12: je 0x4fd47c
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x4fd483
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes E9 01 FF FF FF: jmp 0x4fd389
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 20h
        ; Exact mapped bytes E8 EC DD FE FF: call 0x4eb27f
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
