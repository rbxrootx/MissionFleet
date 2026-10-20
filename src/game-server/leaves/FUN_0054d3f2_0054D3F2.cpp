// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054D3F2 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0054d3f2_0054D3F2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 11 FF FF FF: call 0x54d310
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1D: je 0x54d425
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 5ce4bch
        push 5dec4ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 5A: jmp 0x54d47f
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 26 FF FF FF: call 0x54d354
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1D: je 0x54d454
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 5ce4c8h
        push 5dec4ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes EB 2B: jmp 0x54d47f
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 60 FF FF FF: call 0x54d3c1
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3F FF FF FF: call 0x54d3aa
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 5ce4dch
        push 5dec4ch
        ; Exact mapped bytes FF 15 C8 28 5E 00: call dword ptr [0x5e28c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        add esp, 14h
        mov eax, 5dec4ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
