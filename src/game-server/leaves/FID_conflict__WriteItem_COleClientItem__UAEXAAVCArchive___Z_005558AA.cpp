// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005558AA .. +0x35 bytes.
extern "C" __declspec(naked) void FID_conflict__WriteItem_COleClientItem__UAEXAAVCArchive___Z_005558AA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 07 25 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 0E: je 0x5558cd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E FC FF FF: call 0x555539
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x5558d9
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EE F4 FF FF: call 0x554dc7
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
