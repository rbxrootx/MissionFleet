// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056BAC5 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_0056bac5_0056BAC5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 9C FA FF: call 0x5156d8
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0e4h], 0
        ; Exact mapped bytes 74 2E: je 0x56bb11
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56bb0b
        __asm _emit 0x75
        __asm _emit 0x14
        push 27ch
        push 67d38ch
        ; Exact mapped bytes E8 3A D2 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xd2
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56bb0b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D2: jne 0x56bae3
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
