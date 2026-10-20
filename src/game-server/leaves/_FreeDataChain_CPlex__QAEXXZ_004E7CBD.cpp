// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7CBD .. +0x41 bytes.
extern "C" __declspec(naked) void _FreeDataChain_CPlex__QAEXXZ_004E7CBD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 28: je 0x4e7cfa
        __asm _emit 0x74
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 1A 57 00 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x57
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB D2: jmp 0x4e7ccc
        __asm _emit 0xeb
        __asm _emit 0xd2
        mov esp, ebp
        pop ebp
        ret
    }
}
