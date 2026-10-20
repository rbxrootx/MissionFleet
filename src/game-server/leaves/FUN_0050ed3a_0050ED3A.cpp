// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050ED3A .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_0050ed3a_0050ED3A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 F3 FF FF: call 0x50e0ee
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 13: je 0x50ed68
        __asm _emit 0x74
        __asm _emit 0x13
        push 2
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 7C 26 5E 00: call dword ptr [0x5e267c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 14: jmp 0x50ed7c
        __asm _emit 0xeb
        __asm _emit 0x14
        push 1
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [edx]
        push eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 78 26 5E 00: call dword ptr [0x5e2678]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x26
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
