// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100803D0 .. +0x228 bytes.
extern "C" __declspec(naked) void FUN_100803d0_100803D0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 5ch]
        mov eax, dword ptr [ecx + 4]
        mov edi, dword ptr [ecx + 8]
        ; Exact mapped bytes 8B 0D D4 92 1C 10: mov ecx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub eax, edx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 1eh
        ; Exact mapped bytes 7D 0E: jge 0x10080403
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, edi
        sub eax, ecx
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 28h
        ; Exact mapped bytes 7C 0C: jl 0x1008040f
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 84 E4 01 00 00: je 0x100805f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov eax, dword ptr [ecx + 60h]
        and eax, 0fh
        lea edx, [eax + eax*4]
        lea edx, [eax + edx*8]
        lea eax, [eax + edx*2]
        mov edx, dword ptr [ecx + 0a4h]
        shr edx, 1
        add eax, edx
        lea edx, [eax + eax*4]
        lea eax, [eax + edx*2]
        lea eax, [eax + eax*4]
        test dword ptr [eax*4 + 101816cch], 40000000h
        ; Exact mapped bytes 0F 84 AD 01 00 00: je 0x100805f3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0cch]
        push ebp
        test eax, eax
        mov dword ptr [esi + 60h], ecx
        mov ebp, 1
        ; Exact mapped bytes 75 06: jne 0x1008045f
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 0cch], ebp
        mov ecx, dword ptr [ecx + 3ech]
        lea edi, [esi + 84h]
        mov eax, dword ptr [ecx + 50h]
        mov ecx, dword ptr [edi]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1008049f
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 3e8h]
        mov ecx, dword ptr [esi + 88h]
        mov eax, dword ptr [edx + 50h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x100804e0
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 60h]
        push ebx
        lea ebx, [esi + 8ch]
        mov edx, dword ptr [ecx + 3f4h]
        mov ecx, dword ptr [ebx]
        mov eax, dword ptr [edx + 50h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10080524
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 60h]
        mov edx, dword ptr [ecx + 3f0h]
        mov ecx, dword ptr [esi + 90h]
        mov eax, dword ptr [edx + 50h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x10080565
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [esi + 60h]
        mov eax, dword ptr [esi + 94h]
        mov edx, dword ptr [ecx + 438h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        mov ecx, dword ptr [edx + 6ch]
        ; Exact mapped bytes 74 0C: je 0x1008058a
        __asm _emit 0x74
        __asm _emit 0x0c
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x1008058a
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov ecx, dword ptr [edi]
        push 0fffffeffh
        ; Exact mapped bytes E8 CA EB 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push 0fffffeffh
        ; Exact mapped bytes E8 BE EB 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        push 101h
        ; Exact mapped bytes E8 AE EB 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        push 101h
        ; Exact mapped bytes E8 9E EB 07 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xeb
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, edi
        mov edx, 2
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100805c9
        __asm _emit 0x75
        __asm _emit 0xf4
        mov ecx, ebx
        mov edx, 2
        pop ebx
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 F4: jne 0x100805dd
        __asm _emit 0x75
        __asm _emit 0xf4
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 DE 06 00 00: call 0x10080cd0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
