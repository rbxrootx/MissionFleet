// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED662 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_004ed662_004ED662() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 05 C0 4B 5C 00: cmp eax, dword ptr [0x5c4bc0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x4b
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes 74 38: je 0x4ed6ab
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x4ed68f
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a5h
        push 5c4bd4h
        ; Exact mapped bytes E8 76 73 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed68f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4ed673
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E4 23 5E 00: call dword ptr [0x5e23e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7F 08: jg 0x4ed6ab
        __asm _emit 0x7f
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 FF FF FF: call 0x4ed5d1
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
