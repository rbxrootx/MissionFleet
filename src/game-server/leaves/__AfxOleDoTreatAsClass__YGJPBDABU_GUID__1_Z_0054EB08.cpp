// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054EB08 .. +0xAC bytes.
extern "C" __declspec(naked) void __AfxOleDoTreatAsClass__YGJPBDABU_GUID__1_Z_0054EB08() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 20 2A 5E 00: call dword ptr [0x5e2a20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 7F: je 0x54ebab
        __asm _emit 0x74
        __asm _emit 0x7f
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 79: je 0x54ebab
        __asm _emit 0x74
        __asm _emit 0x79
        lea edx, [ebp - 0ch]
        push edx
        push 5ce534h
        push 80000000h
        ; Exact mapped bytes FF 15 18 1E 5E 00: call dword ptr [0x5e1e18]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 24 2A 5E 00: call dword ptr [0x5e2a24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 2A C3 FF FF: call 0x54ae8e
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 1
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 24 1E 5E 00: call dword ptr [0x5e1e24]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 20 2A 5E 00: call dword ptr [0x5e2a20]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 FC 1D 5E 00: call dword ptr [0x5e1dfc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x1d
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
