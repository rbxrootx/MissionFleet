// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004929FE .. +0x384 bytes.
extern "C" __declspec(naked) void FUN_004929fe_004929FE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 8B 0D 30 E5 58 00: mov ecx, dword ptr [0x58e530]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [eax], ecx
        ; Exact mapped bytes 8B 15 34 E5 58 00: mov edx, dword ptr [0x58e534]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes 8B 0D 38 E5 58 00: mov ecx, dword ptr [0x58e538]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes 8B 15 3C E5 58 00: mov edx, dword ptr [0x58e53c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0x00
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x492a4d
        __asm _emit 0x75
        __asm _emit 0x14
        push 2dah
        push 5ca8a4h
        ; Exact mapped bytes E8 B8 1F 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492a4d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x492a30
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        push edx
        push 58e520h
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4ch]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 0F 8C A2 00 00 00: jl 0x492b1e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x492a96
        __asm _emit 0x75
        __asm _emit 0x14
        push 2e2h
        push 5ca8a4h
        ; Exact mapped bytes E8 6F 1F 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492a96
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x492a7c
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 31: jl 0x492ae3
        __asm _emit 0x7c
        __asm _emit 0x31
        push 58e530h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 20 AD FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x492adb
        __asm _emit 0x74
        __asm _emit 0x14
        push 2e5h
        push 5ca8a4h
        ; Exact mapped bytes E8 2A 1F 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x1f
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492adb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D1: jne 0x492ab2
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes EB 2F: jmp 0x492b12
        __asm _emit 0xeb
        __asm _emit 0x2f
        push 58e530h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 EF AC FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x492b0c
        __asm _emit 0x75
        __asm _emit 0x14
        push 2e7h
        push 5ca8a4h
        ; Exact mapped bytes E8 F9 1E 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x1e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492b0c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x492ae3
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 8], 0
        push 58e530h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 AD AC FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 0F 84 25 02 00 00: je 0x492d63
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        push ecx
        push 58e510h
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 0F 8C 03 02 00 00: jl 0x492d63
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x492b7a
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f3h
        push 5ca8a4h
        ; Exact mapped bytes E8 8B 1E 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x1e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492b7a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x492b60
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 0ch], 0
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 0F 8C B8 01 00 00: jl 0x492d57
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x492bb9
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f9h
        push 5ca8a4h
        ; Exact mapped bytes E8 4C 1E 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492bb9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x492b9f
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 0F 8C 74 01 00 00: jl 0x492d4b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x492bf1
        __asm _emit 0x75
        __asm _emit 0x14
        push 2feh
        push 5ca8a4h
        ; Exact mapped bytes E8 14 1E 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x1e
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492bf1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x492bd7
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 28h], 5
        ; Exact mapped bytes 74 14: je 0x492c14
        __asm _emit 0x74
        __asm _emit 0x14
        push 2ffh
        push 5ca8a4h
        ; Exact mapped bytes E8 F1 1D 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492c14
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x492bf7
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x492c2c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 30: mov dx, word ptr [ecx + 0x30]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x30
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 0F 83 FD 00 00 00: jae 0x492d3b
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 24: call dword ptr [eax + 0x24]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x24
        test eax, eax
        ; Exact mapped bytes 0F 8C DC 00 00 00: jl 0x492d36
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        and edx, 7
        cmp edx, 3
        ; Exact mapped bytes 0F 85 CD 00 00 00: jne 0x492d36
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 0F 8C A8 00 00 00: jl 0x492d34
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        test eax, eax
        ; Exact mapped bytes 0F 8C 8C 00 00 00: jl 0x492d34
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x492cc2
        __asm _emit 0x75
        __asm _emit 0x14
        push 314h
        push 5ca8a4h
        ; Exact mapped bytes E8 43 1D 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492cc2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x492ca8
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 7C 4C: jl 0x492d28
        __asm _emit 0x7c
        __asm _emit 0x4c
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 14: jne 0x492cf6
        __asm _emit 0x75
        __asm _emit 0x14
        push 31ah
        push 5ca8a4h
        ; Exact mapped bytes E8 0F 1D 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492cf6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x492cdc
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ecx + 0ch]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 4C: call dword ptr [ecx + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        ; Exact mapped bytes EB 05: jmp 0x492d3b
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 E8 FE FF FF: jmp 0x492c23
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 4C: call dword ptr [edx + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        push 58e530h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 6F AA FF FF: call 0x48d7e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        neg eax
        sbb eax, eax
        inc eax
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
