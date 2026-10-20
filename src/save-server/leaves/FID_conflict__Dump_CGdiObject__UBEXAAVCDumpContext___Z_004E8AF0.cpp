// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E8AF0 .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CGdiObject__UBEXAAVCDumpContext___Z_004E8AF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 18 FF FF: call 0x4da398
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x18
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        push 67362ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 34 FD 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfd
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DD FE 03 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0x03
        __asm _emit 0x00
        push 67363ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 20 FD 03 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfd
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
