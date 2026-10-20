// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB779 .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CGdiObject__UBEXAAVCDumpContext___Z_004FB779() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C FB FF FF: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 5c76d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7B 93 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 24 95 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c76e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 67 93 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x93
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
