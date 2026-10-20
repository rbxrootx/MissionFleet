// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00484460 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_00484460_00484460() {
    __asm {
        sub esp, 10h
        xor eax, eax
        ; Exact mapped bytes 66 A1 48 90 68 00: mov ax, word ptr [0x689048]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x48
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [esp + 18h]
        push edi
        push eax
        ; Exact mapped bytes 8B 3D 3C BF 68 00: mov edi, dword ptr [0x68bf3c]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x3c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x48453f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x48453f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x48453f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes 66 A1 4C 90 68 00: mov ax, word ptr [0x68904c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x4c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 0F 85 80 00 00 00: jne 0x48453f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
        ; Exact mapped bytes 75 70: jne 0x48453f
        __asm _emit 0x75
        __asm _emit 0x70
        xor eax, eax
        ; Exact mapped bytes 66 A1 4A 90 68 00: mov ax, word ptr [0x68904a]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x4a
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 60: jne 0x48453f
        __asm _emit 0x75
        __asm _emit 0x60
        push esi
        ; Exact mapped bytes E8 0B FF FF FF: call 0x4843f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 53: jne 0x48453f
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 80 3D 45 9B 68 00 00: cmp byte ptr [0x689b45], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x45
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 2B: je 0x484520
        __asm _emit 0x74
        __asm _emit 0x2b
        push esi
        ; Exact mapped bytes FF 15 E0 BF 68 00: call dword ptr [0x68bfe0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x484520
        __asm _emit 0x75
        __asm _emit 0x20
        lea eax, [esp + 8]
        push 10h
        push eax
        push esi
        ; Exact mapped bytes FF 15 04 BF 68 00: call dword ptr [0x68bf04]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        lea ecx, [esp + 8]
        push 68132ch
        push ecx
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        mov eax, dword ptr [esp + 20h]
        push eax
        push -4
        push esi
        ; Exact mapped bytes FF 15 50 BF 68 00: call dword ptr [0x68bf50]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
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
        ; Exact mapped bytes FF 15 1C BF 68 00: call dword ptr [0x68bf1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 10h
        ret
    }
}
