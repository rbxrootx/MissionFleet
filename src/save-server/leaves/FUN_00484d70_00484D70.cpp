// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484D70 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_00484d70_00484D70() {
    __asm {
        ; Exact mapped bytes 83 3D 40 90 68 00 00: cmp dword ptr [0x689040], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ebp
        ; Exact mapped bytes 75 09: jne 0x484d86
        __asm _emit 0x75
        __asm _emit 0x09
        xor eax, eax
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, dword ptr [esp + 14h]
        push -4
        push esi
        ; Exact mapped bytes FF 15 A0 BF 68 00: call dword ptr [0x68bfa0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        xor ecx, ecx
        ; Exact mapped bytes 8B 3D 50 BF 68 00: mov edi, dword ptr [0x68bf50]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D 44 BF 68 00: mov ebx, dword ptr [0x68bf44]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [ecx + ecx*2]
        cmp dword ptr [edx*8 + 689aa0h], eax
        ; Exact mapped bytes 75 25: jne 0x484dd2
        __asm _emit 0x75
        __asm _emit 0x25
        push ecx
        push esi
        ; Exact mapped bytes E8 5C F6 FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ebp, eax
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
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push ebp
        push -4
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        xor eax, eax
        mov ecx, 10h
        inc ecx
        cmp ecx, 6
        ; Exact mapped bytes 7C C9: jl 0x484da1
        __asm _emit 0x7c
        __asm _emit 0xc9
        ; Exact mapped bytes 75 6F: jne 0x484e49
        __asm _emit 0x75
        __asm _emit 0x6f
        cmp eax, 4859b0h
        ; Exact mapped bytes 75 20: jne 0x484e01
        __asm _emit 0x75
        __asm _emit 0x20
        push ecx
        push esi
        ; Exact mapped bytes E8 28 F6 FF FF: call 0x484410
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ebp, eax
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
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        push ebp
        push -4
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        ; Exact mapped bytes EB 48: jmp 0x484e49
        __asm _emit 0xeb
        __asm _emit 0x48
        xor eax, eax
        ; Exact mapped bytes 8B 3D 3C BF 68 00: mov edi, dword ptr [0x68bf3c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 A1 4E 90 68 00: mov ax, word ptr [0x68904e]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x4e
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x484e37
        __asm _emit 0x75
        __asm _emit 0x20
        xor eax, eax
        ; Exact mapped bytes 66 A1 52 90 68 00: mov ax, word ptr [0x689052]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x52
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x484e37
        __asm _emit 0x75
        __asm _emit 0x10
        xor eax, eax
        ; Exact mapped bytes 66 A1 50 90 68 00: mov ax, word ptr [0x689050]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x50
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x484e49
        __asm _emit 0x74
        __asm _emit 0x12
        push 1
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
        ; Exact mapped bytes FF 15 1C BF 68 00: call dword ptr [0x68bf1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push 5
        push esi
        ; Exact mapped bytes 8B 35 D8 BE 68 00: mov esi, dword ptr [0x68bed8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xd8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 11: je 0x484e6b
        __asm _emit 0x74
        __asm _emit 0x11
        push edi
        ; Exact mapped bytes E8 10 FF FF FF: call 0x484d70
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 2
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 75 EF: jne 0x484e5a
        __asm _emit 0x75
        __asm _emit 0xef
        mov eax, 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
