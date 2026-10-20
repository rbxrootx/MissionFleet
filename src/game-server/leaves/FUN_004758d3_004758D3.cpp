// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004758D3 .. +0x156 bytes.
extern "C" __declspec(naked) void FUN_004758d3_004758D3() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57becbh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 78h
        push edi
        push ecx
        lea edi, [ebp - 84h]
        mov ecx, 1eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 80h], ecx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 6ch], eax
        push 151h
        push 5bb340h
        push 24h
        ; Exact mapped bytes E8 16 77 07 00: call 0x4ed033
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x77
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 7ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 7ch], 0
        ; Exact mapped bytes 74 17: je 0x475947
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 6ch]
        imul ecx, ecx, 54h
        push ecx
        mov ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes E8 51 B5 F9 FF: call 0x410e90
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xb5
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x475951
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 78h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 78h]
        mov dword ptr [ebp - 74h], eax
        mov dword ptr [ebp - 70h], 0
        ; Exact mapped bytes EB 09: jmp 0x475979
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 70h]
        add ecx, 1
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp - 70h]
        cmp edx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes 73 48: jae 0x4759c9
        __asm _emit 0x73
        __asm _emit 0x48
        push 8
        push 0
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E2 39 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x39
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 8
        mov ecx, dword ptr [ebp - 70h]
        mov edx, dword ptr [ebp + 18h]
        lea eax, [edx + ecx*8]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 7A 36 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x36
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 68h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        ; Exact mapped bytes E8 37 F8 FF FF: call 0x4751f0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push 54h
        lea ecx, [ebp - 68h]
        push ecx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 FF B5 F9 FF: call 0x410fc6
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xb5
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB A7: jmp 0x475970
        __asm _emit 0xeb
        __asm _emit 0xa7
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 36: je 0x475a05
        __asm _emit 0x74
        __asm _emit 0x36
        push 0
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 B7 4A F9 FF: call 0x40a490
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 8E 4A F9 FF: call 0x40a470
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3B 18 01 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 07: jne 0x475a03
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 08: jmp 0x475a0b
        __asm _emit 0xeb
        __asm _emit 0x08
        ; Exact mapped bytes EB 04: jmp 0x475a09
        __asm _emit 0xeb
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x475a0b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        add esp, 84h
        cmp ebp, esp
        ; Exact mapped bytes E8 BD 2D 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x2d
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
