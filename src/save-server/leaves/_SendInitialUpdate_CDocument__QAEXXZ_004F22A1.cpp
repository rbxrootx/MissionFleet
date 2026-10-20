// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F22A1 .. +0x56 bytes.
extern "C" __declspec(naked) void _SendInitialUpdate_CDocument__QAEXXZ_004F22A1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 35: je 0x4f22f3
        __asm _emit 0x74
        __asm _emit 0x35
        lea eax, [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 8], eax
        push 373h
        push 678234h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 7D 7F FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB C5: jmp 0x4f22b8
        __asm _emit 0xeb
        __asm _emit 0xc5
        mov esp, ebp
        pop ebp
        ret
    }
}
