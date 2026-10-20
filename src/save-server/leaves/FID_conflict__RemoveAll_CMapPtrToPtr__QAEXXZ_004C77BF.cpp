// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C77BF .. +0x6E bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveAll_CMapPtrToPtr__QAEXXZ_004C77BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 50h
        push 67482ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 88 2A 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1F: je 0x4c7800
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B6 4C 00 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 4], 0
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], 0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 EE 46 FF FF: call 0x4bbf0d
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
