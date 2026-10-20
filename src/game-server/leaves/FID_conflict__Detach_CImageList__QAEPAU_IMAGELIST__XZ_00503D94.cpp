// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503D94 .. +0x48 bytes.
extern "C" __declspec(naked) void FID_conflict__Detach_CImageList__QAEPAU_IMAGELIST__XZ_00503D94() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x503dcb
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        ; Exact mapped bytes E8 20 FE FF FF: call 0x503bd3
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x503dcb
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 94 FF FF: call 0x4fd280
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x94
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
