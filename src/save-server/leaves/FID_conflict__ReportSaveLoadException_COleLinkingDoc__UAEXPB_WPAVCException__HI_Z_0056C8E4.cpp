// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C8E4 .. +0x4E bytes.
extern "C" __declspec(naked) void FID_conflict__ReportSaveLoadException_COleLinkingDoc__UAEXPB_WPAVCException__HI_Z_0056C8E4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8ch], 0
        ; Exact mapped bytes 74 1D: je 0x56c914
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, 1
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 90h], edx
        ; Exact mapped bytes EB 18: jmp 0x56c92c
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 45 F8 FF: call 0x4f0eae
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
