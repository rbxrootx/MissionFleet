// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504A4E .. +0x92 bytes.
extern "C" __declspec(naked) void FID_conflict__Dump_CBitmapButton__UBEXAAVCDumpContext___Z_00504A4E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 A7 FD FF: call 0x4df1d9
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 67784ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 3D 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E7 3F 02 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        push ecx
        push 67785ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BB 3D 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 CC 3F 02 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        push eax
        push 677870h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A0 3D 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B1 3F 02 00: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10h]
        push edx
        push 677880h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 3D 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 2E 3F 02 00: call 0x5289fb
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        push 677894h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 3D 02 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x3d
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
