// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE1A7 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_004ee1a7_004EE1A7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4ee1cb
        __asm _emit 0x7d
        __asm _emit 0x14
        push 207h
        push 5c4bd4h
        ; Exact mapped bytes E8 3A 68 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee1cb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4ee1b1
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B FE FF FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D4 2C 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [ecx + edx], 0
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax]
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
