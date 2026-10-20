// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056EA45 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_0056ea45_0056EA45() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d8h
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], 0
        push 58e4e0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C5 D5 FD FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xd5
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x56ea8c
        __asm _emit 0x75
        __asm _emit 0x14
        push 994h
        push 5d053ch
        ; Exact mapped bytes E8 79 5F FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x5f
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56ea8c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x56ea72
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 15 EC 29 5E 00: call dword ptr [0x5e29ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
