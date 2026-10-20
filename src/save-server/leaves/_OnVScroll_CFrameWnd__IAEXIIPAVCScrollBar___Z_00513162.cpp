// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00513162 .. +0x43 bytes.
extern "C" __declspec(naked) void _OnVScroll_CFrameWnd__IAEXIIPAVCScrollBar___Z_00513162() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3F 09 00 00: call 0x513ab2
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 23: je 0x51319f
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes E8 DB C5 FB FF: call 0x4cf75c
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xc5
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        push 115h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A 84 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
