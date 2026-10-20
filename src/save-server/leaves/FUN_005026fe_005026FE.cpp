// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005026FE .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_005026fe_005026FE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 74 08: je 0x502719
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4E E5 FF FF: call 0x500c67
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 D0 FC FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xd0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
