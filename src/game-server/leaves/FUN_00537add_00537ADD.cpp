// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00537ADD .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_00537add_00537ADD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x537b06
        __asm _emit 0x75
        __asm _emit 0x14
        push 21dh
        push 581fc0h
        ; Exact mapped bytes E8 FF CE FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x537b06
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x537ae9
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 CC 1E 5E 00: call dword ptr [0x5e1ecc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x537b3d
        __asm _emit 0x75
        __asm _emit 0x14
        push 21fh
        push 581fc0h
        ; Exact mapped bytes E8 C8 CE FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x537b3d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x537b0c
        __asm _emit 0x75
        __asm _emit 0xc9
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 DE FF FF: call 0x53598a
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xde
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
