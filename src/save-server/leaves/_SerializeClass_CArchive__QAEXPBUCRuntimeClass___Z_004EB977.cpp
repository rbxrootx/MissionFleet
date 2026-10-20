// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EB977 .. +0x37 bytes.
extern "C" __declspec(naked) void _SerializeClass_CArchive__QAEXPBUCRuntimeClass___Z_004EB977() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 9D 03 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x4eb998
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 FB FF FF: call 0x4eb4db
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 10: jmp 0x4eb9a8
        __asm _emit 0xeb
        __asm _emit 0x10
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 57 FC FF FF: call 0x4eb5ff
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
