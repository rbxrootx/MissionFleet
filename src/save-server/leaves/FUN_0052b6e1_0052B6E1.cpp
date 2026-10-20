// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052B6E1 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0052b6e1_0052B6E1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x52b70d
        __asm _emit 0x75
        __asm _emit 0x11
        push 33h
        push 634f78h
        ; Exact mapped bytes E8 38 D6 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52b70d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x52b6eb
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 74 00 00: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 30h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
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
