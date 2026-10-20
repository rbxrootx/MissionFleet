// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005596ED .. +0x2F bytes.
extern "C" __declspec(naked) void __0COleDialog__QAE_PAVCWnd___Z_005596ED() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 06 A3 FD FF: call 0x533a06
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xa3
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 5894cch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
