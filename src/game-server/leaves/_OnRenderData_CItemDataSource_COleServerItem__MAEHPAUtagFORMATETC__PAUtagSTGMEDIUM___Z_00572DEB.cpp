// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572DEB .. +0x5C bytes.
extern "C" __declspec(naked) void _OnRenderData_CItemDataSource_COleServerItem__MAEHPAUtagFORMATETC__PAUtagSTGMEDIUM___Z_00572DEB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 57dh
        push 5d0930h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 59 83 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 3ch
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 9C 00 00 00: call dword ptr [edx + 0x9c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x572e31
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 10: jmp 0x572e41
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 73 FD FE FF: call 0x562bb4
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
