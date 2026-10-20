// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500CBF .. +0x77 bytes.
extern "C" __declspec(naked) void _Dump_CDC__UBEXAAVCDumpContext___Z_00500CBF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 A5 FF FF: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 5c6e98h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 35 3E 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DE 3F 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        push ecx
        push 5c6ea4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A 3E 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C3 3F 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x3f
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        push eax
        push 5c6eb4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FF 3D 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 44 40 03 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c6ec4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB 3D 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x3d
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
