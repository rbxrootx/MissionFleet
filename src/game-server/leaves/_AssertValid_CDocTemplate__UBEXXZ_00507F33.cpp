// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00507F33 .. +0x50 bytes.
extern "C" __declspec(naked) void _AssertValid_CDocTemplate__UBEXXZ_00507F33() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 AA AA 03 00: call 0x5429ee
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 27: je 0x507f7f
        __asm _emit 0x74
        __asm _emit 0x27
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 60: call dword ptr [edx + 0x60]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x60
        mov dword ptr [ebp - 8], eax
        push 1a9h
        push 5ca348h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E3 31 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x31
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D3: jmp 0x507f52
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov esp, ebp
        pop ebp
        ret
    }
}
