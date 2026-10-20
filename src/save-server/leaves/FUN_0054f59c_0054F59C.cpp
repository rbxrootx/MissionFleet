// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F59C .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_0054f59c_0054F59C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f354h
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
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax], 63c7ech
        mov dword ptr [ebp - 4], 1
        push 3ah
        push 67bf90h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 83 AC F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xac
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 50h
        ; Exact mapped bytes E8 EB 76 FD FF: call 0x526cd3
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x54f605
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 50h
        ; Exact mapped bytes E8 CB 76 FD FF: call 0x526cc2
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 67c064h
        ; Exact mapped bytes E8 13 10 F5 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x10
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 40 02 00 00: call 0x54f84d
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 59: je 0x54f66f
        __asm _emit 0x74
        __asm _emit 0x59
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 51 02 00 00: call 0x54f873
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 11: jne 0x54f63c
        __asm _emit 0x75
        __asm _emit 0x11
        push 47h
        push 67bf90h
        ; Exact mapped bytes E8 09 97 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54f63c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x54f625
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 12: je 0x54f666
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
        mov eax, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x54f66d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB A1: jmp 0x54f610
        __asm _emit 0xeb
        __asm _emit 0xa1
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 74 1C: je 0x54f694
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 78h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x54f66f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 B4 FC FF: call 0x51ab23
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xb4
        __asm _emit 0xfc
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 50h
        ; Exact mapped bytes E8 86 2A F7 FF: call 0x4c2144
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x2a
        __asm _emit 0xf7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F2 0B FA FF: call 0x4f02bf
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x0b
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
