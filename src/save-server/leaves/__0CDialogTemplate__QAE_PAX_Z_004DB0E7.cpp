// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DB0E7 .. +0x67 bytes.
extern "C" __declspec(naked) void __0CDialogTemplate__QAE_PAX_Z_004DB0E7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1F: jne 0x4db115
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], 0
        ; Exact mapped bytes EB 30: jmp 0x4db145
        __asm _emit 0xeb
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 66 02 00 00: call 0x4db391
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 00 00 00: call 0x4db14e
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
