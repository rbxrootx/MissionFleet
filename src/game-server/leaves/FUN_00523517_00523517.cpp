// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523517 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_00523517_00523517() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d948h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 584e54h
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 45 00 00 00: call 0x523590
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 0D: je 0x523561
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 44h]
        push eax
        ; Exact mapped bytes FF 15 B0 23 5E 00: call dword ptr [0x5e23b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 84h
        ; Exact mapped bytes E8 D9 A2 FC FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa2
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 C6 FC FF: call 0x4efc2a
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc6
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
