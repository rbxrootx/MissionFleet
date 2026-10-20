// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00539A14 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_00539a14_00539A14() {
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
        ; Exact mapped bytes 75 14: jne 0x539a3d
        __asm _emit 0x75
        __asm _emit 0x14
        push 325h
        push 581fc0h
        ; Exact mapped bytes E8 C8 AF FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x539a3d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x539a20
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 11 75 FF FF: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 52 75 FF FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 7C 1F 5E 00: call dword ptr [0x5e1f7c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x1f
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x539a7e
        __asm _emit 0x75
        __asm _emit 0x14
        push 327h
        push 581fc0h
        ; Exact mapped bytes E8 87 AF FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x539a7e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 BF: jne 0x539a43
        __asm _emit 0x75
        __asm _emit 0xbf
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD BB FF FF: call 0x535661
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
