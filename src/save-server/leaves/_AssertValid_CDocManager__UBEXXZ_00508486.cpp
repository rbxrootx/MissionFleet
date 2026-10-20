// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508486 .. +0x50 bytes.
extern "C" __declspec(naked) void _AssertValid_CDocManager__UBEXXZ_00508486() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D3 1E FD FF: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 B5 E5 01 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x5084d2
        __asm _emit 0x74
        __asm _emit 0x27
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 17 E6 01 00: call 0x526ad1
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 354h
        push 678024h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 90 1D FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1d
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB D3: jmp 0x5084a5
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov esp, ebp
        pop ebp
        ret
    }
}
