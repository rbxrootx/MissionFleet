// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586DE780 .. +0x20B bytes.
extern "C" __declspec(naked) void FUN_586de780_586DE780() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        push 220000h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 27 00 00: call 0x586e0ef0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 150h]
        ; Exact mapped bytes E8 AC 2E DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x2e
        __asm _emit 0xdf
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 D6 29 17 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x29
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586de7c2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7D 28: jge 0x586de7f2
        __asm _emit 0x7d
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 150h]
        ; Exact mapped bytes E8 78 2E DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x2e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 150h]
        ; Exact mapped bytes E8 67 2E DF FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x2e
        __asm _emit 0xdf
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [eax + edx], 0
        ; Exact mapped bytes EB C7: jmp 0x586de7b9
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 150h]
        ; Exact mapped bytes E8 00 1D DF FF: call 0x584d0500
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x1d
        __asm _emit 0xdf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 150h]
        mov dword ptr [ebp - 10h], edx
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CA 76 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x76
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 154h]
        mov dword ptr [ebp - 14h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B4 76 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x76
        __asm _emit 0xda
        __asm _emit 0xff
        push 10h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 0f8h
        push edx
        ; Exact mapped bytes E8 D1 E5 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe5
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0b4h], 100000h
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 498h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 22 C9 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ach], 0
        ; Exact mapped bytes 8B 0D EC 90 94 58: mov ecx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 28 06 96 58: cmp ecx, dword ptr [0x58960628]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 74 0E: je 0x586de8a4
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 15 EC 90 94 58: mov edx, dword ptr [0x589490ec]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x90
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes 3B 15 2C 06 96 58: cmp edx, dword ptr [0x5896062c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes 75 5D: jne 0x586de901
        __asm _emit 0x75
        __asm _emit 0x5d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c8h]
        ; Exact mapped bytes E8 0E 20 0E 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 4cch]
        ; Exact mapped bytes E8 00 20 0E 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4c0h]
        ; Exact mapped bytes E8 F2 1F 0E 00: call 0x587c08c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x1f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4c0h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        sub eax, 32h
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 44 6E 0D 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x6e
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 A5 DC FF: call 0x584a8e70
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xa5
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 32 1A 00 00: call 0x586e0330
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 43: jmp 0x586de944
        __asm _emit 0xeb
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4c8h]
        mov dword ptr [ebp - 20h], edx
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 C9 75 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x75
        __asm _emit 0xda
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4cch]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 B3 75 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x75
        __asm _emit 0xda
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4c4h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 9D 75 DA FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x75
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 16ch]
        mov dword ptr [ebp - 2ch], edx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 26 65 E5 FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 164h]
        mov dword ptr [ebp - 30h], ecx
        push 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 10 65 E5 FF: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x65
        __asm _emit 0xe5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4fch]
        mov dword ptr [ebp - 34h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 0A 76 DA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x76
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
