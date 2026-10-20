// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051230B .. +0x366 bytes.
extern "C" __declspec(naked) void FUN_0051230b_0051230B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        push 3f6h
        push 5c84b0h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 36 8E FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 1F 3A 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 BD 9D 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 64h]
        neg eax
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 60h]
        neg edx
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 3E 3D 02 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 DA 3A 02 00: call 0x535e3a
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E5 3A 02 00: call 0x535e50
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 88h], 0
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 8ch], 0
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 6C: jne 0x512406
        __asm _emit 0x75
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 64h]
        shl edx, 1
        ; Exact mapped bytes 2B 15 F4 E8 5D 00: sub edx, dword ptr [0x5de8f4]
        __asm _emit 0x2b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 4ch]
        sub ecx, edx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        neg eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 8ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 7ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 7F 14: jg 0x5123e6
        __asm _emit 0x7f
        __asm _emit 0x14
        push 40ah
        push 5c84b0h
        ; Exact mapped bytes E8 1F 26 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x26
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5123e6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x5123c6
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 9ch]
        sub ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 9ch], ecx
        ; Exact mapped bytes E9 39 02 00 00: jmp 0x51263f
        __asm _emit 0xe9
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 75 6C: jne 0x512478
        __asm _emit 0x75
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 60h]
        shl ecx, 1
        ; Exact mapped bytes 2B 0D F4 E8 5D 00: sub ecx, dword ptr [0x5de8f4]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 48h]
        sub eax, ecx
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        neg eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 88h], eax
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 78h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 7F 14: jg 0x512458
        __asm _emit 0x7f
        __asm _emit 0x14
        push 411h
        push 5c84b0h
        ; Exact mapped bytes E8 AD 25 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x25
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512458
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x512438
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 98h]
        sub eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 98h], eax
        ; Exact mapped bytes E9 C7 01 00 00: jmp 0x51263f
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 65h
        ; Exact mapped bytes 0F 8C BD 00 00 00: jl 0x51253f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 73h
        ; Exact mapped bytes 0F 8F B3 00 00 00: jg 0x51253f
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 64h]
        shl eax, 1
        ; Exact mapped bytes 2B 05 F4 E8 5D 00: sub eax, dword ptr [0x5de8f4]
        __asm _emit 0x2b
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 4ch]
        sub edx, eax
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cdq
        sub eax, edx
        sar eax, 1
        neg eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 8ch], eax
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 09: jmp 0x5124ca
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 24h]
        add edx, 1
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp + 8]
        sub eax, 65h
        cmp dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 7D 20: jge 0x5124f5
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 24h]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 7ch]
        mov ecx, dword ptr [eax + ecx + 8]
        mov edx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [edx + 5ch]
        mov eax, dword ptr [ebp - 8]
        add eax, ecx
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB CC: jmp 0x5124c1
        __asm _emit 0xeb
        __asm _emit 0xcc
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 94h], edx
        mov eax, dword ptr [ebp - 24h]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 7ch]
        mov eax, dword ptr [edx + eax + 8]
        mov ecx, dword ptr [ebp - 2ch]
        add eax, dword ptr [ecx + 54h]
        ; Exact mapped bytes 03 05 F4 E8 5D 00: add eax, dword ptr [0x5de8f4]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        add edx, eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 9ch]
        sub ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 9ch], ecx
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x51263f
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0c9h
        ; Exact mapped bytes 0F 8C BF 00 00 00: jl 0x51260b
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0d7h
        ; Exact mapped bytes 0F 8F B2 00 00 00: jg 0x51260b
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 60h]
        shl ecx, 1
        ; Exact mapped bytes 2B 0D F4 E8 5D 00: sub ecx, dword ptr [0x5de8f4]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 48h]
        sub eax, ecx
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        neg eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 88h], eax
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x512597
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 28h]
        add edx, 1
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 8]
        sub eax, 0c9h
        cmp dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 7D 20: jge 0x5125c4
        __asm _emit 0x7d
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 28h]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 78h]
        mov ecx, dword ptr [eax + ecx + 8]
        mov edx, dword ptr [ebp - 2ch]
        add ecx, dword ptr [edx + 58h]
        mov eax, dword ptr [ebp - 4]
        add eax, ecx
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB CA: jmp 0x51258e
        __asm _emit 0xeb
        __asm _emit 0xca
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], edx
        mov eax, dword ptr [ebp - 28h]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [edx + eax + 8]
        mov ecx, dword ptr [ebp - 2ch]
        add eax, dword ptr [ecx + 50h]
        ; Exact mapped bytes 03 05 F4 E8 5D 00: add eax, dword ptr [0x5de8f4]
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        add edx, eax
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 98h]
        sub ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [edx + 98h], ecx
        ; Exact mapped bytes EB 34: jmp 0x51263f
        __asm _emit 0xeb
        __asm _emit 0x34
        mov eax, dword ptr [ebp + 8]
        push eax
        push 5c8758h
        ; Exact mapped bytes E8 FC D5 FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x512639
        __asm _emit 0x74
        __asm _emit 0x14
        push 42bh
        push 5c84b0h
        ; Exact mapped bytes E8 CC 23 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x512639
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x51261c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
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
