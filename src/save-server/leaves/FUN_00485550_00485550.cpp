// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00485550 .. +0x1E7 bytes.
extern "C" __declspec(naked) void FUN_00485550_00485550() {
    __asm {
        sub esp, 28h
        push ebx
        push esi
        push edi
        push 688de0h
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF 15 0C BE 68 00: call dword ptr [0x68be0c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ebx, eax
        push 0ch
        push ebx
        ; Exact mapped bytes 8B 35 30 B4 68 00: mov esi, dword ptr [0x68b430]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x30
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, eax
        push 0eh
        push ebx
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        imul edi, eax
        mov eax, 1
        cmp edi, 4
        ; Exact mapped bytes 7D 02: jge 0x48558c
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        push 1
        ; Exact mapped bytes 8B 3D C4 BF 68 00: mov edi, dword ptr [0x68bfc4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 40 90 68 00: mov dword ptr [0x689040], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, 15eh
        ; Exact mapped bytes 75 15: jne 0x4855b7
        __asm _emit 0x75
        __asm _emit 0x15
        push 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp eax, 280h
        ; Exact mapped bytes 75 0A: jne 0x4855b7
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes C7 05 40 90 68 00 00 00 00 00: mov dword ptr [0x689040], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push 0
        ; Exact mapped bytes FF 15 04 BE 68 00: call dword ptr [0x68be04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 90 68 00 00: cmp dword ptr [0x689040], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 22: je 0x4855eb
        __asm _emit 0x74
        __asm _emit 0x22
        push 68139ch
        ; Exact mapped bytes 8B 35 EC B9 68 00: mov esi, dword ptr [0x68b9ec]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xec
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 48 90 68 00: mov word ptr [0x689048], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 21: jne 0x485602
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes C7 05 40 90 68 00 00 00 00 00: mov dword ptr [0x689040], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 688de0h
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A1 40 90 68 00: mov eax, dword ptr [0x689040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 28h
        ret
        push 681384h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 4E 90 68 00: mov word ptr [0x68904e], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x4e
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 CD: je 0x4855e1
        __asm _emit 0x74
        __asm _emit 0xcd
        push 681394h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 4C 90 68 00: mov word ptr [0x68904c], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push 68138ch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 4C 90 68 00 00: cmp word ptr [0x68904c], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 A3 4A 90 68 00: mov word ptr [0x68904a], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x4a
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x485724
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x485724
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 68137ch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 52 90 68 00: mov word ptr [0x689052], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x52
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push 681374h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 83 3D 52 90 68 00 00: cmp word ptr [0x689052], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x52
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 A3 50 90 68 00: mov word ptr [0x689050], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x485711
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x485711
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 6813a0h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 A3 54 90 68 00: mov word ptr [0x689054], ax
        __asm _emit 0x66
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 55 FF FF FF: je 0x4855e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2ah
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes A2 45 9B 68 00: mov byte ptr [0x689b45], al
        __asm _emit 0xa2
        __asm _emit 0x45
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 16 FE FF FF: call 0x4854b0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        ; Exact mapped bytes E8 7F 01 00 00: call 0x485820
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 84 35 FF FF FF: je 0x4855e1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, 689aa0h
        mov esi, 64151ch
        ; Exact mapped bytes 8B 3D E4 BE 68 00: mov edi, dword ptr [0x68bee4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        lea edx, [esi - 14h]
        mov dword ptr [ebx], eax
        lea ecx, [esp + 0ch]
        push ecx
        add ebx, 18h
        push edx
        add esi, 20h
        push 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ecx, dword ptr [esp + 10h]
        cmp esi, 6415dch
        mov dword ptr [ebx - 14h], ecx
        ; Exact mapped bytes 72 DA: jb 0x4856bc
        __asm _emit 0x72
        __asm _emit 0xda
        lea eax, [esp + 0ch]
        push eax
        push 8002h
        push 0
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x485702
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes A3 30 9B 68 00: mov dword ptr [0x689b30], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 E9 FE FF FF: jmp 0x4855eb
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 D8 BF 68 00: mov eax, dword ptr [0x68bfd8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 30 9B 68 00: mov dword ptr [0x689b30], eax
        __asm _emit 0xa3
        __asm _emit 0x30
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E9 DA FE FF FF: jmp 0x4855eb
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        ; Exact mapped bytes C7 05 40 90 68 00 00 00 00 00: mov dword ptr [0x689040], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebx
        add esp, 28h
        ret
        xor eax, eax
        pop edi
        ; Exact mapped bytes C7 05 40 90 68 00 00 00 00 00: mov dword ptr [0x689040], 0
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebx
        add esp, 28h
        ret
    }
}
