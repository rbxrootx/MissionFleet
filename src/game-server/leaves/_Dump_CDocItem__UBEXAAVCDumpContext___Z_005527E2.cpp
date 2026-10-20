// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005527E2 .. +0x41 bytes.
extern "C" __declspec(naked) void _Dump_CDocItem__UBEXAAVCDumpContext___Z_005527E2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 15 01 FF FF: call 0x54290a
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 5cf9b8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 12 23 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E4 25 FE FF: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        push 5cf9c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FE 22 FE FF: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x22
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
