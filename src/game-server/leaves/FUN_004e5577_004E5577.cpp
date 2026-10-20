// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5577 .. +0x2F5 bytes.
extern "C" __declspec(naked) void FUN_004e5577_004E5577() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        push 34h
        push 5c7c28h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 CD 5B 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 11: jge 0x4e55aa
        __asm _emit 0x7d
        __asm _emit 0x11
        push 35h
        push 5c7c28h
        ; Exact mapped bytes E8 5B F4 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf4
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e55aa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4e5593
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 74 09: je 0x4e55bf
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 38: jne 0x4e55fd
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 32 7E 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x7e
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 8], 0
        ; Exact mapped bytes E9 66 02 00 00: jmp 0x4e5863
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 71: jne 0x4e5677
        __asm _emit 0x75
        __asm _emit 0x71
        cmp dword ptr [ebp + 8], 3fffffffh
        ; Exact mapped bytes 76 11: jbe 0x4e5620
        __asm _emit 0x76
        __asm _emit 0x11
        push 45h
        push 5c7c28h
        ; Exact mapped bytes E8 E5 F3 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e5620
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4e5606
        __asm _emit 0x75
        __asm _emit 0xe0
        push 47h
        push 5c7c28h
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 FA 79 00 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x79
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 13 3D FC FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes E9 EC 01 00 00: jmp 0x4e5863
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7F 40: jg 0x4e56c2
        __asm _emit 0x7f
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 27: jle 0x4e56b4
        __asm _emit 0x7e
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 8]
        shl eax, 2
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        lea edx, [ecx + edx*4]
        push edx
        ; Exact mapped bytes E8 BF 3C FC FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x3c
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        ; Exact mapped bytes E9 A1 01 00 00: jmp 0x4e5863
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 7C: jne 0x4e574d
        __asm _emit 0x75
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        cmp eax, 4
        ; Exact mapped bytes 7D 09: jge 0x4e56ee
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 4
        ; Exact mapped bytes EB 12: jmp 0x4e5700
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 400h
        ; Exact mapped bytes 7E 09: jle 0x4e5712
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 400h
        ; Exact mapped bytes EB 35: jmp 0x4e5747
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        cmp eax, 4
        ; Exact mapped bytes 7D 09: jge 0x4e572f
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 4
        ; Exact mapped bytes EB 12: jmp 0x4e5741
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 2ch], eax
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ch]
        add edx, dword ptr [ebp - 8]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 7D 0E: jge 0x4e5769
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 06: jmp 0x4e576f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 7D 11: jge 0x4e578b
        __asm _emit 0x7d
        __asm _emit 0x11
        push 6ah
        push 5c7c28h
        ; Exact mapped bytes E8 7A F2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e578b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4e576f
        __asm _emit 0x75
        __asm _emit 0xde
        cmp dword ptr [ebp - 0ch], 3fffffffh
        ; Exact mapped bytes 76 11: jbe 0x4e57ab
        __asm _emit 0x76
        __asm _emit 0x11
        push 6ch
        push 5c7c28h
        ; Exact mapped bytes E8 5A F2 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e57ab
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4e5791
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6eh
        push 5c7c28h
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 2
        push ecx
        ; Exact mapped bytes E8 6F 78 00 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 8]
        shl ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 36 38 FC FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7F 11: jg 0x4e5809
        __asm _emit 0x7f
        __asm _emit 0x11
        push 74h
        push 5c7c28h
        ; Exact mapped bytes E8 FC F1 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xf1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4e5809
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4e57ed
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 8]
        shl eax, 2
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 40 3B FC FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x3b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 C4 7B 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0ch], ecx
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
