// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551225 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_00551225_00551225() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 36 91 F8 FF: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x91
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 11: je 0x55124e
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1ch]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov esp, ebp
        pop ebp
        ret
    }
}
