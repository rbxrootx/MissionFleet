// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F3C2 .. +0x22 bytes.
extern "C" __declspec(naked) void _rand_0041F3C2() {
    __asm {
        ; Exact mapped bytes E8 FC 30 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 14h]
        imul ecx, ecx, 343fdh
        add ecx, 269ec3h
        mov dword ptr [eax + 14h], ecx
        mov eax, ecx
        shr eax, 10h
        and eax, 7fffh
        ret
    }
}
