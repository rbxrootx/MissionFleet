// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503857 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_00503857_00503857() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d16ah
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
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 58468ch
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x5038a3
        __asm _emit 0x75
        __asm _emit 0x14
        push 3fbh
        push 5c6db0h
        ; Exact mapped bytes E8 62 11 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5038a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x503886
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6C D6 FF FF: call 0x500f1d
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes FF 15 64 27 5E 00: call dword ptr [0x5e2764]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C9 D6 FF FF: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd6
        __asm _emit 0xff
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
