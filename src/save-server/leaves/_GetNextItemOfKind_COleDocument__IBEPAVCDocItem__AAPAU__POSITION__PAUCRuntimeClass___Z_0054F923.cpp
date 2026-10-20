// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F923 .. +0x58 bytes.
extern "C" __declspec(naked) void _GetNextItemOfKind_COleDocument__IBEPAVCDocItem__AAPAU__POSITION__PAUCRuntimeClass___Z_0054F923() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 3F: je 0x54f973
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
        push 67bf90h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 04 A9 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xa9
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 A8 F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa8
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x54f971
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x54f975
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB B9: jmp 0x54f92c
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
