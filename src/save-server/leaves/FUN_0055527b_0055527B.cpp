// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055527B .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_0055527b_0055527B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 653h
        push 67c1e0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 C6 4F F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x4f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5552b7
        __asm _emit 0x75
        __asm _emit 0x14
        push 654h
        push 67c1e0h
        ; Exact mapped bytes E8 8E 3A FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5552b7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x55529a
        __asm _emit 0x75
        __asm _emit 0xdd
        push 641458h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes E8 28 56 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5552eb
        __asm _emit 0x75
        __asm _emit 0x14
        push 658h
        push 67c1e0h
        ; Exact mapped bytes E8 5A 3A FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5552eb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x5552d1
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 46 01 00: call 0x5699b5
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x46
        __asm _emit 0x01
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
