// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00538318 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_00538318_00538318() {
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
        ; Exact mapped bytes 75 14: jne 0x53833f
        __asm _emit 0x75
        __asm _emit 0x14
        push 271h
        push 581fc0h
        ; Exact mapped bytes E8 C6 C6 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53833f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x538322
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 10 1F 5E 00: call dword ptr [0x5e1f10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x538372
        __asm _emit 0x75
        __asm _emit 0x14
        push 271h
        push 581fc0h
        ; Exact mapped bytes E8 93 C6 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x538372
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CD: jne 0x538345
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
