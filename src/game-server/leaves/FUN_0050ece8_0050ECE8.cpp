// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050ECE8 .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_0050ece8_0050ECE8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F6 F3 FF FF: call 0x50e0ee
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 1A: je 0x50ed1d
        __asm _emit 0x74
        __asm _emit 0x1a
        push 0
        push 0
        push 147h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 17: jmp 0x50ed34
        __asm _emit 0xeb
        __asm _emit 0x17
        push 0
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        push eax
        push 14eh
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
