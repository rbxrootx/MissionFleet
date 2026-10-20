// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00558B55 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_00558b55_00558B55() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB A3 FF FF: call 0x552f33
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 1C: je 0x558b8d
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 20h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x558b68
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 74 1C: je 0x558bb8
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 24h], 0
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x558b93
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 8]
        add eax, 20h
        push eax
        push 0
        push 58e540h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 34h]
        push edx
        ; Exact mapped bytes FF 15 B4 29 5E 00: call dword ptr [0x5e29b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 16ch
        push 5cfe58h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 62 25 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x25
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
