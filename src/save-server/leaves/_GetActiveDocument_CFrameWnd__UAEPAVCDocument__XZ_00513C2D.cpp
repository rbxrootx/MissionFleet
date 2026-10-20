// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513C2D .. +0x3D bytes.
extern "C" __declspec(naked) void _GetActiveDocument_CFrameWnd__UAEPAVCDocument__XZ_00513C2D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 4c0h
        push 673dc0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 17 66 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x66
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 61 FE FF FF: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x513c64
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B4 D7 01 00: call 0x531416
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x513c66
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
