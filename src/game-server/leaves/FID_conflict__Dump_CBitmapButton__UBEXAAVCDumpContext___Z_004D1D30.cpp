// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1D30 .. +0x92 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CBitmapButton__UBEXAAVCDumpContext___Z_004D1D30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 0E 02 00: call 0x4f2be3
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 40h]
        push edx
        push 5c8ef0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C4 2D 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 6D 2F 06 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 48h]
        push ecx
        push 5c8efch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A9 2D 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 52 2F 06 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        push eax
        push 5c8f0ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8E 2D 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 37 2F 06 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        push 5c8f20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 2D 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 1C 2F 06 00: call 0x534ccb
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x2f
        __asm _emit 0x06
        __asm _emit 0x00
        push 5c8f38h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5F 2D 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
