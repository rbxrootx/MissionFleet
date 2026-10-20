// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C8FB .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0052c8fb_0052C8FB() {
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
        ; Exact mapped bytes 75 14: jne 0x52c92a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ffh
        push 634f78h
        ; Exact mapped bytes E8 1B C4 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c92a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x52c905
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 10 D4 F1 FF: call 0x449d50
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xd4
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 66 2F FA FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x2f
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
