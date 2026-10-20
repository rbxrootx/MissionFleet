// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535D9F .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00535d9f_00535D9F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x535dc8
        __asm _emit 0x75
        __asm _emit 0x14
        push 31eh
        push 636640h
        ; Exact mapped bytes E8 7D 2F FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x535dc8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x535dab
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 E4 B4 68 00: call dword ptr [0x68b4e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x535dff
        __asm _emit 0x75
        __asm _emit 0x14
        push 320h
        push 636640h
        ; Exact mapped bytes E8 46 2F FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x535dff
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x535dce
        __asm _emit 0x75
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BC BD FF FF: call 0x531bd1
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xbd
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
