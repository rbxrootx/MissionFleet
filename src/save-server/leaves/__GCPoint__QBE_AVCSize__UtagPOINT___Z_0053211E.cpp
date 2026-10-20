// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053211E .. +0x2B bytes.
extern "C" __declspec(naked) void __GCPoint__QBE_AVCSize__UtagPOINT___Z_0053211E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        sub ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        sub eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 FA FF FF: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
