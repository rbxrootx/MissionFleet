// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052B242 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_0052b242_0052B242() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 64h], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 09: je 0x52b25d
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 0ch], 8000h
        ; Exact mapped bytes 72 14: jb 0x52b271
        __asm _emit 0x72
        __asm _emit 0x14
        push 28ah
        push 5c8fcch
        ; Exact mapped bytes E8 94 97 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b271
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x52b24e
        __asm _emit 0x75
        __asm _emit 0xd7
        ; Exact mapped bytes E8 C6 A2 00 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 64 26 5E 00: call dword ptr [0x5e2664]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 62: je 0x52b2fe
        __asm _emit 0x74
        __asm _emit 0x62
        push 30h
        push 0
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 C7 E0 F7 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 64h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 64h]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 37: je 0x52b2fe
        __asm _emit 0x74
        __asm _emit 0x37
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 39 A2 00 00: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 AC 25 5E 00: call dword ptr [0x5e25ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x52b2fe
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 4ch]
        cmp edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 17: je 0x52b2fe
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 DC 84 FC FF: call 0x4f37d8
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x84
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x52b300
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
