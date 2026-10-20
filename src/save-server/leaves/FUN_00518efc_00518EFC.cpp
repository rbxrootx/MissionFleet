// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518EFC .. +0x203 bytes.
extern "C" __declspec(naked) void FUN_00518efc_00518EFC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 5d5h
        push 674cach
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 45 13 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x13
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x518f35
        __asm _emit 0x75
        __asm _emit 0x14
        push 5d6h
        push 674cach
        ; Exact mapped bytes E8 10 FE 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518f35
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x518f1b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6378a8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 12 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x518f60
        __asm _emit 0x75
        __asm _emit 0x14
        push 5d7h
        push 674cach
        ; Exact mapped bytes E8 E5 FD 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518f60
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x518f3b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 5d8h
        push 674cach
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E7 12 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 61 D5 00 00: call 0x5264e9
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 61 01 00 00: je 0x5190f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 5e1h
        push 674cach
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 00 D4 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, eax, 30h
        push eax
        ; Exact mapped bytes E8 20 31 FB FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x31
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 E0 D3 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xd3
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
        ; Exact mapped bytes E8 1C C3 F4 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc3
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 0a8h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 AD 34 FB FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0a8h], edx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 94 D3 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xd3
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
        ; Exact mapped bytes E8 CA C2 F4 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc2
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 25 ED 00 00: call 0x527d66
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 CF FF FF: call 0x515fee
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8ch
        ; Exact mapped bytes E8 30 BD 00 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x519083
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8ch
        ; Exact mapped bytes E8 3C BD 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xbd
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
        ; Exact mapped bytes E8 FB BC 00 00: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x5190b8
        __asm _emit 0x75
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 8]
        add ecx, 90h
        ; Exact mapped bytes E8 07 BD 00 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbd
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
        ; Exact mapped bytes FF 15 80 B3 68 00: call dword ptr [0x68b380]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x5190d0
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 0C 9E F8 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        push 467h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 56 25 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5190f6
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 7C B3 68 00: call dword ptr [0x68b37c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 E6 9D F8 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x9d
        __asm _emit 0xf8
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
