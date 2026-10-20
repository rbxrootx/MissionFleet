// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F5900 .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_585f5900_585F5900() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 150h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 14ch], ecx
        mov ecx, 45h
        mov esi, dword ptr [ebp + 0ch]
        lea edi, [ebp - 13ch]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 140h], eax
        ; Exact mapped bytes 66 8B 4D 18: mov cx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 4D F2: mov word ptr [ebp - 0xe], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf2
        ; Exact mapped bytes 66 8B 55 1C: mov dx, word ptr [ebp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x1c
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov dword ptr [ebp - 8], 0
        cmp dword ptr [ebp + 8], 4000008h
        ; Exact mapped bytes 74 09: je 0x585f595d
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp + 8], 4000009h
        ; Exact mapped bytes 75 57: jne 0x585f59b4
        __asm _emit 0x75
        __asm _emit 0x57
        movzx eax, word ptr [ebp - 32h]
        movzx ecx, byte ptr [ebp - 3ch]
        shl ecx, 5
        add eax, ecx
        mov dword ptr [ebp - 144h], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 3E: je 0x585f59b4
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp - 144h], 0
        ; Exact mapped bytes 74 35: je 0x585f59b4
        __asm _emit 0x74
        __asm _emit 0x35
        mov edx, dword ptr [ebp - 144h]
        push edx
        ; Exact mapped bytes E8 B7 B6 23 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xb6
        __asm _emit 0x23
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 148h], eax
        mov eax, dword ptr [ebp - 148h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 144h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 DF 6E 25 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6e
        __asm _emit 0x25
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14ch]
        add ecx, 24ch
        mov dword ptr [ebp - 150h], ecx
        lea edx, [ebp - 140h]
        push edx
        mov ecx, dword ptr [ebp - 150h]
        ; Exact mapped bytes E8 78 EB FF FF: call 0x585f4550
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 6B B6 23 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xb6
        __asm _emit 0x23
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
