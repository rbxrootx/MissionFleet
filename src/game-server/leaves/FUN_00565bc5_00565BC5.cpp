// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00565BC5 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00565bc5_00565BC5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E2 83 FC FF: call 0x52dfb9
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x83
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 74 2E: je 0x565c11
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        ; Exact mapped bytes FF 15 1C 28 5E 00: call dword ptr [0x5e281c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x565c0b
        __asm _emit 0x75
        __asm _emit 0x14
        push 27ch
        push 5d0bb4h
        ; Exact mapped bytes E8 FA ED FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x565c0b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x565be3
        __asm _emit 0x75
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
