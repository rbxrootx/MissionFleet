// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B8D0 .. +0xDD bytes.
extern "C" __declspec(naked) void FUN_5850b8d0_5850B8D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF FA FF FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 6A: je 0x5850b954
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E F6 FF FF: call 0x5850af20
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 76 5D: jbe 0x5850b954
        __asm _emit 0x76
        __asm _emit 0x5d
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 F0 EE F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 AA F6 FF FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 4B: jne 0x5850b95b
        __asm _emit 0x75
        __asm _emit 0x4b
        mov edx, 1
        imul eax, edx, -1
        mov ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [ecx + eax]
        mov byte ptr [ebp - 1], dl
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 56 9B FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 2], al
        movzx ecx, byte ptr [ebp - 1]
        push ecx
        movzx edx, byte ptr [ebp - 2]
        push edx
        ; Exact mapped bytes E8 41 F6 FF FF: call 0x5850af80
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x5850b95b
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 2
        ; Exact mapped bytes 74 07: je 0x5850b95b
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 97 EE F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 4C: jmp 0x5850b9a7
        __asm _emit 0xeb
        __asm _emit 0x4c
        push -1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AB F9 FF FF: call 0x5850b310
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 81 EE F9 FF: call 0x584aa7f0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xee
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 3B F6 FF FF: call 0x5850afb0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 75 1C: jne 0x5850b99b
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F8 9A FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov byte ptr [ebp - 3], al
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0A FA FF FF: call 0x5850b3a0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ebp - 3]
        mov byte ptr [eax], cl
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 BC FC FF FF: call 0x5850b660
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
