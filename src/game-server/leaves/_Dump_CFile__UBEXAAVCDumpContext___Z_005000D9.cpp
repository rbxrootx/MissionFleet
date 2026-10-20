// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005000D9 .. +0x67 bytes.
extern "C" __declspec(naked) void _Dump_CFile__UBEXAAVCDumpContext___Z_005000D9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC B1 FF FF: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 5cb828h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B 4A 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C4 4B 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4b
        __asm _emit 0x03
        __asm _emit 0x00
        push 5cb844h
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        push eax
        push 5cb838h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 49 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 BF D8 FE FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EE 49 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x49
        __asm _emit 0x03
        __asm _emit 0x00
        push 5cb848h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E1 49 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x49
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
