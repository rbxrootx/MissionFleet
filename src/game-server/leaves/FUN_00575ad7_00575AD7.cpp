// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575AD7 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_00575ad7_00575AD7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 11: je 0x575af8
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 3E A3 F5 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x575b0c
        __asm _emit 0x75
        __asm _emit 0x14
        push 618h
        push 5cbcc4h
        ; Exact mapped bytes E8 F9 EE FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xee
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575b0c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x575ae1
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 09: je 0x575b21
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 7A B4 FB FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xb4
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
