// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F4D40 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_584f4d40_584F4D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        sar eax, 2
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 77 06: ja 0x584f4d68
        __asm _emit 0x77
        __asm _emit 0x06
        ; Exact mapped bytes E8 C9 FF FF FF: call 0x584f4d30
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 8]
        lea eax, [edx + eax*4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
