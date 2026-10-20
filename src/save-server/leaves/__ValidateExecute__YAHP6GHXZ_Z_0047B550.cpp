// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047B550 .. +0x27 bytes.
extern "C" __declspec(naked) void __ValidateExecute__YAHP6GHXZ_Z_0047B550() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 3C B8 68 00: call dword ptr [0x68b83c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x47b570
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
