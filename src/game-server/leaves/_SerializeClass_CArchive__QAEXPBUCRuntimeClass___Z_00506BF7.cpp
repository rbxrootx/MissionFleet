// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00506BF7 .. +0x37 bytes.
extern "C" __declspec(naked) void _SerializeClass_CArchive__QAEXPBUCRuntimeClass___Z_00506BF7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 10 AD 02 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xad
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x506c18
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 FB FF FF: call 0x50675b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x506c28
        __asm _emit 0xeb
        __asm _emit 0x10
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 FC FF FF: call 0x50687f
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
