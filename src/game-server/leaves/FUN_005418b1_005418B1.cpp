// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005418B1 .. +0x5C bytes.
extern "C" __declspec(naked) void FUN_005418b1_005418B1() {
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
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5418e0
        __asm _emit 0x75
        __asm _emit 0x14
        push 3ach
        push 582398h
        ; Exact mapped bytes E8 25 31 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5418e0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5418bb
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        push 222h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D B7 FF FF: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax + 1ch]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
