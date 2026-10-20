// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00562A8A .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_00562a8a_00562A8A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 1ch], ecx
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x562aac
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 24h]
        ; Exact mapped bytes 0F 83 D2 00 00 00: jae 0x562b8d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 24h
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 1ch]
        add edx, eax
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp edx, ecx
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x562b88
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 10h]
        and ecx, dword ptr [eax + 10h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x562b88
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 0E: je 0x562b15
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 0ch]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 75 73: jne 0x562b88
        __asm _emit 0x75
        __asm _emit 0x73
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 8]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 65: jne 0x562b88
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 20h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 5A: jne 0x562b88
        __asm _emit 0x75
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 08: jne 0x562b54
        __asm _emit 0x75
        __asm _emit 0x08
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 02: jne 0x562b54
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 39: jmp 0x562b8d
        __asm _emit 0xeb
        __asm _emit 0x39
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2E: je 0x562b88
        __asm _emit 0x74
        __asm _emit 0x2e
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 28: je 0x562b88
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 1C: jne 0x562b88
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 F1 D7 F4 FF: call 0x4b0370
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xd7
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x562b88
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x562b8d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 16 FF FF FF: jmp 0x562aa3
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
