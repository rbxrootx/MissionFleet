// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005364AB .. +0x44 bytes.
extern "C" __declspec(naked) void __GCRect__QBE_AV0_PBUtagRECT___Z_005364AB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 F0 F8 FF FF: call 0x535db0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8F CA FE FF: call 0x522f5b
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
