// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C6B10 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_587c6b10_587C6B10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 74h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 3A: je 0x587c6b60
        __asm _emit 0x74
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 C1 CB FF: call 0x58482cd0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc1
        __asm _emit 0xcb
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], edx
        mov dword ptr [ecx + 10h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3C FE CB FF: call 0x58486980
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xcb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        add edx, 14h
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edx + 0ch], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
