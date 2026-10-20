// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045A052 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_0045a052_0045A052() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 87 F2 FF FF: call 0x4592f2
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 92 F3 FF FF: call 0x459424
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
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
