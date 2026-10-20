// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051112C .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_0051112c_0051112C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 75 14: jne 0x51115d
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a0h
        push 6729d4h
        ; Exact mapped bytes E8 E8 7B 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51115d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x511138
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffffh
        shl ecx, 10h
        or eax, ecx
        push eax
        push 0
        push 1a9h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        neg ecx
        sbb ecx, ecx
        neg ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 4]
        and eax, 0ffffh
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
