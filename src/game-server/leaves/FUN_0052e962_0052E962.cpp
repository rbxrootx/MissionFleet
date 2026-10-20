// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052E962 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_0052e962_0052E962() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 83 3D FC E8 5D 00 00: cmp dword ptr [0x5de8fc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xfc
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x52e97e
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F6 2E FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x2e
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes EB 77: jmp 0x52e9f5
        __asm _emit 0xeb
        __asm _emit 0x77
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 78 04 FC FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        and eax, 40600h
        test eax, eax
        ; Exact mapped bytes 74 22: je 0x52e9b7
        __asm _emit 0x74
        __asm _emit 0x22
        push 21h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        neg eax
        push eax
        push 20h
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        neg eax
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 90 28 5E 00: call dword ptr [0x5e2890]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 20: jmp 0x52e9d7
        __asm _emit 0xeb
        __asm _emit 0x20
        push 6
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        neg eax
        push eax
        push 5
        ; Exact mapped bytes FF 15 B8 28 5E 00: call dword ptr [0x5e28b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        neg eax
        push eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 90 28 5E 00: call dword ptr [0x5e2890]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        and eax, 0c00000h
        test eax, eax
        ; Exact mapped bytes 74 12: je 0x52e9f5
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        ; Exact mapped bytes 03 15 3C EC 5D 00: add edx, dword ptr [0x5dec3c]
        __asm _emit 0x03
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
