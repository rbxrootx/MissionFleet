// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052687F .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_0052687f_0052687F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 C1 FC FF: call 0x4f2a61
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 64h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 34h
        ; Exact mapped bytes 74 14: je 0x5268c0
        __asm _emit 0x74
        __asm _emit 0x14
        push 607h
        push 5c8174h
        ; Exact mapped bytes E8 45 E1 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5268c0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x5268a0
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        and eax, 8
        cmp eax, 8
        ; Exact mapped bytes 74 14: je 0x5268eb
        __asm _emit 0x74
        __asm _emit 0x14
        push 608h
        push 5c8174h
        ; Exact mapped bytes E8 1A E1 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5268eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5268c6
        __asm _emit 0x75
        __asm _emit 0xd5
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
