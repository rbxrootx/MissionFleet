// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044B8D3 .. +0x128 bytes.
extern "C" __declspec(naked) void FUN_0044b8d3_0044B8D3() {
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
        ; Exact mapped bytes E8 75 A5 FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xa5
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x44b929
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x44b9eb
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x44b942
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 0F 8D 9C 00 00 00: jge 0x44b9e8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9c
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
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4 + 270h]
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 1ch]
        push edx
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 2F 7E FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7e
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 4B: je 0x44b9e3
        __asm _emit 0x74
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16bdch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4 + 270h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 0
        ; Exact mapped bytes 75 09: jne 0x44b9e3
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E9 51 FF FF FF: jmp 0x44b939
        __asm _emit 0xe9
        __asm _emit 0x51
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 EB CD 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xcd
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
