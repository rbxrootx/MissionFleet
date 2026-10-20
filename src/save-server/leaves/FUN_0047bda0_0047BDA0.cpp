// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047BDA0 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_0047bda0_0047BDA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x47bdb3
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x47be3c
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 40 75 68 00 00: cmp dword ptr [0x687540], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 2E: jne 0x47bdea
        __asm _emit 0x75
        __asm _emit 0x2e
        mov eax, dword ptr [ebp + 0ch]
        and eax, 0ffffh
        cmp eax, 0ffh
        ; Exact mapped bytes 7E 10: jle 0x47bddb
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes E8 B0 18 FF FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 61: jmp 0x47be3c
        __asm _emit 0xeb
        __asm _emit 0x61
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ebp + 0ch]
        mov byte ptr [ecx], dl
        mov eax, 1
        ; Exact mapped bytes EB 52: jmp 0x47be3c
        __asm _emit 0xeb
        __asm _emit 0x52
        mov dword ptr [ebp - 8], 0
        lea eax, [ebp - 8]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D CC E0 67 00: mov ecx, dword ptr [0x67e0cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 1
        lea eax, [ebp + 0ch]
        push eax
        push 220h
        ; Exact mapped bytes 8B 0D 50 75 68 00: mov ecx, dword ptr [0x687550]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x47be29
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 10: je 0x47be39
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes E8 52 18 FF FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 03: jmp 0x47be3c
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
