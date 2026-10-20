// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BE920 .. +0x27 bytes.
extern "C" __declspec(naked) void __ValidateExecute__YAHP6GHXZ_Z_004BE920() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 30 22 5E 00: call dword ptr [0x5e2230]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4be940
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
