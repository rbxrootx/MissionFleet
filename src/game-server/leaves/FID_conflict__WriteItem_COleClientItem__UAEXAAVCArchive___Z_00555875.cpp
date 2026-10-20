// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555875 .. +0x35 bytes.
extern "C" __declspec(naked) void FID_conflict__WriteItem_COleClientItem__UAEXAAVCArchive___Z_00555875() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C 25 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 0E: je 0x555898
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 F9 FF FF: call 0x5551a7
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x5558a4
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B F2 FF FF: call 0x554b3f
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf2
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
