// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056E0E0 .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_0056e0e0_0056E0E0() {
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
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], 0
        push 58e4e0h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 2A DF FD FF: call 0x54c034
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x56e127
        __asm _emit 0x75
        __asm _emit 0x14
        push 8b8h
        push 5d053ch
        ; Exact mapped bytes E8 DE 68 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x68
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56e127
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x56e10d
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
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes FF 15 E8 29 5E 00: call dword ptr [0x5e29e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
