// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C16D7 .. +0x6B bytes.
extern "C" __declspec(naked) void _AddHead_CPtrList__QAEPAU__POSITION__PAX_Z_004C16D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 85h
        push 6769ach
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 6D 8B 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x8b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 57 FE FF FF: call 0x4c155b
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 0E: je 0x4c1727
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 09: jmp 0x4c1730
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
