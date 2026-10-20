// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DC639 .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CGdiObject__UBEXAAVCDumpContext___Z_004DC639() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C DD FF FF: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 676950h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EB C1 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xc1
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 94 C3 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        push 67695ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 C1 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xc1
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
