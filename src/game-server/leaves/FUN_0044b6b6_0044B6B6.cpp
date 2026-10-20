// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044B6B6 .. +0x16F bytes.
extern "C" __declspec(naked) void FUN_0044b6b6_0044B6B6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 10h], 31h
        mov dword ptr [ebp - 14h], 0
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 92 A7 FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xa7
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x44b70c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x44b815
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x44b725
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D E3 00 00 00: jge 0x44b812
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 63h
        mov dword ptr [ebp - 1ch], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4 + 270h]
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 4C 80 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x80
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x44b80d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + edx*4 + 270h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 0
        ; Exact mapped bytes 75 4C: jne 0x44b80d
        __asm _emit 0x75
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 73 25: jae 0x44b80d
        __asm _emit 0x73
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 37ch
        mov edx, dword ptr [eax + ecx + 234h]
        shr edx, 4
        and edx, 0ffh
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes E9 0A FF FF FF: jmp 0x44b71c
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 C1 CF 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xcf
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
