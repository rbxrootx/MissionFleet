// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B46F0 .. +0x21F bytes.
extern "C" __declspec(naked) void FUN_587b46f0() {
    __asm {
        sub esp, 14h
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 164h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 04 02 00 00: je 0x587b4908
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 3900h]
        push ebx
        push ebp
        mov ebp, dword ptr [ecx + 4]
        push edi
        mov edi, dword ptr [ecx + 8]
        lea eax, [esp + 1ch]
        push eax
        push edx
        mov dword ptr [esp + 24h], ebp
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 6A 26 12 00: call 0x588d6d90
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x26
        __asm _emit 0x12
        __asm _emit 0x00
        mov eax, dword ptr [esp + 20h]
        sub eax, dword ptr [esi + 8]
        mov ebx, dword ptr [esp + 1ch]
        sub edi, eax
        sub ebx, dword ptr [esi + 4]
        imul edi, edi, 75h
        mov eax, 51eb851fh
        imul edi
        sar edx, 5
        mov edi, edx
        shr edi, 1fh
        add edi, edx
        sub ebp, ebx
        mov eax, edi
        mov ecx, ebp
        imul eax, edi
        imul ecx, ebp
        add eax, ecx
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 1ch], ebx
        ; Exact mapped bytes DB 44 24 10: fild dword ptr [esp + 0x10]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes E8 27 85 1C 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x00
        imul edi, edi, 75h
        ; Exact mapped bytes D9 7C 24 10: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        movzx eax, word ptr [esp + 10h]
        mov ecx, dword ptr [esi + 0a0h]
        or eax, 0c00h
        mov dword ptr [esp + 14h], eax
        mov eax, 51eb851fh
        imul edi
        ; Exact mapped bytes D9 6C 24 14: fldcw word ptr [esp + 0x14]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes DF 7C 24 14: fistp qword ptr [esp + 0x14]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x14
        mov eax, dword ptr [esi + 0a4h]
        sar edx, 5
        ; Exact mapped bytes D9 6C 24 10: fldcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        mov edi, edx
        mov ebp, dword ptr [esp + 14h]
        shr edi, 1fh
        add edi, edx
        lea edx, [ecx + eax*2]
        add edx, eax
        add eax, 20h
        mov dword ptr [esp + 20h], edi
        sub ebx, dword ptr [esi + edx*8 + 2fch]
        lea ecx, [ecx + eax*2]
        add ecx, eax
        mov dword ptr [esp + 1ch], ebx
        add edi, dword ptr [esi + ecx*8]
        mov eax, ebx
        mov edx, edi
        imul eax, ebx
        imul edx, edi
        add edx, eax
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 20h], edi
        ; Exact mapped bytes DB 44 24 14: fild dword ptr [esp + 0x14]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 A9 84 1C 00: call 0x5897cc90
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes D9 7C 24 10: fnstcw word ptr [esp + 0x10]
        __asm _emit 0xd9
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        movzx eax, word ptr [esp + 10h]
        mov edx, dword ptr [esi + 8]
        or eax, 0c00h
        mov dword ptr [esp + 14h], eax
        push edi
        push ebx
        ; Exact mapped bytes D9 6C 24 1C: fldcw word ptr [esp + 0x1c]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes DF 7C 24 1C: fistp qword ptr [esp + 0x1c]
        __asm _emit 0xdf
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        mov ecx, dword ptr [esp + 1ch]
        mov dword ptr [esp + 1ch], ecx
        ; Exact mapped bytes D9 6C 24 18: fldcw word ptr [esp + 0x18]
        __asm _emit 0xd9
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x18
        mov eax, dword ptr [esi + 4]
        push edx
        push eax
        ; Exact mapped bytes E8 F4 77 FB FF: call 0x5876c010
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x77
        __asm _emit 0xfb
        __asm _emit 0xff
        lea eax, [eax + eax*4]
        add esp, 10h
        add eax, eax
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 84 BF FF FF: call 0x587b07b0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 7E 7E FB FF: call 0x5876c6b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, eax
        cdq
        xor eax, edx
        sub eax, edx
        add esp, 8
        cmp eax, 2
        ; Exact mapped bytes 7E 77: jle 0x587b48b8
        __asm _emit 0x7e
        __asm _emit 0x77
        mov eax, dword ptr [esi + 0cch]
        add eax, 2
        cmp ecx, eax
        mov edx, 1
        ; Exact mapped bytes 7E 12: jle 0x587b4865
        __asm _emit 0x7e
        __asm _emit 0x12
        mov dword ptr [esi + 118h], 0
        mov dword ptr [esi + 110h], edx
        ; Exact mapped bytes EB 25: jmp 0x587b488a
        __asm _emit 0xeb
        __asm _emit 0x25
        cmp ecx, 5
        ; Exact mapped bytes 7D 12: jge 0x587b487c
        __asm _emit 0x7d
        __asm _emit 0x12
        mov dword ptr [esi + 118h], edx
        mov dword ptr [esi + 110h], 0
        ; Exact mapped bytes EB 0E: jmp 0x587b488a
        __asm _emit 0xeb
        __asm _emit 0x0e
        xor eax, eax
        mov dword ptr [esi + 118h], eax
        mov dword ptr [esi + 110h], eax
        test ecx, ecx
        ; Exact mapped bytes 7E 12: jle 0x587b48a0
        __asm _emit 0x7e
        __asm _emit 0x12
        mov dword ptr [esi + 124h], edx
        mov dword ptr [esi + 108h], 40000000h
        ; Exact mapped bytes EB 22: jmp 0x587b48c2
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes 7D 20: jge 0x587b48c2
        __asm _emit 0x7d
        __asm _emit 0x20
        mov dword ptr [esi + 124h], 0ffffffffh
        mov dword ptr [esi + 108h], 40000000h
        ; Exact mapped bytes EB 0A: jmp 0x587b48c2
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [esi + 108h], 0
        movzx ecx, word ptr [esi + 2d0h]
        mov edx, dword ptr [esi + 164h]
        mov eax, dword ptr [edx + 6028h]
        mov edx, dword ptr [eax + 9ch]
        imul edx, dword ptr [esp + 14h]
        shr ecx, 6
        and ecx, 3fh
        imul ecx, ebp
        imul ecx, ecx, 64h
        pop edi
        pop ebp
        pop ebx
        cmp ecx, edx
        ; Exact mapped bytes 76 0E: jbe 0x587b4901
        __asm _emit 0x76
        __asm _emit 0x0e
        add dword ptr [esi + 3900h], -5
        xor eax, eax
        pop esi
        add esp, 14h
        ret
        add dword ptr [esi + 3900h], 5
        xor eax, eax
        pop esi
        add esp, 14h
        ret
    }
}
