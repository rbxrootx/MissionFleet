// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544459 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_00544459_00544459() {
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
        ; Exact mapped bytes 74 11: je 0x54448b
        __asm _emit 0x74
        __asm _emit 0x11
        push 2dh
        push 5c7374h
        ; Exact mapped bytes E8 7A 05 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54448b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x54446b
        __asm _emit 0x75
        __asm _emit 0xda
        push 100h
        lea edx, [ebp - 100h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9A 67 FB FF: call 0x4fac40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x67
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x5444bb
        __asm _emit 0x75
        __asm _emit 0x11
        push 30h
        push 5c7374h
        ; Exact mapped bytes E8 4A 05 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5444bb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D0: jne 0x544491
        __asm _emit 0x75
        __asm _emit 0xd0
        lea edx, [ebp - 100h]
        push edx
        mov ecx, dword ptr [ebp - 104h]
        ; Exact mapped bytes E8 AD FE FF FF: call 0x544380
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
