// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BFAD0 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_004bfad0_004BFAD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E1 1B 00 00: call 0x4c16c0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 13: jne 0x4bfafe
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 80 17 FF FF: call 0x4b1270
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x4bfb7e
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 FC 21 5E 00: call dword ptr [0x5e21fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 0B: jne 0x4bfb26
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 FC 23 5E 00: call dword ptr [0x5e23fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 07: jmp 0x4bfb2d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x4bfb44
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 94 16 FF FF: call 0x4b11d0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 3A: jmp 0x4bfb7e
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 5df120h]
        mov dl, byte ptr [ecx + eax + 4]
        and dl, 0fdh
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov eax, dword ptr [eax*4 + 5df120h]
        mov byte ptr [eax + ecx + 4], dl
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
