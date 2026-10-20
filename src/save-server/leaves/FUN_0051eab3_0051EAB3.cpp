// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051EAB3 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_0051eab3_0051EAB3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 83 3D 14 6E 68 00 00: cmp dword ptr [0x686e14], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 12: je 0x51ead7
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C4 4C FB FF: call 0x4d3799
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4c
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 71: jmp 0x51eb48
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AF 77 FB FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x77
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        and edx, 40600h
        test edx, edx
        ; Exact mapped bytes 74 1E: je 0x51eb0d
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
        ; Exact mapped bytes EB 1C: jmp 0x51eb29
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
        mov edx, dword ptr [ebp - 4]
        and edx, 0c00000h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x51eb48
        __asm _emit 0x74
        __asm _emit 0x12
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
