// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1CE1 .. +0x4F bytes.
extern "C" __declspec(naked) void _AssertValid_CBitmapButton__UBEXXZ_004D1CE1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 0D 02 00: call 0x4f2a61
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 3ch]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        add ecx, 44h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 44h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4ch
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 4ch]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 4]
        add ecx, 54h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 54h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov esp, ebp
        pop ebp
        ret
    }
}
