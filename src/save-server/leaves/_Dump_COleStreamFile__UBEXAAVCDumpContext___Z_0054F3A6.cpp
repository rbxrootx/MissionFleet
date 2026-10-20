// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054F3A6 .. +0x5B bytes.
extern "C" __declspec(naked) void _Dump_COleStreamFile__UBEXAAVCDumpContext___Z_0054F3A6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 20 FE F8 FF: call 0x4df1d9
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 67bf04h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7E 94 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 50 97 FD FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x97
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 14h
        push eax
        push 67bf14h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 63 94 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 97 D6 F7 FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xd6
        __asm _emit 0xf7
        __asm _emit 0xff
        push 67bf2ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 94 FD FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x94
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
