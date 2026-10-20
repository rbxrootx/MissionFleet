// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050F06E .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_0050f06e_0050F06E() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 10h]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 76 14: jbe 0x50f090
        __asm _emit 0x76
        __asm _emit 0x14
        push 230h
        push 5c68bch
        ; Exact mapped bytes E8 75 59 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x59
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50f090
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x50f074
        __asm _emit 0x75
        __asm _emit 0xde
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 72 08: jb 0x50f0a6
        __asm _emit 0x72
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 76 1B: jbe 0x50f0c1
        __asm _emit 0x76
        __asm _emit 0x1b
        push 0f112h
        push 5c6aech
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 13 FD FF FF: call 0x50edd4
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
