// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534804 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_00534804_00534804() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x53482b
        __asm _emit 0x75
        __asm _emit 0x14
        push 275h
        push 636640h
        ; Exact mapped bytes E8 1A 45 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53482b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53480e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 80 B4 68 00: call dword ptr [0x68b480]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53485e
        __asm _emit 0x75
        __asm _emit 0x14
        push 275h
        push 636640h
        ; Exact mapped bytes E8 E7 44 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53485e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x534831
        __asm _emit 0x75
        __asm _emit 0xcd
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
