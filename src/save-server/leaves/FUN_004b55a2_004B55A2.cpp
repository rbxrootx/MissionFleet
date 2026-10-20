// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B55A2 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004b55a2_004B55A2() {
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
        ; Exact mapped bytes 75 14: jne 0x4b55d1
        __asm _emit 0x75
        __asm _emit 0x14
        push 109h
        push 636788h
        ; Exact mapped bytes E8 74 37 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x37
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4b55d1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4b55ac
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        push 403h
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
        ; Exact mapped bytes E8 9D 65 FF FF: call 0x4abb90
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
