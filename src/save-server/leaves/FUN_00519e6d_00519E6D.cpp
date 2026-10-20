// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519E6D .. +0x1EA bytes.
extern "C" __declspec(naked) void FUN_00519e6d_00519E6D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp + 8], 8
        ; Exact mapped bytes 75 05: jne 0x519e84
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 CA 01 00 00: jmp 0x51a04e
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 33 0A 00 00: call 0x51a8cf
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        ; Exact mapped bytes E8 09 84 01 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 11: je 0x519ec4
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 74 08 F5 FF: call 0x46a730
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x08
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 06: jmp 0x519eca
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x519f75
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 18h]
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x519f75
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0C: je 0x519efb
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 10h]
        cdq
        idiv dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x519f02
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 1
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        mov edx, dword ptr [ebp - 18h]
        sub edx, ecx
        sar edx, 2
        cmp edx, 4
        ; Exact mapped bytes 72 14: jb 0x519f2f
        __asm _emit 0x72
        __asm _emit 0x14
        push 1ach
        push 67598ch
        ; Exact mapped bytes E8 16 EE 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519f2f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x519f08
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        mov edx, dword ptr [ebp - 18h]
        sub edx, ecx
        sar edx, 2
        lea eax, [edx*8 + 638720h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 10h]
        imul ecx, dword ptr [eax + 18h]
        mov eax, dword ptr [ebp - 1ch]
        mov eax, dword ptr [eax + 4]
        neg eax
        imul ecx, eax
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + edx + 8]
        add edx, ecx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        ; Exact mapped bytes E8 46 83 01 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 24h]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 74 11: je 0x519f9d
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 9B 07 F5 FF: call 0x46a730
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 06: jmp 0x519fa3
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 9B 00 00 00: je 0x51a04e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 0F 8D 8C 00 00 00: jge 0x51a04e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0C: je 0x519fd4
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        cdq
        idiv dword ptr [ebp - 14h]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x519fdb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 1
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, 8
        mov eax, dword ptr [ebp - 4]
        sub eax, edx
        sar eax, 2
        cmp eax, 4
        ; Exact mapped bytes 72 14: jb 0x51a008
        __asm _emit 0x72
        __asm _emit 0x14
        push 1b8h
        push 67598ch
        ; Exact mapped bytes E8 3D ED 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51a008
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x519fe1
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp - 24h]
        add edx, 8
        mov eax, dword ptr [ebp - 4]
        sub eax, edx
        sar eax, 2
        lea ecx, [eax*8 + 638720h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 8]
        imul edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ecx + 4]
        neg ecx
        imul edx, ecx
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + eax + 8]
        add eax, edx
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], eax
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
