// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052C544 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_0052c544_0052C544() {
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
        ; Exact mapped bytes 75 14: jne 0x52c573
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b9h
        push 634f78h
        ; Exact mapped bytes E8 D2 C7 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52c573
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x52c54e
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 C8 BD 68 00: call dword ptr [0x68bdc8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xbd
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 23 33 FA FF: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x33
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
