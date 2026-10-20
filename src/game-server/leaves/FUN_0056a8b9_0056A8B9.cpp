// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056A8B9 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_0056a8b9_0056A8B9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 25eh
        push 5d053ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8A 08 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x08
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ach], 0
        ; Exact mapped bytes 75 14: jne 0x56a8f6
        __asm _emit 0x75
        __asm _emit 0x14
        push 25fh
        push 5d053ch
        ; Exact mapped bytes E8 0F A1 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xa1
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56a8f6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x56a8d6
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 F4 00 00 00: call dword ptr [edx + 0xf4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
