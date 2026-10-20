// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E8718 .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CWindowDC__UBEXAAVCDumpContext___Z_004E8718() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 74 D5 FF FF: call 0x4e5c9f
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 6735d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C 01 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B5 02 04 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        push 6735e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 00 04 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x00
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
