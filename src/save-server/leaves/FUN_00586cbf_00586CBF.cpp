// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00586CBF .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_00586cbf_00586CBF() {
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
        ; Exact mapped bytes 75 11: jne 0x586ce3
        __asm _emit 0x75
        __asm _emit 0x11
        push 46h
        push 67d938h
        ; Exact mapped bytes E8 62 20 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586ce3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x586cc9
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x586d00
        __asm _emit 0x75
        __asm _emit 0x11
        push 47h
        push 67d938h
        ; Exact mapped bytes E8 45 20 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586d00
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x586ce9
        __asm _emit 0x75
        __asm _emit 0xe3
        push 1
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 53 C7 F1 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc7
        __asm _emit 0xf1
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x586d28
        __asm _emit 0x75
        __asm _emit 0x11
        push 48h
        push 67d938h
        ; Exact mapped bytes E8 1D 20 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x20
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586d28
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x586d06
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 98 B6 68 00: call dword ptr [0x68b698]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb6
        __asm _emit 0x68
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
