// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521300 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_58521300_58521300() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F A0 FE FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        cmp eax, ecx
        ; Exact mapped bytes 75 21: jne 0x5852133c
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 75 1B: jne 0x5852133c
        __asm _emit 0x75
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 38h], 0
        ; Exact mapped bytes 75 12: jne 0x5852133c
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov ecx, dword ptr [ebp + 10h]
        sbb ecx, 0
        mov dword ptr [ebp + 0ch], eax
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 74 53: je 0x58521398
        __asm _emit 0x74
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C3 EC FF FF: call 0x58520010
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 44: je 0x58521398
        __asm _emit 0x74
        __asm _emit 0x44
        mov ecx, dword ptr [ebp + 0ch]
        or ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 06: jne 0x58521362
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 1
        ; Exact mapped bytes 74 1F: je 0x58521381
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        push eax
        ; Exact mapped bytes E8 8C 93 33 00: call 0x5885a706
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x93
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x58521398
        __asm _emit 0x75
        __asm _emit 0x17
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4ch]
        push eax
        ; Exact mapped bytes E8 5B 8E 33 00: call 0x5885a1ec
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x8e
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x585213a9
        __asm _emit 0x74
        __asm _emit 0x11
        push -1
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1C 52 FE FF: call 0x585065c0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 26: jmp 0x585213cf
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AF F4 FF FF: call 0x58520860
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 44h]
        push ecx
        mov edx, dword ptr [eax + 40h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B4 E4 FF FF: call 0x5851f880
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
