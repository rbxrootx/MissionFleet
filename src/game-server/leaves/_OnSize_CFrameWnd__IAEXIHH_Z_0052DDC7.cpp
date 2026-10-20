// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052DDC7 .. +0x37 bytes.
extern "C" __declspec(naked) void _OnSize_CFrameWnd__IAEXIHH_Z_0052DDC7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 FB 00 00: call 0x53d8e3
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 10: je 0x52ddf8
        __asm _emit 0x74
        __asm _emit 0x10
        push 1
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
