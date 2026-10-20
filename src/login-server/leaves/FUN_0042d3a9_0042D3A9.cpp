// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D3A9 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_0042d3a9_0042D3A9() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 07: jne 0x42d3ba
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, dword ptr [eax]
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes EB 07: jmp 0x42d3c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov edx, dword ptr [eax + 4]
        mov esi, dword ptr [eax]
        mov dword ptr [edx], esi
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 75 08: jne 0x42d3ce
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 8], edx
        ; Exact mapped bytes EB 08: jmp 0x42d3d6
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [eax]
        mov esi, dword ptr [eax + 4]
        mov dword ptr [edx + 4], esi
        push eax
        ; Exact mapped bytes E8 3D FF FF FF: call 0x42d319
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
