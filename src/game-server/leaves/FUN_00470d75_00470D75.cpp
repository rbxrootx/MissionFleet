// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00470D75 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_00470d75_00470D75() {
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
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 04: jne 0x470da8
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 7F: jmp 0x470e27
        __asm _emit 0xeb
        __asm _emit 0x7f
        push 1ch
        push 0
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 BB 85 03 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        push 1ch
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx]
        push edx
        lea eax, [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 54 82 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        add edx, 1ch
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        lea ecx, [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 25 71 FA FF: call 0x417f14
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x71
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 1ch
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx + 168h]
        add edx, 78h
        push edx
        ; Exact mapped bytes E8 16 82 03 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x82
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0F: jne 0x470e22
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes 8B 0D 80 CB 5D 00: mov ecx, dword ptr [0x5dcb80]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes E8 1B 62 FA FF: call 0x41703d
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x62
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, 1
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 AF 79 03 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
