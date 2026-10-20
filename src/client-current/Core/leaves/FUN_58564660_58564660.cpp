// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58564660 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_58564660_58564660() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 8], 0ah
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b8h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 13ch], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0b8h], 0
        ; Exact mapped bytes 74 1A: je 0x585646b5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 100h], 40000000h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0dch], 70h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
