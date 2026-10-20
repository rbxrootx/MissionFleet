// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051F2E6 .. +0x50 bytes.
extern "C" __declspec(naked) void _AssertValid_CDocManager__UBEXXZ_0051F2E6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 73 BF FD FF: call 0x4fb26a
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xbf
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 8C 39 01 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x51f332
        __asm _emit 0x74
        __asm _emit 0x27
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 EE 39 01 00: call 0x532d08
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 354h
        push 5cb84ch
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 30 BE FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xbe
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB D3: jmp 0x51f305
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov esp, ebp
        pop ebp
        ret
    }
}
