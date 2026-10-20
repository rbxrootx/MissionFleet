// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005542E5 .. +0x35 bytes.
extern "C" __declspec(naked) void FID_conflict__WriteItem_COleClientItem__UAEXAAVCArchive___Z_005542E5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 26 25 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 0E: je 0x554308
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 F9 FF FF: call 0x553c17
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0C: jmp 0x554314
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9B F2 FF FF: call 0x5535af
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
