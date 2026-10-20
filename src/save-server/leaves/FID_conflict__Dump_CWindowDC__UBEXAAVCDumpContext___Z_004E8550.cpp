// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E8550 .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CWindowDC__UBEXAAVCDumpContext___Z_004E8550() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C D7 FF FF: call 0x4e5c9f
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 6735c8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D4 02 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 7D 04 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        push 6735d4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C0 02 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x02
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
