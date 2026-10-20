// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B77B .. +0x28 bytes.
extern "C" __declspec(naked) void __0COleDateTimeSpan_ATL__QAE_JHHH_Z_0054B77B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2E 25 F1 FF: call 0x45dcc8
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x25
        __asm _emit 0xf1
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
