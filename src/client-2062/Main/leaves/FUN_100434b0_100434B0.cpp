// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100434B0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_100434b0_100434B0() {
    __asm {
        mov edx, dword ptr [ecx + 154h]
        xor eax, eax
        mov dword ptr [ecx + 98h], eax
        mov dword ptr [ecx + 104h], eax
        mov eax, dword ptr [ecx + 158h]
        add eax, edx
        lea edx, [eax + eax*2]
        lea edx, [eax + edx*4]
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 9ch], edx
        ; Exact mapped bytes 74 0A: je 0x100434f5
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ecx + 0f8h], 40000000h
        ret
    }
}
