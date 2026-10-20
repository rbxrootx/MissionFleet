// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DF1D9 .. +0x67 bytes.
extern "C" __declspec(naked) void _Dump_CFile__UBEXAAVCDumpContext___Z_004DF1D9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC B1 FF FF: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 678000h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B 96 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F4 97 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x97
        __asm _emit 0x04
        __asm _emit 0x00
        push 67801ch
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        push eax
        push 678010h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B 96 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 5F D8 FE FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xd8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1E 96 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        push 678020h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 96 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
