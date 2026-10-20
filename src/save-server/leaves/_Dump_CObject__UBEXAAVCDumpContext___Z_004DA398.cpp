// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DA398 .. +0x51 bytes.
extern "C" __declspec(naked) void _Dump_CObject__UBEXAAVCDumpContext___Z_004DA398() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 673d54h
        mov eax, dword ptr [ebp - 4]
        push eax
        push 673d4ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov eax, dword ptr [eax]
        push eax
        push 673d48h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 84 E4 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7D E4 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 76 E4 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe4
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 48 E7 04 00: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xe7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 68 E4 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xe4
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
