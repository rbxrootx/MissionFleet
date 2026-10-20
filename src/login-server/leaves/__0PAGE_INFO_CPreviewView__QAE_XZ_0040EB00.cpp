// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040EB00 .. +0x37 bytes.
extern "C" __declspec(naked) void __0PAGE_INFO_CPreviewView__QAE_XZ_0040EB00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 36 EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 2B EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 20 EA FF FF: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
