// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533FB7 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_00533fb7_00533FB7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x533fde
        __asm _emit 0x75
        __asm _emit 0x14
        push 224h
        push 636640h
        ; Exact mapped bytes E8 67 4D FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x533fde
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x533fc1
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 38 B4 68 00: call dword ptr [0x68b438]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x534015
        __asm _emit 0x75
        __asm _emit 0x14
        push 225h
        push 636640h
        ; Exact mapped bytes E8 30 4D FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534015
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x533fe4
        __asm _emit 0x75
        __asm _emit 0xc9
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 52 DE FF FF: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
