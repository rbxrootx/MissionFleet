// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00543589 .. +0x23F bytes.
extern "C" __declspec(naked) void FUN_00543589_00543589() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d97ah
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
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x5435bb
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 7C 14: jl 0x5435cf
        __asm _emit 0x7c
        __asm _emit 0x14
        push 10bh
        push 676984h
        ; Exact mapped bytes E8 76 57 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5435cf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5435aa
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x5435f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 10ch
        push 676984h
        ; Exact mapped bytes E8 53 57 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5435f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5435d5
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + ecx*8]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x54361f
        __asm _emit 0x75
        __asm _emit 0x14
        push 10dh
        push 676984h
        ; Exact mapped bytes E8 26 57 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54361f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x5435f8
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 15 48 B9 68 00: call dword ptr [0x68b948]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 19: je 0x543653
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 0F 8C 2F 01 00 00: jl 0x543778
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 25 01 00 00: je 0x543778
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x5436e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        ; Exact mapped bytes E8 AA FA FF FF: call 0x54310e
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 0D: je 0x543681
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 04 07 00 00: call 0x543d80
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x543688
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 1ch
        push ecx
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 14h
        ; Exact mapped bytes E8 5B 08 00 00: call 0x543f30
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 1A: jne 0x543705
        __asm _emit 0x75
        __asm _emit 0x1a
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0ch]
        shl eax, 2
        push eax
        push 0
        ; Exact mapped bytes FF 15 64 B9 68 00: call dword ptr [0x68b964]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 1F: jmp 0x543724
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 2
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 0ch]
        shl eax, 2
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes FF 15 4C B9 68 00: call dword ptr [0x68b94c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x543732
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 AA F7 F5 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf7
        __asm _emit 0xf5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax + 0ch]
        sub edx, dword ptr [ecx + 8]
        shl edx, 2
        push edx
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 0ch]
        lea ecx, [eax + ecx*4]
        push ecx
        ; Exact mapped bytes E8 67 21 F2 FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x21
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 50 B9 68 00: call dword ptr [0x68b950]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x54378c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7C 14: jl 0x5437a0
        __asm _emit 0x7c
        __asm _emit 0x14
        push 12fh
        push 676984h
        ; Exact mapped bytes E8 A5 55 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x55
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5437a0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x543778
        __asm _emit 0x75
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 0ch]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + edx*4], eax
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
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
