// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873F850 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_5873f850_5873F850() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 FD FF FF: call 0x5873f5a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 11: je 0x5873f878
        __asm _emit 0x74
        __asm _emit 0x11
        push 8ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 BF 17 0F 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x17
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
