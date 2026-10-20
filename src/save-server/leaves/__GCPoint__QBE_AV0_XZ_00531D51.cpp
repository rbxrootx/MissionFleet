// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00531D51 .. +0x29 bytes.
extern "C" __declspec(naked) void __GCPoint__QBE_AV0_XZ_00531D51() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        neg eax
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3F FE FF FF: call 0x531bb0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
