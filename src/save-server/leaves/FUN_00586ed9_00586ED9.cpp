// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00586ED9 .. +0x164 bytes.
extern "C" __declspec(naked) void FUN_00586ed9_00586ED9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x586eff
        __asm _emit 0x75
        __asm _emit 0x11
        push 70h
        push 67d938h
        ; Exact mapped bytes E8 46 1E FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586eff
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x586ee5
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 11: jne 0x586f24
        __asm _emit 0x75
        __asm _emit 0x11
        push 71h
        push 67d938h
        ; Exact mapped bytes E8 21 1E FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586f24
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x586f05
        __asm _emit 0x75
        __asm _emit 0xdb
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 11: jne 0x586f41
        __asm _emit 0x75
        __asm _emit 0x11
        push 72h
        push 67d938h
        ; Exact mapped bytes E8 04 1E FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586f41
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x586f2a
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 27: je 0x586f74
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        mov ecx, dword ptr [ebp + 1ch]
        shl ecx, 2
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        ; Exact mapped bytes E8 07 C5 F1 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xc5
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586f74
        __asm _emit 0x75
        __asm _emit 0x11
        push 74h
        push 67d938h
        ; Exact mapped bytes E8 D1 1D FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586f74
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x586f47
        __asm _emit 0x75
        __asm _emit 0xcd
        push 0
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        ; Exact mapped bytes E8 DD C4 F1 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xc4
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586f9e
        __asm _emit 0x75
        __asm _emit 0x11
        push 75h
        push 67d938h
        ; Exact mapped bytes E8 A7 1D FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x1d
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586f9e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x586f7a
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 DC B3 68 00: call dword ptr [0x68b3dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5B: je 0x587031
        __asm _emit 0x74
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 52: je 0x587031
        __asm _emit 0x74
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CC F1 FA FF: call 0x5361b3
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf1
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 43: je 0x587031
        __asm _emit 0x74
        __asm _emit 0x43
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587007
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 1ch]
        ; Exact mapped bytes 73 16: jae 0x587025
        __asm _emit 0x73
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 20h]
        add eax, 4
        mov dword ptr [ebp + 20h], eax
        ; Exact mapped bytes EB D9: jmp 0x586ffe
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EC 02 00 00: call 0x58731d
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
