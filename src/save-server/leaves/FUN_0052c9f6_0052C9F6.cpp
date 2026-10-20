// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C9F6 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0052c9f6_0052C9F6() {
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
        ; Exact mapped bytes 75 14: jne 0x52ca25
        __asm _emit 0x75
        __asm _emit 0x14
        push 105h
        push 634f78h
        ; Exact mapped bytes E8 20 C3 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52ca25
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x52ca00
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 A8 BF 68 00: call dword ptr [0x68bfa8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 71 2E FA FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x2e
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
