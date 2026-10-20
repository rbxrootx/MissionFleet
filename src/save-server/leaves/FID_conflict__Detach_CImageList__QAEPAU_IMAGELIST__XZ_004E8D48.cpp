// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E8D48 .. +0x48 bytes.
extern "C" __declspec(naked) void FID_conflict__Detach_CImageList__QAEPAU_IMAGELIST__XZ_004E8D48() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x4e8d7f
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        ; Exact mapped bytes E8 20 FE FF FF: call 0x4e8b87
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x4e8d7f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C1 32 FF FF: call 0x4dc040
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
