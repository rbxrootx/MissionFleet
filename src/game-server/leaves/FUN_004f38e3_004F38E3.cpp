// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F38E3 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_004f38e3_004F38E3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 3B EB 04 00: call 0x542440
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xeb
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 38h]
        sub eax, 132h
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 73 14: jae 0x4f3930
        __asm _emit 0x73
        __asm _emit 0x14
        push 57fh
        push 5c5574h
        ; Exact mapped bytes E8 D5 10 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f3930
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f3916
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp - 8], 6
        ; Exact mapped bytes 76 14: jbe 0x4f3950
        __asm _emit 0x76
        __asm _emit 0x14
        push 580h
        push 5c5574h
        ; Exact mapped bytes E8 B5 10 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f3950
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4f3936
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 10h]
        push eax
        push 0
        push 19h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
