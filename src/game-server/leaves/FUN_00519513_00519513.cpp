// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00519513 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_00519513_00519513() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 08: je 0x51952e
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 09 E5 FF FF: call 0x517a37
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C 83 FD FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
