// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D29F9 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_004d29f9_004D29F9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 17: je 0x4d2a1d
        __asm _emit 0x74
        __asm _emit 0x17
        push 10h
        mov eax, dword ptr [ebp - 4]
        add eax, 88h
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 06 66 FD FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x66
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 15: je 0x4d2a38
        __asm _emit 0x74
        __asm _emit 0x15
        push 10h
        mov edx, dword ptr [ebp - 4]
        add edx, 78h
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 EB 65 FD FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x65
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
