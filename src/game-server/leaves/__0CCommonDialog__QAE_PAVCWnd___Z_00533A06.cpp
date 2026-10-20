// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533A06 .. +0x27 bytes.
extern "C" __declspec(naked) void __0CCommonDialog__QAE_PAVCWnd___Z_00533A06() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC CA FB FF: call 0x4f04c7
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xca
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 5821dch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
