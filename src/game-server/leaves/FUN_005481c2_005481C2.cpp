// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005481C2 .. +0x1F5 bytes.
extern "C" __declspec(naked) void FUN_005481c2_005481C2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 17: jge 0x54820c
        __asm _emit 0x7d
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x548315
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 09: jmp 0x54821e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 7D 15: jge 0x54823b
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x54823b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB DA: jmp 0x548215
        __asm _emit 0xeb
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F 8C CE 00 00 00: jl 0x548315
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        add eax, 20h
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 17: jne 0x548273
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 10h]
        shl edx, 3
        push edx
        push 2002h
        ; Exact mapped bytes FF 15 84 23 5E 00: call dword ptr [0x5e2384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 33: jmp 0x5482a6
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes FF 15 38 23 5E 00: call dword ptr [0x5e2338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push 2002h
        mov eax, dword ptr [ebp - 10h]
        shl eax, 3
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 30 23 5E 00: call dword ptr [0x5e2330]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 26: jne 0x5482d2
        __asm _emit 0x75
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 10h]
        push eax
        ; Exact mapped bytes FF 15 38 23 5E 00: call dword ptr [0x5e2338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1ch
        push ecx
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes E8 DA 7A F8 FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        sub ecx, dword ptr [eax + 4]
        shl ecx, 3
        push ecx
        push 0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 14h]
        lea edx, [ecx + eax*8]
        push edx
        ; Exact mapped bytes E8 70 10 F6 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 10h], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x54832f
        __asm _emit 0x75
        __asm _emit 0x14
        push 0d3h
        push 5ca28ch
        ; Exact mapped bytes E8 D6 C6 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54832f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x548315
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 7C 0C: jl 0x54834c
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*8]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x548373
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d9h
        push 5ca28ch
        ; Exact mapped bytes E8 92 C6 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x548373
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x54834c
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + ecx*8]
        or edx, 1
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax*8], edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 18h]
        add eax, 1ch
        push eax
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
