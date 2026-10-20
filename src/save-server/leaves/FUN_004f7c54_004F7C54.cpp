// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7C54 .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_004f7c54_004F7C54() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 F6 FF FF: call 0x4f731e
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 6A: je 0x4f7cdb
        __asm _emit 0x74
        __asm _emit 0x6a
        push 0
        push 0
        push 188h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 3A: je 0x4f7cc7
        __asm _emit 0x74
        __asm _emit 0x3a
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        push 18ah
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 96 55 FD FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x55
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 8]
        push eax
        push 189h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x4f7ccf
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 83 4A FD FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 FA 54 FD FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 31: jmp 0x4f7d0c
        __asm _emit 0xeb
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 C7 D0 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push -1
        push 18ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 12: jne 0x4f7d0c
        __asm _emit 0x75
        __asm _emit 0x12
        push 673088h
        push 6730ach
        ; Exact mapped bytes E8 0C 89 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x89
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
