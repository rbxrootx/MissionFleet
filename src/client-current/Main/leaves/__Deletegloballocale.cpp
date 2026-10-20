// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5897178F .. +0x21 bytes.
extern "C" __declspec(naked) void __Deletegloballocale() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x589717ae
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes E8 7E 2F E5 FF: call 0x587c4720
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x2f
        __asm _emit 0xe5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x589717ae
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [eax]
        push 1
        mov ecx, eax
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        pop ebp
        ret
    }
}
