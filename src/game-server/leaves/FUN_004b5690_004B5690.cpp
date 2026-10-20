// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5690 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_004b5690_004B5690() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 0ch], -20h
        ; Exact mapped bytes 76 07: jbe 0x4b56a3
        __asm _emit 0x76
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 96 00 00 00: jmp 0x4b5739
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 9
        ; Exact mapped bytes E8 46 FB FF FF: call 0x4b51f0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FA 04 00 00: call 0x4b5bb0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3F: je 0x4b5701
        __asm _emit 0x74
        __asm _emit 0x3f
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 0D 90 1A 5D 00: cmp ecx, dword ptr [0x5d1a90]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 77 1E: ja 0x4b56f2
        __asm _emit 0x77
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 9B 13 00 00: call 0x4b6a80
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4b56f2
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edx
        push 9
        ; Exact mapped bytes E8 97 FB FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 38: jmp 0x4b5739
        __asm _emit 0xeb
        __asm _emit 0x38
        push 9
        ; Exact mapped bytes E8 88 FB FF FF: call 0x4b5290
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x4b5718
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 0ch], 1
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0fh
        and al, 0f0h
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 10h
        ; Exact mapped bytes A1 5C 02 5E 00: mov eax, dword ptr [0x5e025c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x02
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 78 22 5E 00: call dword ptr [0x5e2278]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
