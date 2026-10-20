// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CA840 .. +0x23A bytes.
extern "C" __declspec(naked) void FUN_586ca840_586CA840() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 5
        ; Exact mapped bytes 0F 85 12 02 00 00: jne 0x586caa76
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 01: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x01
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 C9 04: or cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xc9
        __asm _emit 0x04
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e0ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 0B C8: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 4A 24: mov word ptr [edx + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4a
        __asm _emit 0x24
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 79 C5 DE FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc5
        __asm _emit 0xde
        __asm _emit 0xff
        push 32h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC A1 DB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xa1
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes 8B 15 90 20 96 58: mov edx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 E4 14 0F 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x14
        __asm _emit 0x0f
        __asm _emit 0x00
        push 32h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 A1 DB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa1
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 8B 0D 0C 06 96 58: mov ecx, dword ptr [0x5896060c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x0c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 46 EE E5 FF: call 0x58529750
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xee
        __asm _emit 0xe5
        __asm _emit 0xff
        movzx ecx, ax
        and ecx, 0f00h
        sar ecx, 8
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 28: je 0x586ca947
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 1
        imul ecx, eax, 11h
        lea edx, [edx + ecx + 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 EC AD 0E 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1E: jmp 0x586ca965
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 98h
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 CC AD 0E 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 C8 4E DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 2ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B5 4E DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 9F 4E DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 84h]
        mov dword ptr [ebp - 34h], edx
        push 1
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 89 4E DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 38h], ecx
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 73 4E DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 3ch], eax
        push 1
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 5D 4E DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 40h], edx
        push 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 47 4E DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 44h], ecx
        push 1
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 31 4E DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 48h], eax
        push 1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 1B 4E DD FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x4e
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0e4h], 0
        push 0
        ; Exact mapped bytes 8B 0D E8 1F 96 58: mov ecx, dword ptr [0x58961fe8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A1 B4 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0xdb
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes 8B 0D EC 1F 96 58: mov ecx, dword ptr [0x58961fec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 94 B4 DB FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb4
        __asm _emit 0xdb
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 00 06 96 58: mov ecx, dword ptr [0x58960600]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 9F DB FF: call 0x58484a40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x9f
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 4ch], edx
        push 0
        push 64h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 B4: call dword ptr [ebp - 0x4c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xb4
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
