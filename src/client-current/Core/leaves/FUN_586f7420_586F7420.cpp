// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586F7420 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_586f7420_586F7420() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 10h
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0ceh
        ; Exact mapped bytes 0F 87 F2 00 00 00: ja 0x586f7537
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + 586f758ch]
        ; Exact mapped bytes FF 24 85 64 75 6F 58: jmp dword ptr [eax*4 + 0x586f7564]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x64
        __asm _emit 0x75
        __asm _emit 0x6f
        __asm _emit 0x58
        push 588b39f0h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 254h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x586f7554
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b39f4h
        mov edx, dword ptr [ebp - 4]
        add edx, 254h
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x586f7554
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b39f8h
        mov eax, dword ptr [ebp - 4]
        add eax, 254h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 AE 00 00 00: jmp 0x586f7554
        __asm _emit 0xe9
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b39fch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 254h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 93 00 00 00: jmp 0x586f7554
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b3a00h
        mov edx, dword ptr [ebp - 4]
        add edx, 254h
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 7B: jmp 0x586f7554
        __asm _emit 0xeb
        __asm _emit 0x7b
        push 588b3a04h
        mov eax, dword ptr [ebp - 4]
        add eax, 254h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 64: jmp 0x586f7554
        __asm _emit 0xeb
        __asm _emit 0x64
        push 588b3a08h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 254h
        push ecx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 4C: jmp 0x586f7554
        __asm _emit 0xeb
        __asm _emit 0x4c
        push 588b3a10h
        mov edx, dword ptr [ebp - 4]
        add edx, 254h
        push edx
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 34: jmp 0x586f7554
        __asm _emit 0xeb
        __asm _emit 0x34
        push 588b3a18h
        mov eax, dword ptr [ebp - 4]
        add eax, 254h
        push eax
        ; Exact mapped bytes FF 15 08 43 89 58: call dword ptr [0x58894308]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 1D: jmp 0x586f7554
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes 0F BE 4D 08: movsx ecx, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        push 588b3a20h
        mov edx, dword ptr [ebp - 4]
        add edx, 254h
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        add eax, 254h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
