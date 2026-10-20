// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503B3C .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CGdiObject__UBEXAAVCDumpContext___Z_00503B3C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 49 77 FF FF: call 0x4fb298
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 5c6ffch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 0F 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x0f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 61 11 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c700ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 0F 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x0f
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
