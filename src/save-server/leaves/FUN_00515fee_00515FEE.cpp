// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515FEE .. +0x1D6 bytes.
extern "C" __declspec(naked) void FUN_00515fee_00515FEE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x516012
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 3A: jmp 0x51604c
        __asm _emit 0xeb
        __asm _emit 0x3a
        push 5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 08 BA 68 00: call dword ptr [0x68ba08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 0C BA 68 00: call dword ptr [0x68ba0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 04 BA 68 00: call dword ptr [0x68ba04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x516066
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c9h
        push 674cach
        ; Exact mapped bytes E8 DF 2C 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x516066
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x51604c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 4]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        cmp edx, 0ffffh
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x516141
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 DC B9 68 00: call dword ptr [0x68b9dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        and eax, 80000000h
        test eax, eax
        ; Exact mapped bytes 74 7B: je 0x516111
        __asm _emit 0x74
        __asm _emit 0x7b
        push 674cfch
        ; Exact mapped bytes FF 15 18 B8 68 00: call dword ptr [0x68b818]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x5160be
        __asm _emit 0x75
        __asm _emit 0x14
        push 0e1h
        push 674cach
        ; Exact mapped bytes E8 87 2C 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5160be
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5160a4
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 45: je 0x51610f
        __asm _emit 0x74
        __asm _emit 0x45
        push 674d0ch
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 23: jne 0x516105
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5160ff
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e6h
        push 674cach
        ; Exact mapped bytes E8 46 2C 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5160ff
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5160e2
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        push edx
        ; Exact mapped bytes FF 15 D8 B9 68 00: call dword ptr [0x68b9d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 30: jmp 0x516141
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 14h]
        and eax, 0ffh
        cmp eax, 3
        ; Exact mapped bytes 75 23: jne 0x516141
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x51613b
        __asm _emit 0x74
        __asm _emit 0x14
        push 0edh
        push 674cach
        ; Exact mapped bytes E8 0A 2C 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51613b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x51611e
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes E8 1D A5 02 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xa5
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [eax + 1038h], 0
        ; Exact mapped bytes 74 0F: je 0x51615e
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 48 FE FF FF: call 0x515fa3
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 FA FC FF FF: call 0x515e65
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 44h], 0
        ; Exact mapped bytes 74 17: je 0x51618e
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 44h]
        push edx
        ; Exact mapped bytes FF 15 00 BA 68 00: call dword ptr [0x68ba00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 44h], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x5161a3
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        or ecx, 1
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], ecx
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
