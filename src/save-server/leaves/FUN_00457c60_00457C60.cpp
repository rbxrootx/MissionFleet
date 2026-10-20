// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00457C60 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_00457c60_00457C60() {
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
        cmp dword ptr [edx + eax + 10h], 1
        ; Exact mapped bytes 74 21: je 0x457ca0
        __asm _emit 0x74
        __asm _emit 0x21
        push 6777f0h
        push 0
        push 7d6h
        push 677614h
        push 2
        ; Exact mapped bytes E8 C9 51 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x457ca0
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C6: jne 0x457c6c
        __asm _emit 0x75
        __asm _emit 0xc6
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 3E ED FF FF: call 0x4569f0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
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
