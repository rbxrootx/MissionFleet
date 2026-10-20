// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D018 .. +0xDA bytes.
extern "C" __declspec(naked) void FUN_0041d018_0041D018() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x41d047
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x41d04e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 94 00 00 00: jmp 0x41d0e2
        __asm _emit 0xe9
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 10h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 79 1B 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, 4
        ; Exact mapped bytes E8 55 1A 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 4C 1D 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 04: je 0x41d091
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x41d0e2
        __asm _emit 0xeb
        __asm _emit 0x51
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B7 1C 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3B: je 0x41d0e0
        __asm _emit 0x74
        __asm _emit 0x3b
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x41d0b7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7D 23: jge 0x41d0e0
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*8 + 90h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 0F: jne 0x41d0de
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x41d0e2
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB CE: jmp 0x41d0ae
        __asm _emit 0xeb
        __asm _emit 0xce
        xor eax, eax
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 F4 B6 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb6
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
