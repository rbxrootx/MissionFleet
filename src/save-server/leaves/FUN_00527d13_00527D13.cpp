// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527D13 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00527d13_00527D13() {
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
        ; Exact mapped bytes 75 11: jne 0x527d3f
        __asm _emit 0x75
        __asm _emit 0x11
        push 66h
        push 6345fch
        ; Exact mapped bytes E8 06 10 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527d3f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x527d1d
        __asm _emit 0x75
        __asm _emit 0xd8
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 471h
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
