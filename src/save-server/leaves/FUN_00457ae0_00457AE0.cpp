// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00457AE0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_00457ae0_00457AE0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 30h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        cmp dword ptr [edx + eax + 10h], 4
        ; Exact mapped bytes 74 21: je 0x457b20
        __asm _emit 0x74
        __asm _emit 0x21
        push 6777f0h
        push 0
        push 7d6h
        push 677614h
        push 2
        ; Exact mapped bytes E8 49 53 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x457b20
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x457aec
        __asm _emit 0x75
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BE EE FF FF: call 0x4569f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
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
