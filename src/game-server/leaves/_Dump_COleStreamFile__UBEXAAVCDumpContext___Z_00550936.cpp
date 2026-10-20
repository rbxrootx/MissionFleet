// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00550936 .. +0x5B bytes.
extern "C" __declspec(naked) void _Dump_COleStreamFile__UBEXAAVCDumpContext___Z_00550936() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 90 F7 FA FF: call 0x5000d9
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xf7
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 5cf72ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BE 41 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 90 44 FE FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add eax, 14h
        push eax
        push 5cf73ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 41 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 67 D0 F9 FF: call 0x4ed9e5
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd0
        __asm _emit 0xf9
        __asm _emit 0xff
        push 5cf754h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 41 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x41
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
