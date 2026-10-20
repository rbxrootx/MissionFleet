// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00413D49 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00413d49_00413D49() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, 43d568h
        push edi
        ; Exact mapped bytes 8B 3D 60 C2 43 00: mov edi, dword ptr [0x43c260]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov ebp, ecx
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, dword ptr [esp + 14h]
        dec eax
        push eax
        push esi
        push ebx
        ; Exact mapped bytes E8 F7 B8 00 00: call 0x41f661
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x413d93
        __asm _emit 0x74
        __asm _emit 0x22
        mov esi, 43d564h
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        dec eax
        push eax
        push esi
        push ebx
        ; Exact mapped bytes E8 DF B8 00 00: call 0x41f661
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x413d93
        __asm _emit 0x74
        __asm _emit 0x0a
        push ebx
        mov ecx, ebp
        ; Exact mapped bytes E8 0B 00 00 00: call 0x413d9c
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x413d95
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
