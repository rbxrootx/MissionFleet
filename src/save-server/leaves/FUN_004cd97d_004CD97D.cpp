// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD97D .. +0x155 bytes.
extern "C" __declspec(naked) void FUN_004cd97d_004CD97D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 1E 9A 00 00: call 0x4d73bf
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x4cd9af
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x4cdac9
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 06: je 0x4cd9bb
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 16: jne 0x4cd9d1
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 8]
        and ecx, 8000h
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x4cd9d1
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 0f000h
        ; Exact mapped bytes 72 07: jb 0x4cd9d8
        __asm _emit 0x72
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F1 00 00 00: jmp 0x4cdac9
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B9 F0 05 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf0
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 63: je 0x4cda4c
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 8B 15 D0 6C 68 00: mov edx, dword ptr [0x686cd0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x4cda07
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        push eax
        push 671568h
        ; Exact mapped bytes E8 11 2C FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 11: jne 0x4cda20
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 67154ch
        ; Exact mapped bytes E8 25 B3 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb3
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cda20
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x4cda07
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4cda4c
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 7D: jmp 0x4cdac9
        __asm _emit 0xeb
        __asm _emit 0x7d
        ; Exact mapped bytes E8 08 AE 00 00: call 0x4d8859
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 43: je 0x4cda9d
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes A1 D0 6C 68 00: mov eax, dword ptr [0x686cd0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x4cda77
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 671594h
        ; Exact mapped bytes E8 A1 2B FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4cda9d
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 2C: jmp 0x4cdac9
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes A1 D0 6C 68 00: mov eax, dword ptr [0x686cd0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x6c
        __asm _emit 0x68
        __asm _emit 0x00
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 1E: je 0x4cdac7
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 6715b8h
        ; Exact mapped bytes E8 51 2B FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        xor eax, eax
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
