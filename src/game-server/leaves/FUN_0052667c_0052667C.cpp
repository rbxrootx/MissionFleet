// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052667C .. +0x203 bytes.
extern "C" __declspec(naked) void FUN_0052667c_0052667C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 5d5h
        push 5c8174h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 C5 4A FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5266b5
        __asm _emit 0x75
        __asm _emit 0x14
        push 5d6h
        push 5c8174h
        ; Exact mapped bytes E8 50 E3 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5266b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x52669b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 584ce0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 49 FD FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x49
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5266e0
        __asm _emit 0x75
        __asm _emit 0x14
        push 5d7h
        push 5c8174h
        ; Exact mapped bytes E8 25 E3 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5266e0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5266bb
        __asm _emit 0x75
        __asm _emit 0xd5
        push 5d8h
        push 5c8174h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 67 4A FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 18 C0 00 00: call 0x532720
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x526876
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5e1h
        push 5c8174h
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 B7 BE 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, eax, 30h
        push eax
        ; Exact mapped bytes E8 00 69 FC FF: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x69
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 97 BE 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        imul eax, eax, 30h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0a8h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 BC 28 F8 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 8D 6C FC FF: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x6c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0a8h], edx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 4B BE 00 00: call 0x5325e1
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        push 28h
        mov edx, dword ptr [ebp + 8]
        add edx, 5ch
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 6A 28 F8 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x28
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DC D7 00 00: call 0x533f9d
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 CF FF FF: call 0x52376e
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8ch
        ; Exact mapped bytes E8 B0 A7 00 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x526803
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8ch
        ; Exact mapped bytes E8 BC A7 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 28h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        or ch, 10h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 90h
        ; Exact mapped bytes E8 7B A7 00 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x526838
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        add ecx, 90h
        ; Exact mapped bytes E8 87 A7 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 2ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        or ah, 20h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 BC 1E 5E 00: call dword ptr [0x5e1ebc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x526850
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 5C 95 FA FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x95
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        push 467h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 76 53 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x526876
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B8 1E 5E 00: call dword ptr [0x5e1eb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 36 95 FA FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x95
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
