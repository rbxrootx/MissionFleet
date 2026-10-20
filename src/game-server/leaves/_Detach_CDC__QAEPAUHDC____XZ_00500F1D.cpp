// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500F1D .. +0x53 bytes.
extern "C" __declspec(naked) void _Detach_CDC__QAEPAUHDC____XZ_00500F1D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1F: je 0x500f54
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        ; Exact mapped bytes E8 FA FD FF FF: call 0x500d36
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 0F: je 0x500f54
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2C C3 FF FF: call 0x4fd280
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
