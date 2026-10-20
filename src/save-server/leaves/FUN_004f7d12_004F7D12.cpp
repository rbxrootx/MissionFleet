// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7D12 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_004f7d12_004F7D12() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FA F5 FF FF: call 0x4f731e
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 13: je 0x4f7d42
        __asm _emit 0x74
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 14 FF FF FF: call 0x4f7c54
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4C: jmp 0x4f7d8e
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 60 D0 02 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push -1
        push 1a2h
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
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4f7d79
        __asm _emit 0x7d
        __asm _emit 0x14
        push 6730b0h
        push 6730d4h
        ; Exact mapped bytes E8 A1 88 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x88
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 15: jmp 0x4f7d8e
        __asm _emit 0xeb
        __asm _emit 0x15
        push 0
        mov eax, dword ptr [ebp - 8]
        push eax
        push 186h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
