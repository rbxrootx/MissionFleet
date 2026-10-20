// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C665F .. +0x6E bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveAll_CMapPtrToPtr__QAEXXZ_004C665F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 50h
        push 67476ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E8 3B 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1F: je 0x4c66a0
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 16 5E 00 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x5e
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
        ; Exact mapped bytes E8 4E 58 FF FF: call 0x4bbf0d
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
