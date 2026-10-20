// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055F8F7 .. +0x43 bytes.
extern "C" __declspec(naked) void _Dump_COleUpdateDialog__UBEXAAVCDumpContext___Z_0055F8F7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D0 FC FF FF: call 0x55f5da
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0a0h
        push ecx
        push 67b9e8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A 8F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x8f
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 5E D1 F6 FF: call 0x4cca85
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xd1
        __asm _emit 0xf6
        __asm _emit 0xff
        push 67b9f8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 8F FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x8f
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
