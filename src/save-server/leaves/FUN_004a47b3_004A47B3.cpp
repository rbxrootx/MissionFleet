// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A47B3 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_004a47b3_004A47B3() {
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
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a47e2
        __asm _emit 0x75
        __asm _emit 0x14
        push 148h
        push 674ab0h
        ; Exact mapped bytes E8 63 45 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a47e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a47bd
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 80000h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4a480f
        __asm _emit 0x75
        __asm _emit 0x14
        push 149h
        push 674ab0h
        ; Exact mapped bytes E8 36 45 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a480f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x4a47e8
        __asm _emit 0x75
        __asm _emit 0xd3
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 469h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 82 08 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x82
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0A 6E 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6e
        __asm _emit 0x08
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
