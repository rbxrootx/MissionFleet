// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CA5E0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004ca5e0_004CA5E0() {
    __asm {
        ; Exact mapped bytes 83 3D E0 04 5E 00 00: cmp dword ptr [0x5e04e0], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xe0
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ebp
        ; Exact mapped bytes 75 09: jne 0x4ca5f6
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 14h]
        push 5
        push eax
        ; Exact mapped bytes 8B 2D E4 26 5E 00: mov ebp, dword ptr [0x5e26e4]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xe4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 3D: je 0x4ca648
        __asm _emit 0x74
        __asm _emit 0x3d
        ; Exact mapped bytes 66 8B 74 24 18: mov si, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        push 0
        push esi
        push edi
        ; Exact mapped bytes E8 17 FF FF FF: call 0x4ca530
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push 5
        push edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 16: je 0x4ca63d
        __asm _emit 0x74
        __asm _emit 0x16
        push edi
        push esi
        push ebx
        ; Exact mapped bytes E8 01 FF FF FF: call 0x4ca530
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push 2
        push ebx
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 75 EA: jne 0x4ca627
        __asm _emit 0x75
        __asm _emit 0xea
        push 2
        push edi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 C8: jne 0x4ca610
        __asm _emit 0x75
        __asm _emit 0xc8
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
