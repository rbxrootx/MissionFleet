// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58659830 .. +0x78 bytes.
extern "C" __declspec(naked) void FUN_58659830_58659830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 110h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 110h]
        cdq
        mov ecx, 0ah
        idiv ecx
        mov dword ptr [ebp - 10h], edx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 104h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 BE 5F E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x5f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 104h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9D 5F E4 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x5f
        __asm _emit 0xe4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
