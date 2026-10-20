// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503764 .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CWindowDC__UBEXAAVCDumpContext___Z_00503764() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 D5 FF FF: call 0x500cbf
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 5c6fa8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 90 13 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 39 15 03 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        push 5c6fb4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7C 13 03 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x13
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
