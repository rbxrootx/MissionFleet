// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005328BF .. +0x44 bytes.
extern "C" __declspec(naked) void __HCRect__QBE_AV0_PBUtagRECT___Z_005328BF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 52 F9 FF FF: call 0x532226
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D2 AA FE FF: call 0x51d3b2
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xaa
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
