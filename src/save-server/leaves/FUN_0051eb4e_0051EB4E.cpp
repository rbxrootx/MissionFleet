// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051EB4E .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_0051eb4e_0051EB4E() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 14 6E 68 00 00: cmp dword ptr [0x686e14], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 17: je 0x51eb71
        __asm _emit 0x74
        __asm _emit 0x17
        push 188h
        push 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 98 BE 68 00: call dword ptr [0x68be98]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 6B: jmp 0x51ebdc
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov edx, dword ptr [ebp + 0ch]
        and edx, 40600h
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x51eb9c
        __asm _emit 0x74
        __asm _emit 0x1e
        push 21h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 20h
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 10 BD 68 00: call dword ptr [0x68bd10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x51ebb8
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 6
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 5
        ; Exact mapped bytes FF 15 C4 BF 68 00: call dword ptr [0x68bfc4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 10 BD 68 00: call dword ptr [0x68bd10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        and edx, 0c00000h
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x51ebdc
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes E8 50 EA FF FF: call 0x51d61a
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 2B 0D 5C 71 68 00: sub ecx, dword ptr [0x68715c]
        __asm _emit 0x2b
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], ecx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
