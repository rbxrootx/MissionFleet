// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055A733 .. +0x2BD bytes.
extern "C" __declspec(naked) void FUN_0055a733_0055A733() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 21ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 14h], eax
        push 14bh
        push 5cebe0h
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 08 0A FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 58a190h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2B 09 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x09
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55a77d
        __asm _emit 0x75
        __asm _emit 0x14
        push 14ch
        push 5cebe0h
        ; Exact mapped bytes E8 88 A2 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55a77d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x55a758
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 59 D6 FF FF: call 0x557de4
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x55a7a4
        __asm _emit 0x74
        __asm _emit 0x14
        push 14dh
        push 5cebe0h
        ; Exact mapped bytes E8 61 A2 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55a7a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x55a783
        __asm _emit 0x75
        __asm _emit 0xd9
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x55a7c4
        __asm _emit 0x75
        __asm _emit 0x14
        push 150h
        push 5cebe0h
        ; Exact mapped bytes E8 41 A2 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55a7c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x55a7aa
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 09: je 0x55a7e2
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [eax], 0
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 09: je 0x55a7f1
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 09: je 0x55a800
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], 0
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 12: je 0x55a818
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 14h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 40h]
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov edx, dword ptr [ebp + 20h]
        mov dword ptr [edx], ecx
        push 58ea88h
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 5D 16 FF FF: call 0x54be86
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x55a846
        __asm _emit 0x75
        __asm _emit 0x14
        push 15dh
        push 5cebe0h
        ; Exact mapped bytes E8 BF A1 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55a846
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x55a82c
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x55a880
        __asm _emit 0x75
        __asm _emit 0x20
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0E: je 0x55a874
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 14 48 FF FF: call 0x54f083
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 7A: je 0x55a900
        __asm _emit 0x74
        __asm _emit 0x7a
        mov dword ptr [ebp - 18h], 0
        lea eax, [ebp - 18h]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 40: call dword ptr [eax + 0x40]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        ; Exact mapped bytes E8 E0 05 FF FF: call 0x54ae8e
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 18h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 45: jne 0x55a900
        __asm _emit 0x75
        __asm _emit 0x45
        push 100h
        lea ecx, [ebp - 118h]
        push ecx
        push 0f095h
        ; Exact mapped bytes E8 6F 03 FA FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x03
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55a8e9
        __asm _emit 0x75
        __asm _emit 0x14
        push 172h
        push 5cebe0h
        ; Exact mapped bytes E8 1C A1 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55a8e9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CC: jne 0x55a8bb
        __asm _emit 0x75
        __asm _emit 0xcc
        lea eax, [ebp - 118h]
        push eax
        ; Exact mapped bytes E8 54 0A FF FF: call 0x54b34f
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ecx], eax
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 0F 84 83 00 00 00: je 0x55a98d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], 0
        lea edx, [ebp - 11ch]
        push edx
        push 2
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 40: call dword ptr [edx + 0x40]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 11ch]
        push eax
        ; Exact mapped bytes E8 53 05 FF FF: call 0x54ae8e
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp + 1ch]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 45: jne 0x55a98d
        __asm _emit 0x75
        __asm _emit 0x45
        push 100h
        lea eax, [ebp - 21ch]
        push eax
        push 0f095h
        ; Exact mapped bytes E8 E2 02 FA FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x02
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55a976
        __asm _emit 0x75
        __asm _emit 0x14
        push 17eh
        push 5cebe0h
        ; Exact mapped bytes E8 8F A0 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55a976
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CC: jne 0x55a948
        __asm _emit 0x75
        __asm _emit 0xcc
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes E8 C7 09 FF FF: call 0x54b34f
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x09
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx], eax
        mov dword ptr [ebp - 8], 0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 DE 04 FF FF: call 0x54ae8e
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 05: je 0x55a9cc
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 1B: jmp 0x55a9e7
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 74 13: je 0x55a9e5
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        xor ecx, ecx
        cmp eax, dword ptr [ebp - 14h]
        sete cl
        mov edx, dword ptr [ebp + 24h]
        mov dword ptr [edx], ecx
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
