// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD3A4 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_004cd3a4_004CD3A4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 FC FF FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F7 78 05 00: call 0x524cb9
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x78
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [eax], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
