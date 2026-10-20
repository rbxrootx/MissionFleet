// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00512BAD .. +0x41 bytes.
extern "C" __declspec(naked) void _OnSize_CSplitterWnd__IAEXIHH_Z_00512BAD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 74 1A: je 0x512bd4
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 14: jle 0x512bd4
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7E 0E: jle 0x512bd4
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 C4 00 00 00: call dword ptr [edx + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FB AC 02 00: call 0x53d8e3
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
