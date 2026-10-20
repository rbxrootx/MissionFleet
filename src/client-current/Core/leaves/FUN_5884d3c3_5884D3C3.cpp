// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D3C3 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5884d3c3_5884D3C3() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp byte ptr [esi + 4], 0
        ; Exact mapped bytes 74 08: je 0x5884d3d8
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [esi]
        ; Exact mapped bytes E8 29 C2 00 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov byte ptr [esi + 4], 0
        mov dword ptr [esi], 0
        pop esi
        pop ebp
        ret
    }
}
