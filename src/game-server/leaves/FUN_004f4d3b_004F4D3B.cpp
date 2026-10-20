// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F4D3B .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_004f4d3b_004F4D3B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4f4d62
        __asm _emit 0x75
        __asm _emit 0x14
        push 896h
        push 5c5574h
        ; Exact mapped bytes E8 A3 FC 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f4d62
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f4d45
        __asm _emit 0x75
        __asm _emit 0xdd
        push 897h
        push 5c5574h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 E5 63 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 01 87 04 00: call 0x53d481
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x87
        __asm _emit 0x04
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 FE FF FF: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 05 82 04 00: call 0x53cf96
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x82
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        cmp esi, eax
        sete cl
        mov eax, ecx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
