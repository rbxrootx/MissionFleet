// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1248 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_004d1248_004D1248() {
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
        ; Exact mapped bytes 75 14: jne 0x4d1277
        __asm _emit 0x75
        __asm _emit 0x14
        push 14fh
        push 5c7f78h
        ; Exact mapped bytes E8 8E 37 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d1277
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d1252
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 80000h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4d12a4
        __asm _emit 0x75
        __asm _emit 0x14
        push 150h
        push 5c7f78h
        ; Exact mapped bytes E8 61 37 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x37
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d12a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x4d127d
        __asm _emit 0x75
        __asm _emit 0xd3
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        push 46ah
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7C BD 06 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 15 A9 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa9
        __asm _emit 0x06
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
