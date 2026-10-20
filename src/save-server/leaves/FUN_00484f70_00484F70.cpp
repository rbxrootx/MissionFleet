// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484F70 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_00484f70_00484F70() {
    __asm {
        sub esp, 4
        push ebx
        push esi
        mov esi, dword ptr [esp + 10h]
        push edi
        push esi
        ; Exact mapped bytes E8 70 F4 FF FF: call 0x4843f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 1C: jne 0x484fa3
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 18h]
        push eax
        push 0
        push ecx
        push esi
        ; Exact mapped bytes E8 67 11 00 00: call 0x486100
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
        xor eax, eax
        ; Exact mapped bytes 66 A1 54 90 68 00: mov ax, word ptr [0x689054]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 3C BF 68 00: call dword ptr [0x68bf3c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 62: jne 0x485019
        __asm _emit 0x75
        __asm _emit 0x62
        lea ebx, [esp + 0ch]
        ; Exact mapped bytes 8B 3D B0 BF 68 00: mov edi, dword ptr [0x68bfb0]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [esp + 0ch], 29ah
        push ebx
        push 0
        push 1944h
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp dword ptr [esp + 0ch], 29ah
        ; Exact mapped bytes 75 3B: jne 0x485019
        __asm _emit 0x75
        __asm _emit 0x3b
        push ebx
        push 0
        push 1943h
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        cmp dword ptr [esp + 0ch], 29ah
        ; Exact mapped bytes 75 26: jne 0x485019
        __asm _emit 0x75
        __asm _emit 0x26
        xor eax, eax
        ; Exact mapped bytes 66 A1 4E 90 68 00: mov ax, word ptr [0x68904e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x4e
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF 15 44 BF 68 00: call dword ptr [0x68bf44]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 44 24 18: mov ax, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 1ch]
        push ecx
        push 0
        push eax
        push esi
        ; Exact mapped bytes E8 EA 10 00 00: call 0x486100
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        pop esi
        pop ebx
        add esp, 4
        ret
    }
}
