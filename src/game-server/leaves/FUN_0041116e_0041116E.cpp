// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041116E .. +0x1B7 bytes.
extern "C" __declspec(naked) void FUN_0041116e_0041116E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 10h
        ; Exact mapped bytes E8 10 02 00 00: call 0x4113a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 10h
        ; Exact mapped bytes E8 22 02 00 00: call 0x4113c0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8E 6D 01 00 00: jle 0x411313
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 21 82 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes E8 7D 86 09 00: call 0x4a9840
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 4
        push 5a0ebch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 FA 81 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 4]
        add ecx, eax
        push ecx
        ; Exact mapped bytes E8 59 86 09 00: call 0x4a9840
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x86
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 DD 81 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        add eax, 4
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x4112ec
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        mov byte ptr [eax + edx], 27h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B0 01 00 00: call 0x4113e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 9A 81 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9E 01 00 00: call 0x4113e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 8]
        add ecx, dword ptr [edx + 0ch]
        push ecx
        ; Exact mapped bytes E8 CB 7D 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x7d
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 01 00 00: call 0x4113e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 6A 81 09 00: call 0x4a93d0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x81
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        add edx, eax
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        mov byte ptr [edx + ecx], 27h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 01 00 00: call 0x411400
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 21: je 0x4112c8
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        mov byte ptr [eax + edx], 2ch
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        add ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 1F: jmp 0x4112e7
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        mov byte ptr [ecx + eax], 29h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        add edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes E9 13 FF FF FF: jmp 0x4111ff
        __asm _emit 0xe9
        __asm _emit 0x13
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        mov byte ptr [edx + ecx], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes EB 02: jmp 0x411315
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 C1 74 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x74
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
