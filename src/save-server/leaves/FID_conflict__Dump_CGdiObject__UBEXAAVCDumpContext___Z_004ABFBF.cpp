// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ABFBF .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CGdiObject__UBEXAAVCDumpContext___Z_004ABFBF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 E3 02 00: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xe3
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 672c00h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 65 C8 07 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xc8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 0E CA 07 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xca
        __asm _emit 0x07
        __asm _emit 0x00
        push 672c10h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 51 C8 07 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc8
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
