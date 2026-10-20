// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047B610 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_0047b610_0047B610() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 11 4D 00 00: call 0x480330
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 75 13: jne 0x47b63e
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 50 20 FF FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 9
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x47b6be
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
        ; Exact mapped bytes FF 15 CC B7 68 00: call dword ptr [0x68b7cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 75 0B: jne 0x47b666
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 07: jmp 0x47b66d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 11: je 0x47b684
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 64 1F FF FF: call 0x46d5e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x1f
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 3A: jmp 0x47b6be
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov edx, dword ptr [ebp + 8]
        sar edx, 5
        mov eax, dword ptr [ebp + 8]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 6889a0h]
        mov dl, byte ptr [ecx + eax + 4]
        and dl, 0fdh
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov eax, dword ptr [eax*4 + 6889a0h]
        mov byte ptr [eax + ecx + 4], dl
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
