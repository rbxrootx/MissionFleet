// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D60F3 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_004d60f3_004D60F3() {
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
        ; Exact mapped bytes 75 14: jne 0x4d6122
        __asm _emit 0x75
        __asm _emit 0x14
        push 94h
        push 672048h
        ; Exact mapped bytes E8 23 2C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x2c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6122
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d60fd
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 75 13: jne 0x4d6144
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 58 BE 68 00: call dword ptr [0x68be58]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 18: jmp 0x4d615c
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 34h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 34h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 90 00 00 00: call dword ptr [eax + 0x90]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
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
