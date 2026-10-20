// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550EB3 .. +0x58 bytes.
extern "C" __declspec(naked) void _GetNextItemOfKind_COleDocument__IBEPAVCDocItem__AAPAU__POSITION__PAUCRuntimeClass___Z_00550EB3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 3F: je 0x550f03
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 C0 00 00 00: call dword ptr [eax + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 88h
        push 5cf7b8h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 74 A2 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xa2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 98 A1 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x550f01
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x550f05
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B9: jmp 0x550ebc
        __asm _emit 0xeb
        __asm _emit 0xb9
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
