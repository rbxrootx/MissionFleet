// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A6BB8 .. +0x67 bytes.
extern "C" __declspec(naked) void _Dump_CDocObjectServer__MBEXAAVCDumpContext___Z_004A6BB8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3F BD 09 00: call 0x54290a
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        push 5d0344h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 5d0334h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 37 DF 08 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 09 E2 08 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 29 DF 08 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        push 5d0358h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        push ecx
        push 5d0348h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 10 DF 08 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E2 E1 08 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe1
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 02 DF 08 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xdf
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
