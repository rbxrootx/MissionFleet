// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CEEDF .. +0x1C2 bytes.
extern "C" __declspec(naked) void FUN_004ceedf_004CEEDF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4cef02
        __asm _emit 0x75
        __asm _emit 0x14
        push 33ch
        push 67154ch
        ; Exact mapped bytes E8 43 9E 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x9e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cef02
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ceee8
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes E8 A5 2B 06 00: call 0x531ab2
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 5
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 08 BA 68 00: call dword ptr [0x68ba08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 45: jne 0x4cef6e
        __asm _emit 0x75
        __asm _emit 0x45
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4cef50
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 6718cch
        ; Exact mapped bytes E8 CA 16 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 17: jmp 0x4cef67
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        push edx
        push 6718fch
        ; Exact mapped bytes E8 B1 16 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x4cf098
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 0A: jne 0x4cef7e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 1A 01 00 00: jmp 0x4cf098
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes FF 15 0C BA 68 00: call dword ptr [0x68ba0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 1C: jne 0x4cefb1
        __asm _emit 0x75
        __asm _emit 0x1c
        push 671934h
        push 671968h
        ; Exact mapped bytes E8 71 16 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x16
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        mov eax, 1
        ; Exact mapped bytes E9 E7 00 00 00: jmp 0x4cf098
        __asm _emit 0xe9
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        cmp ecx, 0ffffh
        ; Exact mapped bytes 75 0B: jne 0x4cefda
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 08: jmp 0x4cefe2
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 E5 A7 F7 FF: call 0x4497d0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xa7
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 10 BA 68 00: call dword ptr [0x68ba10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        and edx, 10000000h
        test edx, edx
        ; Exact mapped bytes 74 42: je 0x4cf044
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x4cf029
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 67196ch
        ; Exact mapped bytes E8 F1 15 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 17: jmp 0x4cf040
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        push edx
        push 67199ch
        ; Exact mapped bytes E8 D8 15 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 54: jmp 0x4cf098
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 14h]
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 43: jne 0x4cf093
        __asm _emit 0x75
        __asm _emit 0x43
        mov ecx, dword ptr [ebp + 8]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x4cf079
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        push edx
        push 6719d0h
        ; Exact mapped bytes E8 A1 15 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 16: jmp 0x4cf08f
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        push 671a08h
        ; Exact mapped bytes E8 89 15 FD FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x4cf098
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
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
