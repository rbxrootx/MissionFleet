// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500952 .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_00500952_00500952() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 417h
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x500991
        __asm _emit 0x75
        __asm _emit 0x14
        push 235h
        push 675764h
        ; Exact mapped bytes E8 B4 83 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500991
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C7: jne 0x50095e
        __asm _emit 0x75
        __asm _emit 0xc7
        mov byte ptr [ebp - 0ah], 0
        mov byte ptr [ebp - 9], 0
        mov edx, dword ptr [ebp + 0ch]
        mov al, byte ptr [edx + 8]
        xor al, 4
        mov ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx + 8], al
        mov edx, dword ptr [ebp + 0ch]
        mov byte ptr [edx + 0ah], 0
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax + 0bh], 0
        push 14h
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 06 95 F6 FF: call 0x469ed0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x95
        __asm _emit 0xf6
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x500af0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B1 58 FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 0
        push 0
        push 10000000h
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 6B 59 FD FF: call 0x4d635c
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 416h
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x500a22
        __asm _emit 0x75
        __asm _emit 0x14
        push 245h
        push 675764h
        ; Exact mapped bytes E8 23 83 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500a22
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x5009f1
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 415h
        mov eax, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x500a5b
        __asm _emit 0x75
        __asm _emit 0x14
        push 246h
        push 675764h
        ; Exact mapped bytes E8 EA 82 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x500a5b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C7: jne 0x500a28
        __asm _emit 0x75
        __asm _emit 0xc7
        push 0
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 10000000h
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E5 58 FD FF: call 0x4d635c
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x58
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 9]
        mov ecx, dword ptr [ebp - 0bh]
        and ecx, 0ffh
        xor eax, ecx
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x500aaa
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov al, byte ptr [edx + 9]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x500ab6
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        cmp edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 74 0C: je 0x500ab6
        __asm _emit 0x74
        __asm _emit 0x0c
        push 1
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 FB B4 02 00: call 0x52bfaf
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x500af0
        __asm _emit 0xeb
        __asm _emit 0x3a
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 09 17 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x17
        __asm _emit 0x03
        __asm _emit 0x00
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 41dh
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x500af0
        __asm _emit 0x74
        __asm _emit 0x13
        push 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 DB 18 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0D B5 02 00: call 0x52bffd
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb5
        __asm _emit 0x02
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
