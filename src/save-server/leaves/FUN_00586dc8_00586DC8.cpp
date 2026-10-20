// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00586DC8 .. +0x111 bytes.
extern "C" __declspec(naked) void FUN_00586dc8_00586DC8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 48h], ecx
        mov eax, dword ptr [ebp - 48h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x586dee
        __asm _emit 0x75
        __asm _emit 0x11
        push 5dh
        push 67d938h
        ; Exact mapped bytes E8 57 1F FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586dee
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x586dd4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [ebp - 48h]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 11: jne 0x586e13
        __asm _emit 0x75
        __asm _emit 0x11
        push 5eh
        push 67d938h
        ; Exact mapped bytes E8 32 1F FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586e13
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x586df4
        __asm _emit 0x75
        __asm _emit 0xdb
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 11: jne 0x586e30
        __asm _emit 0x75
        __asm _emit 0x11
        push 5fh
        push 67d938h
        ; Exact mapped bytes E8 15 1F FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586e30
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x586e19
        __asm _emit 0x75
        __asm _emit 0xe3
        push 0
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 21 C6 F1 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc6
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586e5a
        __asm _emit 0x75
        __asm _emit 0x11
        push 60h
        push 67d938h
        ; Exact mapped bytes E8 EB 1E FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x1e
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586e5a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x586e36
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 E0 B4 68 00: call dword ptr [0x68b4e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 47: je 0x586ecd
        __asm _emit 0x74
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 48h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 3E: je 0x586ecd
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 1C F3 FA FF: call 0x5361b3
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 2F: je 0x586ecd
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 ED EE FA FF: call 0x535d9f
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        lea edx, [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 E9 F3 FA FF: call 0x5362a7
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf3
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 50 04 00 00: call 0x58731d
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
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
