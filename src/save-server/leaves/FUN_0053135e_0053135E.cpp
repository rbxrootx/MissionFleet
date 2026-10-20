// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053135E .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_0053135e_0053135E() {
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
        ; Exact mapped bytes 75 14: jne 0x53138d
        __asm _emit 0x75
        __asm _emit 0x14
        push 3aeh
        push 634f78h
        ; Exact mapped bytes E8 B8 79 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53138d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x531368
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        push 225h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F0 B6 FF FF: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xb6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax + 1ch]
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
        ret
    }
}
