// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005419F7 .. +0x62 bytes.
extern "C" __declspec(naked) void FID_conflict__OnNcCreate_CToolBar__IAEHPAUtagCREATESTRUCTA___Z_005419F7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E1 B9 FE FF: call 0x52d3eb
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x541a12
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 41: jmp 0x541a53
        __asm _emit 0xeb
        __asm _emit 0x41
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 1C: je 0x541a37
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        push eax
        push 425h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 14h
        push 41eh
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A8 00 00 00: call dword ptr [edx + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
