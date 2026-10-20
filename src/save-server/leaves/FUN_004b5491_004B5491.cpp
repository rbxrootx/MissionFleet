// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B5491 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004b5491_004B5491() {
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
        ; Exact mapped bytes 75 14: jne 0x4b54c0
        __asm _emit 0x75
        __asm _emit 0x14
        push 103h
        push 636788h
        ; Exact mapped bytes E8 85 38 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b54c0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4b549b
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        push 407h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 CD A3 01 00: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
