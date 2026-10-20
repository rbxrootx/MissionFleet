// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053F589 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0053f589_0053F589() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 104h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 104h], ecx
        mov eax, dword ptr [ebp - 104h]
        cmp dword ptr [eax + 80h], 0
        ; Exact mapped bytes 74 11: je 0x53f5bb
        __asm _emit 0x74
        __asm _emit 0x11
        push 2dh
        push 6739a4h
        ; Exact mapped bytes E8 8A 97 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f5bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x53f59b
        __asm _emit 0x75
        __asm _emit 0xda
        push 100h
        lea edx, [ebp - 100h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6A A7 F9 FF: call 0x4d9d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa7
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x53f5eb
        __asm _emit 0x75
        __asm _emit 0x11
        push 30h
        push 6739a4h
        ; Exact mapped bytes E8 5A 97 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53f5eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x53f5c1
        __asm _emit 0x75
        __asm _emit 0xd0
        lea edx, [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 AD FE FF FF: call 0x53f4b0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
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
