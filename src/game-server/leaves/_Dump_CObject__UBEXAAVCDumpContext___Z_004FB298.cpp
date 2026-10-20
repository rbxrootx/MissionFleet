// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FB298 .. +0x51 bytes.
extern "C" __declspec(naked) void _Dump_CObject__UBEXAAVCDumpContext___Z_004FB298() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 5c75cch
        mov eax, dword ptr [ebp - 4]
        push eax
        push 5c75c4h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [eax]
        push eax
        push 5c75c0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 98 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 4D 98 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 46 98 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 18 9B 03 00: call 0x534df4
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 38 98 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x98
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
