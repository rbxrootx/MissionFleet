// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF8AF .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_004cf8af_004CF8AF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        push 1
        ; Exact mapped bytes E8 20 FF FF FF: call 0x4cf7df
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 14: jne 0x4cf8dc
        __asm _emit 0x75
        __asm _emit 0x14
        push 11dh
        push 671a64h
        ; Exact mapped bytes E8 69 94 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cf8dc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4cf8c2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F2 C4 00 00: call 0x4dbde0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB 72 00 00: call 0x4d6bf8
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x72
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x4cf922
        __asm _emit 0x74
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 14: je 0x4cf922
        __asm _emit 0x74
        __asm _emit 0x14
        push 124h
        push 671a64h
        ; Exact mapped bytes E8 23 94 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cf922
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4cf8fd
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
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
