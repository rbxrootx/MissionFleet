// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00542740 .. +0x1CA bytes.
extern "C" __declspec(naked) void FUN_00542740_00542740() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0a0h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes 83 3D E8 E8 5D 00 00: cmp dword ptr [0x5de8e8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x542769
        __asm _emit 0x74
        __asm _emit 0x14
        push 30ah
        push 5c5b58h
        ; Exact mapped bytes E8 9C 22 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x542769
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x54274c
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes FF 15 7C 25 5E 00: call dword ptr [0x5e257c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 1F 2F FF FF: call 0x53569d
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7E 06: jle 0x54278a
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 5
        ; Exact mapped bytes 7F 14: jg 0x54279e
        __asm _emit 0x7f
        __asm _emit 0x14
        push 30dh
        push 5c5b58h
        ; Exact mapped bytes E8 67 22 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x22
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54279e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x54277e
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7E 07: jle 0x5427b1
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 20h
        mov edx, dword ptr [ebp - 0ch]
        add edx, 0fh
        sar edx, 4
        mov dword ptr [ebp - 9ch], edx
        mov eax, dword ptr [ebp - 0ch]
        sub eax, 4
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 98h], eax
        mov eax, dword ptr [ebp - 9ch]
        shl eax, 4
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 98h]
        add ecx, eax
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 0ch
        ; Exact mapped bytes 7E 0A: jle 0x5427fe
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov dword ptr [ebp - 98h], 0ch
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7E 07: jle 0x54280b
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 20h
        push 80h
        push 0ffh
        lea edx, [ebp - 94h]
        push edx
        ; Exact mapped bytes E8 4F 6B F6 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x6b
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 9ch]
        shl eax, 1
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 6
        sar ecx, 1
        imul eax, ecx
        lea edx, [ebp + eax - 94h]
        mov dword ptr [ebp - 4], edx
        mov dword ptr [ebp - 14h], 583070h
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x54285a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 5
        ; Exact mapped bytes 7D 58: jge 0x5428b8
        __asm _emit 0x7d
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 14h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov ecx, dword ptr [ebp - 98h]
        shl edx, cl
        not edx
        ; Exact mapped bytes 66 89 95 60 FF FF FF: mov word ptr [ebp - 0xa0], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 0a0h]
        and ecx, 0ffffh
        sar ecx, 8
        and ecx, 0ffh
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx], cl
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [ebp - 0a0h]
        mov byte ptr [eax + 1], cl
        mov edx, dword ptr [ebp - 9ch]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*2]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 99: jmp 0x542851
        __asm _emit 0xeb
        __asm _emit 0x99
        lea edx, [ebp - 94h]
        push edx
        push 1
        push 1
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 9C 21 5E 00: call dword ptr [0x5e219c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 E8 E8 5D 00: mov dword ptr [0x5de8e8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D E8 E8 5D 00 00: cmp dword ptr [0x5de8e8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 24: jne 0x542903
        __asm _emit 0x75
        __asm _emit 0x24
        push 5c5c24h
        push 5c5c58h
        ; Exact mapped bytes E8 27 D3 F8 FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd3
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        push 7fe3h
        push 0
        ; Exact mapped bytes FF 15 78 28 5E 00: call dword ptr [0x5e2878]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 E8 E8 5D 00: mov dword ptr [0x5de8e8], eax
        __asm _emit 0xa3
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
