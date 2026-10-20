// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00587387 .. +0x1A0 bytes.
extern "C" __declspec(naked) void FUN_00587387_00587387() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x5873b0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f6h
        push 67d938h
        ; Exact mapped bytes E8 95 19 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5873b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x587393
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 14: jne 0x5873d8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f7h
        push 67d938h
        ; Exact mapped bytes E8 6D 19 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5873d8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x5873b6
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5873f8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f8h
        push 67d938h
        ; Exact mapped bytes E8 4D 19 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5873f8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5873de
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x587418
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f9h
        push 67d938h
        ; Exact mapped bytes E8 2D 19 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x587418
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5873fe
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        push 10h
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 3B C0 F1 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc0
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x587443
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fah
        push 67d938h
        ; Exact mapped bytes E8 02 19 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x19
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x587443
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x58741e
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 74 27: je 0x587476
        __asm _emit 0x74
        __asm _emit 0x27
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 08 C0 F1 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xc0
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x587476
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fbh
        push 67d938h
        ; Exact mapped bytes E8 CF 18 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x18
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x587476
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x587449
        __asm _emit 0x75
        __asm _emit 0xcd
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 D8 BC 68 00: call dword ptr [0x68bcd8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 76: je 0x58751b
        __asm _emit 0x74
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 06 ED FA FF: call 0x5361b3
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x58751b
        __asm _emit 0x74
        __asm _emit 0x67
        mov edx, dword ptr [ebp + 14h]
        and edx, 400h
        test edx, edx
        ; Exact mapped bytes 75 5A: jne 0x58751b
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        push ecx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F1 AC FA FF: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xac
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        or dh, 4
        or edx, 20h
        push edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 D8 BC 68 00: call dword ptr [0x68bcd8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 9E AD FA FF: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xad
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 02 FE FF FF: call 0x58731d
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
